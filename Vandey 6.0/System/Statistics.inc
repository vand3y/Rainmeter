[Spacer_Stat_Top]
Meter=IMAGE
SolidColor=#color6#
X=0
Y=0r
H=1
W=25

[Stats_Vertical_Text]
Meter=String
Text="Statistics"
X=6
Y=55r
Angle=-1.5707
FontColor=#font1#
FontSize=8
AntiAlias=#AA#

[CPU_RAM_Stats_Text]
Meter=String
Text="System"
X=30
Y=-52r 
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
LeftMouseUpAction=[!SetVariable ResetCPU1Usage 0][!SetVariable ResetCPUFanTach1Min 0][!SetVariable ResetCPUFanTach1Max 0][!SetVariable ResetRamMin 0][!SetVariable ResetRamMax 0][!SetVariable ResetCPU1MinTemp1 0][!SetVariable ResetCPU1MaxTemp2 0]
Group=Min/Max

[CPU_RAM_Stats_Text_Average]
Meter=String
Text="Avg"
X=160
Y=0r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
Group=Average

[CPU_RAM_Stats_Min_Text]
Meter=String
Text="Min"
X=70
Y=0r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
LeftMouseUpAction=[!SetVariable ResetCPUFanTach1Min 0][!SetVariable ResetRamMin 0][!SetVariable ResetCPU1MinTemp1 0]
Group=Min/Max

[CPU_RAM_Stats_Avg1]
Meter=String
Text=#AVERAGE1#
Postfix=" sec"
X=195
Y=0r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
Group=Average

[CPU_RAM_Stats_Max_Text]
Meter=String
Text="Max"
X=110
Y=0r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
LeftMouseUpAction=[!SetVariable ResetCPU1Usage 0][!SetVariable ResetCPUFanTach1Max 0][!SetVariable ResetRamMax 0][!SetVariable ResetCPU1MaxTemp2 0]
Group=Min/Max

[CPU_RAM_Stats_Avg2]
Meter=String
Text=#AVERAGE2#
Postfix=" sec"
X=235
Y=0r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
Group=Average

[CPU_Stats_Usage_Text]
Meter=String
Text="Usage"
X=30
Y=12r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
LeftMouseUpAction=[!SetVariable ResetCPU1Usage 0]
Group=Min/Max

[CPU_Stats_Usage_Text_Average]
Meter=String
Text="Usage"
X=160
Y=0r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
Group=Average

[CPU_Avg1]
METER=STRING
MeasureName=Mse_CPU_Usage_Avg1
X=195
Y=0r
FontColor= #color2#
FontSize=7
FontFace=#Font1Name#
StringAlign=LEFT
AntiAlias=#AA#
AutoScale=1
NumOfDecimals=0
Postfix=%
Group=Average

[CPU_Usage_Max]
METER=STRING
MeasureName=Mse_CPU_Usage_Max
X=110
Y=0r
FontColor= #color2#
FontSize=7
FontFace=#Font1Name#
StringAlign=LEFT
AntiAlias=#AA#
AutoScale=1
NumOfDecimals=0
Postfix=%
LeftMouseUpAction=!SetVariable ResetCPU1Usage 0
Group=Min/Max

[CPU_Avg2]
METER=STRING
MeasureName=Mse_CPU_Usage_Avg2
X=235
Y=0r
FontColor= #color2#
FontSize=7
FontFace=#Font1Name#
StringAlign=LEFT
AntiAlias=#AA#
AutoScale=1
NumOfDecimals=0
Postfix=%
Group=Average

[CPU_Stats_Fan_Text]
Meter=String
Text="Fan"
X=30
Y=12r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
LeftMouseUpAction=[!SetVariable ResetCPUFanTach1Min 0][!SetVariable ResetCPUFanTach1Max 0]
Group=Min/Max

[CPU_Stats_Fan_Text_Average]
Meter=String
Text="Fan"
X=160
Y=0r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
Group=Average

[CPU1_Fan_Tach_Min]
METER=STRING
MeasureName=Mse_AIO_FanRPM_Min
X=70
Y=0r
FontColor=#color9#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1"
LeftMouseUpAction=!SetVariable ResetCPUFanTach1Min 0
Group=Min/Max

