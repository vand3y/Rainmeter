[GPU0_Name]
Meter=String
MeasureName=Mse_GPU0_Name
MeasureName2=Mse_GPU0_Clock
X=30
Y=5r
FontColor=#font1#
FontSize=8
FontFace=#Font1name#
AntiAlias=#AA#
Text="%1 @ %2 MHz"
NumOfDecimals=1

[GPU0_Usage_Text]
Meter=String
X=30
Y=18r
FontColor=#font1#
FontSize=8
FontFace=#Font1name#
StringAlign=LEFT
AntiAlias=#AA#
Text="Usage"

[GPU0_Usage_Bar_Black]
Meter=IMAGE
X=70
Y=3r
W=160
H=10
SolidColor=#color1#
AntiAlias=#AA#

[GPU0_Usage_Bar]
Meter=BAR
MeasureName=Mse_GPU0_Usage
X=0r
Y=0r
W=160
H=10
BarColor=#color2#
BarOrientation=HORIZONTAL
AntiAlias=#AA#

[GPU0_Usage]
Meter=String
MeasureName=Mse_GPU0_Usage
X=232
Y=-2r
FontColor=#color2#
FontSize=8
FontFace=#Font1name#
StringAlign=LEFT
AntiAlias=#AA#
AutoScale=1
NumOfDecimals=0
Postfix=%

--------------------------- GPU Fan
[GPU0_Fan]
Meter=String
X=30
Y=18r
FontColor=#font1#
FontSize=7
FontFace=#Font1name#
AntiAlias=#AA#
Text="Fan"

[GPU0_Fan_Speed_Bar_Back]
Meter=IMAGE
X=70
Y=3r
W=160
H=5
SolidColor=#color1#
AntiAlias=#AA#

[GPU0_Fan_Speed_Bar]
Meter=BAR
MeasureName=Mse_GPU0_Fan
X=0r
Y=0r
W=160
H=5
BarColor=#color9#
BarOrientation=HORIZONTAL
AntiAlias=#AA#

[GPU0_Fan_RPM]
Meter=STRING
MeasureName=Mse_GPU0_Fan
X=232
Y=-4r
FontColor=#color9#
FontSize=7
FontFace=#Font1name#
AntiAlias=#AA#
Text="%1 RPM"

------------------------- GPU Temp
[GPU0_Name_Text]
Meter=STRING
X=30
Y=15r
FontColor=#font1#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="Temp"

[GPU0_Temp_Bar_Back]
Meter=IMAGE
X=70
Y=3r
W=160
H=5
SolidColor=#color1#
AntiAlias=#AA#

[GPU0_Temp_Bar]
Meter=BAR
MeasureName=Mse_GPU0_Temp
X=0r
Y=0r
W=160
H=5
BarColor=#color8#
BarOrientation=HORIZONTAL
AntiAlias=#AA#


[GPU0_Temp_Text]
Meter=STRING
MeasureName=Mse_GPU0_Temp
X=232
Y=-4r
FontColor=#color8#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1°C"

[Spacer_GPU0]
Meter=IMAGE
SolidColor=#color6#
X=25
Y=18r
H=1
W=260