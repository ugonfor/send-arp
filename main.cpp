#include <cstdio>
#include <pcap.h>
#include <iostream>
#include "send-arp.h"

void usage(char* argv[]) {
	printf("syntax: %s <interface> <sender ip> <target ip> [<sender ip 2> <target ip 2> ...]\n", argv[0]);
	printf("sample: %s  wlan0 192.168.10.2 192.168.10.1\n", argv[0]);
}

int main(int argc, char* argv[]) {
	if (argc < 4) {
		usage(argv);
		return -1;
	}
    
	char* dev = argv[1];
	char errbuf[PCAP_ERRBUF_SIZE];
	pcap_t* handle = pcap_open_live(dev, BUFSIZ, 1, 1, errbuf);
	if (handle == nullptr) {
		fprintf(stderr, "couldn't open device %s(%s)\n", dev, errbuf);
		return -1;
	}

	Mac myMac = GetMyMac(std::string(dev));
	std::cout << "[1] My Mac Address : " << std::string(myMac) << "\n";

	Ip myip = GetMyIp(std::string(dev));
	std::cout << "[1] My ip Address : " << std::string(myip) << "\n";

	Mac sender_mac = GetMacfromIp(handle, Ip(argv[2]), myMac, myip);
	std::cout << "[1] Sender Mac Address : " << std::string(sender_mac) << "\n";
	
	

/*
	EthArpPacket packet;

	MakeAttackPacket(&packet, argv[2], argv[3], myMac);

	int res = pcap_sendpacket(handle, reinterpret_cast<const u_char*>(&packet), sizeof(EthArpPacket));
	if (res != 0) {
		fprintf(stderr, "pcap_sendpacket return %d error=%s\n", res, pcap_geterr(handle));
	}

	pcap_close(handle);
*/

}