[CPU1_Fan_Tach_Avg1]
Meter=String
MeasureName=Mse_AIO_FanRPM_Avg1
X=195
Y=0r
FontColor=#color9#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1"
Group=Average

[CPU1_Fan_Tach_Max]
METER=STRING
MeasureName=Mse_AIO_FanRPM_Max
X=110
Y=0r
FontColor=#color9#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1"
LeftMouseUpAction=!SetVariable ResetCPUFanTach1Max 0
Group=Min/Max

[CPU1_Fan_Tach_Avg2]
Meter=String
MeasureName=Mse_AIO_FanRPM_Avg2
X=235
Y=0r
FontColor=#color9#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1"
Group=Average

[CPU_Stats_Temp_Text]
Meter=String
Text="Temp"
X=30
Y=12r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
LeftMouseUpAction=[!SetVariable ResetCPU1MinTemp1 0][!SetVariable ResetCPU1MaxTemp2 0]
Group=Min/Max

[CPU_Stats_Temp_Text_Average]
Meter=String
Text="Temp"
X=160
Y=0r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
Group=Average

[CPU1_Temp_Min]
METER=STRING
MeasureName=Mse_CPUPackage_Temp_Min
X=70
Y=0r
FontColor=#color8#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1°C"
LeftMouseUpAction=!SetVariable ResetCPU1MinTemp1 0
Group=Min/Max

[CPU1_Temp_Average_30]
METER=STRING
MeasureName=Mse_CPUPackage_Temp_Avg1
X=195
Y=0r
FontColor=#color8#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1°C"
Group=Average

[CPU1_Temp_Max]
METER=STRING
MeasureName=Mse_CPUPackage_Temp_Max
X=110
Y=0r
FontColor=#color8#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1°C"
LeftMouseUpAction=!SetVariable ResetCPU1MaxTemp2 0
Group=Min/Max

[CPU1_Temp_Average_60]
METER=STRING
MeasureName=Mse_CPUPackage_Temp_Avg2
X=235
Y=0r
FontColor=#color8#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1°C"
Group=Average

[CPU_Stats_RAM_Text]
Meter=String
Text="RAM"
X=30
Y=12r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
LeftMouseUpAction=[!SetVariable ResetRamMin 0][!SetVariable ResetRamMax 0]
Group=Min/Max

[CPU_Stats_RAM_Text_Average]
Meter=String
Text="RAM"
X=160
Y=0r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
Group=Average

[Ram_Used_Min]
Meter=String
MeasureName=Mse_Memory_Min
X=70
Y=0r 
FontColor=#color4#
FontSize=7
StringAlign=LEFT
FontFace=#Font1Name#
NumOfDecimals=2
AntiAlias=#AA#
Scale=1000
Postfix=" GB"
LeftMouseUpAction=!SetVariable ResetRamMin 0
Group=Min/Max

[Ram_Used_Avg1]
Meter=String
MeasureName=Mse_Memory_Avg1
X=195
Y=0r 
FontColor=#color4#
FontSize=7
StringAlign=LEFT
FontFace=#Font1Name#
NumOfDecimals=2
AntiAlias=#AA#
Scale=1000
Postfix=" GB"
Group=Average

[Ram_Used_Max]
Meter=String
MeasureName=Mse_Memory_Max
X=110
Y=0r 
FontColor=#color4#
FontSize=7
StringAlign=LEFT
FontFace=#Font1Name#
NumOfDecimals=2
AntiAlias=#AA#
Scale=1000
Postfix=" GB"
LeftMouseUpAction=!SetVariable ResetRamMax 0
Group=Min/Max

[Ram_Used_Avg2]
Meter=String
MeasureName=Mse_Memory_Avg2
X=235
Y=0r 
FontColor=#color4#
FontSize=7
StringAlign=LEFT
FontFace=#Font1Name#
NumOfDecimals=2
AntiAlias=#AA#
Scale=1000
Postfix=" GB"
Group=Average

[Stats_Vertical_Line]
Meter=IMAGE
SolidColor=#color6#
X=155
Y=-50r
H=65
W=1
UpdateDivider=3600


[Spacer_Stat_Bottom]
DynamicVariables=1
Meter=IMAGE
SolidColor=#color6#
X=25
Y=0R
H=1
W=(#CURRENTCONFIGWIDTH#-25)