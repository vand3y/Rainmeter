[GPU0_Stats_Text]
Meter=String
Text="Stat"
x=30
Y=3r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
LeftMouseUpAction=[!SetVariable ResetGPU0Usage 0][!SetVariable ResetGPU0TachMin 0][!SetVariable ResetGPU0TachMax 0][!SetVariable ResetGPU0MinTemp1 0][!SetVariable ResetGPU0MaxTemp2 0][!SetVariable ResetGPU0MinMem 0][!SetVariable ResetGPUMaxMem1 0]
Group=Min/Max

[GPU0_Stats_Average]
Meter=String
Text="Avg"
X=160
Y=0r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
Group=Average

[GPU0_Stats_Min_Text]
Meter=String
Text="Min"
x=70
Y=0r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
LeftMouseUpAction=[!SetVariable ResetGPU0TachMin 0][!SetVariable ResetGPU0MinTemp1 0][!SetVariable ResetGPU0MinMem 0]
Group=Min/Max

[GPU0_Stats_Average_30_Text]
Meter=String
Text=#AVERAGE1#
Postfix=" sec"
X=195
Y=0r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
Group=Average

[GPU0_Stats_Max_Text]
Meter=String
Text="Max"
x=110
Y=0r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
LeftMouseUpAction=[!SetVariable ResetGPU0Usage 0][!SetVariable ResetGPU0TachMax 0][!SetVariable ResetGPU0MaxTemp2 0][!SetVariable ResetGPUMaxMem1 0]
Group=Min/Max

[GPU0_Stats_Average_60_Text]
Meter=String
Text=#AVERAGE2#
Postfix=" sec"
X=235
Y=0r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
Group=Average

[GPU0_Stats_Usage_Text]
Meter=String
Text="Usage"
x=30
Y=12r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
LeftMouseUpAction=!SetVariable ResetGPU0Usage 0
Group=Min/Max

[GPU0_Stats_Usage_Average_Text]
Meter=String
Text="Usage"
X=160
Y=0r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
Group=Average

[GPU0_Usage_Average_30]
Meter=STRING
MeasureName=Mse_GPU0_Usage_Avg1
x=195
Y=0r
FontColor=#color2#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1 %"
Group=Average

[GPU0_Usage_Max]
METER=STRING
MeasureName=Mse_GPU0_Usage_Max
x=110
Y=0r
FontColor=#color2#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1 %"
LeftMouseUpAction=!SetVariable ResetGPU0Usage 0
Group=Min/Max

[GPU0_Usage_Average_60]
METER=STRING
MeasureName=Mse_GPU0_Usage_Avg2
X=235
Y=0r
FontColor=#color2#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1 %"
Group=Average

[GPU0_Stats_Fan_Text]
Meter=String
Text="Fan"
x=30
Y=12r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
LeftMouseUpAction=[!SetVariable ResetGPU0TachMin 0][!SetVariable ResetGPU0TachMax 0]
Group=Min/Max

[GPU0_Stats_Fan_Average_Text]
Meter=String
Text="Fan"
X=160
Y=0r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
Group=Average

[GPU0_RPM_Min]
METER=STRING
MeasureName=Mse_GPU0_Fan
x=70
Y=0r
FontColor=#color9#
FontSize=7
FontFace=#Font1name#
AntiAlias=#AA#
Text="%1"
LeftMouseUpAction=!SetVariable ResetGPU0TachMin 0
Group=Min/Max

[GPU0_RPM_Average_30]
METER=STRING
MeasureName=Mse_GPU0_Fan_Avg1
X=195
Y=0r
FontColor=#color9#
FontSize=7
FontFace=#Font1name#
AntiAlias=#AA#
Text="%1"
Group=Average

[GPU0_RPM_Max]
METER=STRING
MeasureName=Mse_GPU0_Fan_Max
x=110
Y=0r
FontColor=#color9#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1"
LeftMouseUpAction=!SetVariable ResetGPU0TachMax 0
Group=Min/Max

