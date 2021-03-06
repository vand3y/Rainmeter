[CPU_Name_Clock]
Meter=STRING
MeasureName=Mse_CPU_Name
MeasureName2=Mse_CPUClock_Total
X=30
Y=6
FontColor=#font1#
FontSize=8
FontFace=#Font1name#
AntiAlias=#AA#
NumOfDecimals=1
Text="%1 @ %2 MHz"

------------------------------------ CPU Usage Bar
[CPU_Usage]
Meter=STRING
X=30
Y=15r
FontColor= #font1#
FontSize=8
FontFace=#Font1Name#
StringAlign=LEFT
AntiAlias=#AA#
Text="Usage"

[CPU_Main_Bar_Back]
Meter=IMAGE
X=70
Y=3r
W=160
H=10
SolidColor=#color1#
AntiAlias=#AA#

[CPU_Bar]
Meter=BAR
MeasureName=Mse_CPU_Usage
X=0r
Y=0r
W=160
H=10
BarColor=#color2#
BarOrientation=HORIZONTAL
AntiAlias=#AA#

[CPU_Percent]
Meter=STRING
MeasureName=Mse_CPU_Usage
X=232
Y=-2r
FontColor= #color2#
FontSize=8
FontFace=#Font1Name#
StringAlign=LEFT
AntiAlias=#AA#
AutoScale=1
NumOfDecimals=0
Postfix=%

[CPUCoreMonitor]
@IncludeCore0=#CURRENTPATH##CPUCore0Monitor#
@IncludeCore1=#CURRENTPATH##CPUCore1Monitor#
@IncludeCore2=#CURRENTPATH##CPUCore2Monitor#
@IncludeCore3=#CURRENTPATH##CPUCore3Monitor#

------------------------------------ CPU Package
[CPU_Package]
Meter=STRING
X=30
Y=15r
FontColor=#font1#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="Package"

[CPU_Package_Bar_Back]
Meter=IMAGE
X=70
Y=3r
W=160
H=5
SolidColor=#color1#
AntiAlias=#AA#

[CPU_Package_Bar]
Meter=BAR
MeasureName=Mse_CPUPackage_Temp
X=0r
Y=0r
W=160
H=5
BarColor=#color8#
BarOrientation=HORIZONTAL
AntiAlias=#AA#
MaxValue=100
MinValue=0
AutoScale=0

[CPU_Package_Temp]
Meter=STRING
MeasureName=Mse_CPUPackage_Temp
X=232
Y=-4r
FontColor=#color8#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1°C"

[Spacer_CPU]
DynamicVariables=1
Meter=IMAGE
SolidColor=#color6#
X=25
Y=18r
H=1
W=(#CURRENTCONFIGWIDTH#-25)