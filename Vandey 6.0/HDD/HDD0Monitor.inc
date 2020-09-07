------------------------------------ HDD 1 Information
[Rl_Drive1UsedString]
Meter=STRING
MeasureName=Mse_Drive1Used
X=85
Y=6
FontColor=#font1#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#
AutoScale=1
NumOfDecimals=1
Prefix="Used: "

[Rl_Drive1Free]
Meter=STRING
MeasureName=Mse_Drive1Free
X=200
Y=0r
FontColor=#font1#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#
AutoScale=1
NumOfDecimals=1
Prefix="Free: "

------------------------------------ HDD 1 Bar

[Drive1%]
Meter=STRING
X=35
Y=13r
FontColor=#font1#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#
Text="Drive #drive1#"
UpdateDivider=3600
LeftMouseDownAction=#Drive1#

[Drive1Back]
Meter=IMAGE
X=81
Y=4r
W=195
H=6
SolidColor=#color1#

[Drive_1_Norm_Caution]
Measure=Calc
Formula=((Mse_Drive1Used/Mse_Drive1Size)*100)
UpdateDivider=2
IfBelowValue=75
IfBelowAction=!Execute [!RainmeterShowMeter Rl_Drive1Used_Green][!RainmeterHideMeter Rl_Drive1Used_Orange][!RainmeterHideMeter Rl_Drive1Used_Red]
IfAboveValue=74
IfAboveAction=!Execute [!RainmeterHideMeter Rl_Drive1Used_Green][!RainmeterShowMeter Rl_Drive1Used_Orange][!RainmeterHideMeter Rl_Drive1Used_Red]

[Drive_1_Low]
Measure=Calc
Formula=((Mse_Drive1Used/Mse_Drive1Size)*100)
UpdateDivider=2
IfAboveValue=89
IfAboveAction=!Execute [!RainmeterHideMeter Rl_Drive1Used_Green][!RainmeterHideMeter Rl_Drive1Used_Orange][!RainmeterShowMeter Rl_Drive1Used_Red]


[Rl_Drive1Used_Green]
Meter=Bar
MeasureName=Mse_Drive1Used
X=0r
Y=0r
W=160
H=6
BarColor=#color4#
BarOrientation=HORIZONTAL
hidden=1

[Rl_Drive1Used_Orange]
Meter=Bar
MeasureName=Mse_Drive1Used
X=0r
Y=0r
W=160
H=6
BarColor=#color4#
BarOrientation=HORIZONTAL
hidden=1

[Rl_Drive1Used_Red]
Meter=Bar
MeasureName=Mse_Drive1Used
X=0r
Y=0r
W=160
H=6
BarColor=#color8#
BarOrientation=HORIZONTAL
hidden=1

------------------------------------ HDD 1 Bar End

------------------------------------ HDD 1 Access Graph

[Rl_Drive1Read_txt]
Meter=STRING
X=30
Y=15r
FontColor=#font1#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#
Text="R: "

[Rl_Drive1Read]
Meter=STRING
MeasureName=Mse_Drive1Read
X=0R
Y=0r
FontColor=#color4#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#
AutoScale=1
NumOfDecimals=1

[Rl_Drive1Write_txt]
Meter=STRING
X=30
Y=32r
FontColor=#font1#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#
Prefix="W: "

[Rl_Drive1Write]
Meter=STRING
MeasureName=Mse_Drive1Write
X=0R
Y=0r
FontColor=#color2#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#
AutoScale=1
NumOfDecimals=1

[Rl_Drive1Read1]
Meter=Line
MeasureName=Mse_Drive1Read
X=100
Y=-38r
H=30
W=175
LineCount=1
LineColor=#color4#
AutoScale=1
AntiAlias=#AA#

[Rl_Drive1Read2]
Meter=Histogram
MeasureName=Mse_Drive1Read
X=0r
Y=0r
H=30
W=175
PrimaryColor=#color5#
AutoScale=1
AntiAlias=#AA#

[Rl_Drive1Write1]
Meter=Line
MeasureName=Mse_Drive1Write
X=0r
Y=30r
H=30
W=175
Flip=1
LineCount=1
LineColor=#color2#
AutoScale=1
AntiAlias=#AA#

[Rl_Drive1Write2]
Meter=Histogram
MeasureName=Mse_Drive1Write
X=0r
Y=0r
H=30
W=175
Flip=1
PrimaryColor=#color3#
AutoScale=1
AntiAlias=#AA#

[Spacer_Drive0]
Meter=IMAGE
SolidColor=#color6#
X=25
Y=33r
H=1
W=260