# send-arp
Attack arp table of victim

## usage
```shell
syntax : send-arp <interface> <sender ip> <target ip> [<sender ip 2> <target ip 2> ...]
sample : send-arp wlan0 192.168.10.2 192.168.10.1
```

## description

* `sender ip` is the victim's ip.
* `target ip` is the gateway's ip.

* `attacker` is **you**.

* `header/*` and skeleton codes are from [https://gitlab.com/gilgil/send-arp-test.git](https://gitlab.com/gilgil/send-arp-test.git)

## troble shooting

* [https://superuser.com/questions/1209497/how-do-you-enable-promiscuous-mode-in-vmware-workstation](https://superuser.com/questions/1209497/how-do-you-enable-promiscuous-mode-in-vmware-workstation)
* [https://communities.vmware.com/t5/VMware-Workstation-Pro/Allow-promiscuous-mode-vmware-Allow-promiscuousModePolicy/td-p/2296421](https://communities.vmware.com/t5/VMware-Workstation-Pro/Allow-promiscuous-mode-vmware-Allow-promiscuousModePolicy/td-p/2296421)

## demo

* demo.mp4 : demo on my(ugonfor) Attacker, Victim and Gateway.
* However, ping from the victim goes to my host PC which is host of attacker(guest vm). I have tried to fix this issue, but I've cannot find the true solution.
* On the other PC, I confirm that this code works correctly.
* 
![image](https://user-images.githubusercontent.com/56115311/135286165-36a4dc89-12c1-440a-8426-4839ab927cd2.png)
