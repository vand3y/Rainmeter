[Mse_System_Uptime]
Measure=Uptime
Substitute="d":" days,",":":" hours, "
UpdateDivider=60

[System_Uptime_Text]
Meter=String
MeasureName=Mse_System_Uptime
Prefix="System Uptime: "
Postfix=" minutes"
X=30
Y=3r
FontColor=#font1#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#

[Mse_Processes]
Measure=Plugin
Plugin=Perfmon.dll
PerfMonObject="System"
PerfMonCounter="Processes"
PerfMonInstance=""
PerfMonDifference=0

[Processes_Text]
Meter=String
MeasureName=Mse_Processes
Prefix="Processes: "
X=30
Y=15r
FontColor=#font1#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#

[Spacer_SystemUptime]
DynamicVariables=1
Meter=IMAGE
SolidColor=#color6#
X=25
Y=18r
H=1
W=(#CURRENTCONFIGWIDTH#-25)