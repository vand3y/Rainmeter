------------------------------------ CPU Graph

[CPU_Graph_color20]
Meter=Line
MeasureName=Mse_CPU_Usage
X=30
Y=3r
H=46
W=250
LineCount=1
LineColor=#color2#
AntiAlias=#AA#

[CPU_Graph_Main]
Meter=HISTOGRAM
MeasureName=Mse_CPU_Usage
X=0r
Y=0r
H=46
W=250
PrimaryColor=#color3#
AntiAlias=#AA#

------------------------------------ CPU 1 Temp Graph

[CPU_1_Temp_Graph]
Meter=Line
MeasureName=Mse_CPUPackage_Temp
X=0r
Y=0r
H=44
W=250
LineCount=1
LineColor=#color8#
AntiAlias=#AA#

------------------------------------ FAN Graph

[CPU_FanTach_Graph]
Meter=Line
MeasureName=Mse_AIO_FanRPM
X=30
Y=0r
H=44
W=250
LineCount=1
LineColor=#color9#
AntiAlias=#AA#

------------------------------------ RAM Graph

[RAM_Graph_color20]
Meter=Line
MeasureName=Mse_Physical_Memory_Load
X=30
Y=0r
H=44
W=250
LineCount=1
LineColor=#color4#
AntiAlias=#AA#

------------------------------------ End Temp Graphs

[Spacer_Graphs]
DynamicVariables=1
Meter=IMAGE
SolidColor=#color6#
X=25
Y=48r
H=1
W=(#CURRENTCONFIGWIDTH#-25)