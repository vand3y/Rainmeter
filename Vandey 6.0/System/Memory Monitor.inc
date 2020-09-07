[Memory_Used_Text]
Meter=STRING
X=70
Y=5r
FontColor=#font1#
FontSize=7
StringAlign=LEFT
FontFace=#Font1Name#
Text="Used: "
AntiAlias=#AA#

[Memory_Used]
MeasureName=Mse_Physical_Memory_Used
Meter=STRING
X=0R
Y=0r
FontColor=#color4#
FontSize=7
StringAlign=LEFT
FontFace=#Font1Name#
NumOfDecimals=3
AntiAlias=#AA#
Scale=1000
Postfix=" GB"

[Ram_Free_Text]
Meter=STRING
X=170
Y=0r
FontColor=#font1#
FontSize=7
StringAlign=LEFT
FontFace=#Font1Name#
Text="Free: "
AntiAlias=#AA#


[Ram_Free]
MeasureName=Mse_Physical_Memory_Available
Meter=STRING
X=0R
Y=0r
FontColor=#color4#
FontSize=7
StringAlign=LEFT
FontFace=#Font1Name#
NumOfDecimals=3
AntiAlias=#AA#
Scale=1000
Postfix=" GB"

[Mtr_RAM_Text]
Meter=STRING
X=30
Y=15r
FontColor=#font1#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="RAM"

[RAM_Back_Bar]
Meter=IMAGE
X=70
Y=3r
W=160
H=5
SolidColor=#color1#
AntiAlias=#AA#

[RAM_Bar]
Meter=BAR
MeasureName=Mse_Physical_Memory_Load
X=0r
Y=0r
W=160
H=5
BarColor=#color4#
BarOrientation=HORIZONTAL

[Ram_Used_Percent]
Meter=String
MeasureName=Mse_Physical_Memory_Load
X=232
Y=-4r
FontColor=#color4#
FontSize=7
StringAlign=LEFT
FontFace=#Font1Name#
Percentual=1
AntiAlias=#AA#
NumOfDecimals=1
Text="%1 %"

[Spacer_Memory]
DynamicVariables=1
Meter=IMAGE
SolidColor=#color6#
X=25
Y=16r
H=1
W=(#CURRENTCONFIGWIDTH#-25)