------------------------------------ Core 3
[CPU_Core3]
Meter=STRING
X=30
Y=15r
FontColor=#font1#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
Text="Core 4"

[CPU_Core3_Bar_Back]
Meter=IMAGE
X=70
Y=3r
W=160
H=5
SolidColor=#color1#
AntiAlias=#AA#

[CPU_Core3T0_Bar]
Meter=BAR
MeasureName=Mse_CPU_Core3T0_Usage
X=0r
Y=0r
W=160
H=2
BarColor=#color2#
BarOrientation=HORIZONTAL
AntiAlias=#AA#

[CPU_Core3T1_Bar]
Meter=BAR
MeasureName=Mse_CPU_Core3T1_Usage
X=0r
Y=3r
W=160
H=2
BarColor=#color2#
BarOrientation=HORIZONTAL
AntiAlias=#AA#

[CPU_Core3_Clock]
Meter=STRING
MeasureName=Mse_CPUClock_Core3
X=232
Y=-7r
FontColor=#font1#
FontSize=7
FontFace=#Font1Name#
AntiAlias=#AA#
NumOfDecimals=1
Text="%1 MHz"