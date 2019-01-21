/* For license and copyright information please see LEGAL file in repository */

/*
Each app has 128bit UUID.
*/

/*
Each app can have one 8 bit range IPv6 by user given access.
IPs belong to app until app release them or app removed from os

OS just support IPv6. 5 level of routing exist:
- 0 to 31 bit (Global routing)
- 32 to 63 bit (ISP routing) so each isp have unique IPv6 32+64 bit range!
- 64 to 96 bit (Edge routing) so each edge routing have unique IPv6 32+16+16 bit range!
- 97 to 112 bit (OS routing) so each os(thing) have unique IPv6 16+16 bit range!
- 113 to 128 bit (App routing) so each app have unique IPv6 16 bit range!

By each block OS get from upper router it is use related router-ip.
*/

/*
when app request to specific service, OS check user given permission
	IP                bool // Internet. Charge user if network available!
	Notification      bool
	RunInBackground   bool
	UseIPInBackground bool
	Camera            bool
	Location          bool // GPS, ...
	Speaker           bool
	Microphone        bool
	BodySensor        bool
	Bluetooth         bool
	USB               bool
	NFC               bool
	FingerPrint       bool
	Vibrate           bool
*/