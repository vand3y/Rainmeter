[AIO_Name]
Meter=String
MeasureName=Mse_AIO_Name
X=30
Y=3r
FontColor=#font1#
FontSize=8
FontFace=#Font1name#
AntiAlias=#AA#
Text=%1

[AIO_Pump]
Meter=String
X=30
Y=15r
FontColor=#font1#
FontSize=7
FontFace=#Font1name#
AntiAlias=#AA#
Text="Pump"

[AIO_Pump_Bar_Back]
Meter=IMAGE
X=70
Y=3r
W=160
H=5
SolidColor=#color1#
AntiAlias=#AA#

[AIO_Pump_Bar]
Meter=BAR
MeasureName=Mse_AIO_PumpRPM
X=0r
Y=0r
W=160
H=5
BarColor=#color2#
BarOrientation=HORIZONTAL
AntiAlias=#AA#

[AIO_Pump_Speed]
Meter=String
MeasureName=Mse_AIO_PumpRPM
X=232
Y=-4r
FontColor=#color2#
FontSize=7
FontFace=#Font1name#
AntiAlias=#AA#
Text="%1 RPM"

[AIO_Fan]
Meter=String
X=30
Y=12r
FontColor=#font1#
FontSize=7
FontFace=#Font1name#
AntiAlias=#AA#
Text="Fan"

[AIO_Fan_Bar_Back]
Meter=IMAGE
X=70
Y=3r
W=160
H=5
SolidColor=#color1#
AntiAlias=#AA#

[AIO_Fan_Bar]
Meter=BAR
MeasureName=Mse_AIO_FanRPM
X=0r
Y=0r
W=160
H=5
BarColor=#color9#
BarOrientation=HORIZONTAL
AntiAlias=#AA#

[AIO_Fan_Speed]
Meter=String
MeasureName=Mse_AIO_FanRPM
X=232
Y=-4r
FontColor=#color9#
FontSize=7
FontFace=#Font1name#
AntiAlias=#AA#
Text="%1 RPM"

[AIO_Liquid]
Meter=String
X=30
Y=12r
FontColor=#font1#
FontSize=7
FontFace=#Font1name#
AntiAlias=#AA#
Text="Liquid"

[AIO_Liquid_Bar_Back]
Meter=IMAGE
X=70
Y=3r
W=160
H=5
SolidColor=#color1#
AntiAlias=#AA#

[AIO_Liquid_Bar]
Meter=BAR
MeasureName=Mse_AIO_LiquidTemp
X=0r
Y=0r
W=160
H=5
BarColor=#color8#
BarOrientation=HORIZONTAL
AntiAlias=#AA#

[AIO_Liquid_Temp]
Meter=String
MeasureName=Mse_AIO_LiquidTemp
X=232
Y=-4r
FontColor=#color8#
FontSize=7
FontFace=#Font1name#
AntiAlias=#AA#
Text="%1 °C"

[Spacer_AIO]
DynamicVariables=1
Meter=IMAGE
SolidColor=#color6#
X=25
Y=18r
H=1
W=(#CURRENTCONFIGWIDTH#-25)