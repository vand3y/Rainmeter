[Mse_Time]
Measure=Time
Format=%#I:%M

[Mse_Time2]
Measure=Time

[Ring_Seconds]
Meter=ROUNDLINE
MeasureName=Mse_Time2
X=43
Y=16r
LineWidth=.1
LineLength=6
LineStart=8
StartAngle=4.7124
RotationAngle=6.28
ValueReminder=60
AntiAlias=1
LineColor=255,255,255,210
Solid=1

[Mse_Ring]
Measure=Calc
Formula=360

[MeterAnalogBG]
Meter=ROUNDLINE
MeasureName=Mse_Ring
X=0r
Y=0r
LineWidth=.1
LineLength=8
LineStart=7
StartAngle=47.55
RotationAngle=6.28
AntiAlias=1
LineColor=255,255,255,10
Solid=1


[MeterTime]
MeasureName=Mse_Time
Meter=STRING
X=22r
Y=-9r
FontColor=#font1#
FontSize=11
;StringStyle=bold
FontFace=#Font1Name# 
AntiAlias=#AA#

-------------------------------------------------------------CALENDAR

[Mse_Week]
Measure=Time
Format="%a"
;Substitute="Sun.","Mon.","Tues.","Wed.","Thurs.","Fri.","Sat."
UpdateDivider=30

[Mse_Date]
Measure=Time
Format="%b %d, %Y"
;Format="%d %B %Y"
;Substitute="Jan.","Feb.","Mar.","Apr.","May","June","July","Aug.","Sept.","Oct.","Nov.","Dec."
UpdateDivider=30

[MeterDay]
Meter=STRING
MeasureName=Mse_Week
X=50r
Y=0r
StringStyle=NORMAL
FontColor=#font1#
FontSize=10
FontFace=#Font1Name# 
AntiAlias=#AA#

[MeterDate]
Meter=STRING
MeasureName=Mse_Date
X=50r
Y=0r
StringStyle=NORMAL
FontColor=#font1#
FontSize=10
FontFace=#Font1Name# 
AntiAlias=#AA#

[Spacer_SystemTime]
DynamicVariables=1
Meter=IMAGE
SolidColor=#color6#
X=25
Y=25r
H=1
W=(#CURRENTCONFIGWIDTH#-25)