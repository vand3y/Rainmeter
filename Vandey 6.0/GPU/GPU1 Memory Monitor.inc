[GPU1_Used_Text]
Meter=STRING
X=70
Y=5r
FontColor=#font1#
FontSize=7
StringAlign=LEFT
FontFace=#Font1Name#
Text="Used: "
AntiAlias=#AA#

[GPU1_Memory_Used]
Meter=STRING
MeasureName=Mse_GPU1_Memory_Used
X=0R
Y=0r
FontColor=#color4#
FontSize=7
FontFace=#Font1name#
AntiAlias=#AA#
Scale=1024.0
NumOfDecimals=2
Text="%1 GB"

[GPU1_Memory_Freq]
Meter=STRING
MeasureName=Mse_GPU1_Memory_Clock
X=170
Y=0r
FontColor=#font1#
FontSize=7
StringAlign=LEFT
FontFace=#Font1Name#
Text="Freq: %1 MHz"
AntiAlias=#AA#
NumOfDecimals=1

[GPU1_Memory_Usage_Text]
Meter=STRING
X=30
Y=15r
FontColor=#font1#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="Mem"

[GPU1_Memory_Usage_Bar_Back]
Meter=IMAGE
X=70
Y=3r
W=160
H=5
SolidColor=#color1#
AntiAlias=#AA#

[GPU1_Memory_Usage_Bar]
Meter=BAR
MeasureName=Mse_GPU1_Memory_Usage
X=0r
Y=0r
W=160
H=5
BarColor=#color4#
BarOrientation=HORIZONTAL
AntiAlias=#AA#

[GPU1_Ram_Used_Percent]
Meter=String
MeasureName=Mse_GPU1_Memory_Usage
X=232
Y=-4r
FontColor=#color4#
FontSize=7
StringAlign=LEFT
FontFace=#Font1Name#
AntiAlias=#AA#
Text="%1 %"

[Spacer_GPU1_Memory]
Meter=IMAGE
SolidColor=#color6#
X=25
Y=18r
H=1
W=260