[GPU0_RPM_Average_60]
METER=STRING
MeasureName=Mse_GPU0_Fan_Avg2
X=235
Y=0r
FontColor=#color9#
FontSize=7
FontFace=#Font1name#
AntiAlias=#AA#
Text="%1"
Group=Average

[GPU0_Stats_Temp_Text]
Meter=String
Text="Temp"
x=30
Y=12r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
LeftMouseUpAction=[!SetVariable ResetGPU0MinTemp1 0][!SetVariable ResetGPU0MaxTemp2 0]
Group=Min/Max

[GPU0_Stats_Temp_Average_Text]
Meter=String
Text="Temp"
X=160
Y=0r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
Group=Average

[GPU0_Temp_Min]
METER=STRING
MeasureName=Mse_GPU0_Temp_Min
x=70
Y=0r
FontColor=#color8#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1°C"
LeftMouseUpAction=!SetVariable ResetGPU0MinTemp1 0
Group=Min/Max

[GPU0_Temp_Average_30]
METER=STRING
MeasureName=Mse_GPU0_Temp_Avg1
X=195
Y=0r
FontColor=#color8#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1°C"
Group=Average

[GPU0_Temp_Max]
METER=STRING
MeasureName=Mse_GPU0_Temp_Max
x=110
Y=0r
FontColor=#color8#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1°C"
LeftMouseUpAction=!SetVariable ResetGPU0MaxTemp2 0
Group=Min/Max

[GPU0_Temp_Average_60]
METER=STRING
MeasureName=Mse_GPU0_Temp_Avg2
X=235
Y=0r
FontColor=#color8#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1°C"
Group=Average

[GPU0_Stats_RAM_Text]
Meter=String
Text="Mem"
x=30
Y=12r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
LeftMouseUpAction=[!SetVariable ResetGPU0MinMem 0][!SetVariable ResetGPUMaxMem1 0]
Group=Min/Max

[GPU0_Stats_RAM_Average_Text]
Meter=String
Text="Mem"
X=160
Y=0r
FontColor=#font1#
FontSize=7
AntiAlias=#AA#
Group=Average

[GPU0_Memory_Usage_Min]
METER=STRING
MeasureName=Mse_GPU0_Memory_Used_Min
x=70
Y=0r
FontColor=#color4#
FontSize=7
FontFace=#Font1name#
AntiAlias=#AA#
Text="%1 MB"
LeftMouseUpAction=!SetVariable ResetGPU0MinMem 0
Group=Min/Max

[GPU0_Memory_Usage_Average_30]
METER=STRING
MeasureName=Mse_GPU0_Memory_Used_Avg1
X=195
Y=0r
FontColor=#color4#
FontSize=7
FontFace=#Font1name#
AntiAlias=#AA#
Text="%1 MB"
Group=Average

[GPU0_Memory_Usage_Max]
METER=STRING
MeasureName=Mse_GPU0_Memory_Used_Max
x=110
Y=0r
FontColor=#color4#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1 MB"
LeftMouseUpAction=!SetVariable ResetGPUMaxMem1 0
Group=Min/Max

[GPU0_Memory_Usage_Average_60]
METER=STRING
MeasureName=Mse_GPU0_Memory_Used_Avg2
X=235
Y=0r
FontColor=#color4#
FontSize=7
FontFace=#Font1name#
AntiAlias=#AA#
Text="%1 MB"
Group=Average

[GPU0_Stats_Vertical_Line]
Meter=IMAGE
SolidColor=#color6#
X=155
Y=-50r
H=65
W=1
UpdateDivider=3600

[Spacer_GPU0_Stats]
DynamicVariables=1
Meter=IMAGE
SolidColor=#color6#
X=25
Y=65r
H=1
W=(#CURRENTCONFIGWIDTH#-25)