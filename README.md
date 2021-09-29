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

[https://superuser.com/questions/1209497/how-do-you-enable-promiscuous-mode-in-vmware-workstation](https://superuser.com/questions/1209497/how-do-you-enable-promiscuous-mode-in-vmware-workstation)
[https://communities.vmware.com/t5/VMware-Workstation-Pro/Allow-promiscuous-mode-vmware-Allow-promiscuousModePolicy/td-p/2296421](https://communities.vmware.com/t5/VMware-Workstation-Pro/Allow-promiscuous-mode-vmware-Allow-promiscuousModePolicy/td-p/2296421)
