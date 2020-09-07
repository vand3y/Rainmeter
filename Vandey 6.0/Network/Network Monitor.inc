[WAN_Text]
Meter=STRING
X=35
Y=5r
FontColor=#font1#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#
Text="WAN IP:"

[WAN_IP_Text]
Meter=STRING
MeterStyle=StyleText
MeasureName=Mse_WAN
X=45r
Y=0r
FontColor=#font1#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#

[Number_Connection]
Meter=String
MeasureName=Mse_Connections
X=173
Y=0r
Prefix="Connections: "
FontColor=#font1#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#

[Local_Text]
Meter=STRING
X=35
Y=15r
Text="Local IP:"
FontColor=#font1#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#

[LAN_IP_Text]
Meter=STRING
MeasureName=Mse_LAN
X=45r
Y=0r
FontColor=#font1#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#
UpdateDivider=30

[Network_UP_Text]
Meter=STRING
X=35
Y=20r
FontColor=#font1#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#
Text="Network Traffic UP:"

[Network_UP_Speed_Text]
Meter=STRING
MeasureName=TCPOut
X=133
Y=0r
FontColor=#color4#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#
AutoScale=1
NumOfDecimals=1

[Network_UP_All_Text]
Meter=STRING
X=220
Y=0r
StringAlign=Right
Text="Total UL: "
FontColor=#font1#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#

[Network_UP_All_Numerical_Text]
Meter=STRING
MeasureName=TCPOutAll
X=45r
Y=0r
StringAlign=Right
AutoScale=1
NumOfDecimals=1
LeftMouseDownAction=!RainmeterResetStats
FontColor=#color4#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#

[Network_DL_Text]
Meter=STRING
X=35
Y=18r
FontColor=#font1#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#
Text="Network Traffic DL:"

[Network_DL_Speed_Text]
Meter=STRING
MeasureName=TCPIN
X=133
Y=0r
FontColor=#color2#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#
AutoScale=1
NumOfDecimals=1

[Network_DL_All_Text]
Meter=STRING
X=220
Y=0r
StringAlign=Right
Text="Total DL: "
FontColor=#font1#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#


[Network_DL_All_Numerical_Text]
Meter=STRING
MeasureName=TCPINAll
X=45r
Y=0r
StringAlign=Right
AutoScale=1
NumOfDecimals=1
LeftMouseDownAction=!RainmeterResetStats
FontColor=#color2#
FontSize=8
FontFace=#Font1Name#
AntiAlias=#AA#

[Spacer_Network_Monitor]
Meter=IMAGE
SolidColor=#color6#
X=25
Y=18r
H=1
W=260