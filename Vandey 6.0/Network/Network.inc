;Upload
[TCPOut]
Measure=NetOut
Interface=#Interface#
UseBits=1
MaxValue=(#SpeedU#*1048576)

[TCPOutAll]
Measure=NetOut
Interface=#Interface#
Cumulative=1

;Download
[TCPIn]
Measure=NetIn
Interface=#Interface#
UseBits=1
MaxValue=(#SpeedD#*1048576)

[TCPInAll]
Measure=NetIn
Interface=#Interface#
Cumulative=1

[Mse_WAN]
Measure=Plugin
Plugin=WebParser.dll
URL=http://gd.geobytes.com/gd?after=-1&variables=GeobytesIpAddress
RegExp=(?siU)sGeobytesIpAddress="(.*)";
StringIndex=1
UpdateDivider=-1

[Mse_LAN]
Measure=Plugin
Plugin=Plugins\SysInfo.dll
SysInfoType=IP_ADDRESS
SysInfoData=1
UpdateDivider=30

[Mse_Connections]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=TCPv4
PerfMonCounter="Connections Established"
PerfMonInstance=
PerfMonDifference=0