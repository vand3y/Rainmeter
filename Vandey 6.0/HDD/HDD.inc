[Mse_Drive1Read]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#drive1#"

[Mse_Drive1Write]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#drive1#"

[Mse_Drive1Free]
Measure=FreeDiskSpace
Drive=#Drive1#
UpdateDivider=2

[Mse_Drive1Name]
Measure=FreeDiskSpace
Drive=#Drive1#
UpdateDivider=2
Label=1
UpdateDivider=3600

[Mse_Drive1Used]
Measure=FreeDiskSpace
Drive=#Drive1#
InvertMeasure=1
UpdateDivider=2

[Mse_Drive1Size]
Measure=FreeDiskSpace
Drive=#Drive1#
Total=1
UpdateDivider=3600

[Mse_Drive2Read]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#drive2#"

[Mse_Drive2Write]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#drive2#"

[Mse_Drive2Free]
Measure=FreeDiskSpace
Drive=#drive2#
UpdateDivider=2

[Mse_Drive2Name]
Measure=FreeDiskSpace
Drive=#drive2#
UpdateDivider=2
Label=1
UpdateDivider=3600

[Mse_Drive2Used]
Measure=FreeDiskSpace
Drive=#drive2#
InvertMeasure=1
UpdateDivider=2

[Mse_Drive2Size]
Measure=FreeDiskSpace
Drive=#Drive2#
Total=1
UpdateDivider=3600

[Mse_Drive3Read]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#Drive3#"

[Mse_Drive3Write]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#Drive3#"

[Mse_Drive3Free]
Measure=FreeDiskSpace
Drive=#Drive3#
UpdateDivider=2

[Mse_Drive3Name]
Measure=FreeDiskSpace
Drive=#Drive3#
UpdateDivider=2
Label=1
UpdateDivider=3600

[Mse_Drive3Used]
Measure=FreeDiskSpace
Drive=#Drive3#
InvertMeasure=1
UpdateDivider=2

[Mse_Drive3Size]
Measure=FreeDiskSpace
Drive=#Drive3#
Total=1
UpdateDivider=3600

[Mse_Drive4Read]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#Drive4#"

[Mse_Drive4Write]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#Drive4#"

[Mse_Drive4Free]
Measure=FreeDiskSpace
Drive=#Drive4#
UpdateDivider=2

[Mse_Drive4Name]
Measure=FreeDiskSpace
Drive=#Drive4#
UpdateDivider=2
Label=1
UpdateDivider=3600

[Mse_Drive4Used]
Measure=FreeDiskSpace
Drive=#Drive4#
InvertMeasure=1
UpdateDivider=2

[Mse_Drive4Size]
Measure=FreeDiskSpace
Drive=#Drive4#
Total=1
UpdateDivider=3600