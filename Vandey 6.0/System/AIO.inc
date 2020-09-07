[Mse_AIO_Name]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#AIOId#
HWiNFOSensorInstance=#AIOInstanceId#
HWiNFOType=SensorName

[Mse_AIO_LiquidTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#AIOId#
HWiNFOSensorInstance=#AIOInstanceId#
HWiNFOEntryId=#AIOLiquidTempId#
HWiNFOType=CurrentValue
MinValue=20
MaxValue=90

[Mse_AIO_FanRPM]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#AIOId#
HWiNFOSensorInstance=#AIOInstanceId#
HWiNFOEntryId=#AIOFanSpeedId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=2700

[Mse_AIO_PumpRPM]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#AIOId#
HWiNFOSensorInstance=#AIOInstanceId#
HWiNFOEntryId=#AIOPumpSpeedId#
HWiNFOType=CurrentValue
MinValue=1800
MaxValue=3100

[Mse_AIO_FanRPM_Min]
Measure=Calc
Formula=Mse_AIO_FanRPM_Min #CPUFanTach1# Mse_AIO_FanRPM ? Mse_AIO_FanRPM_Min*#ResetCPUFanTach1Min# : Mse_AIO_FanRPM*#ResetCPUFanTach1Min#
IfBelowValue=1
IfBelowAction=[!SetVariable ResetCPUFanTach1Min 1] [!SetVariable CPUFanTach1 >]
IfAboveValue=0
IfAboveAction=!SetVariable CPUFanTach1 <
DynamicVariables=1

[Mse_AIO_FanRPM_Max]
Measure=Calc
Formula=Mse_AIO_FanRPM_Max < Mse_AIO_FanRPM ? Mse_AIO_FanRPM*#ResetCPUFanTach1Max# : Mse_AIO_FanRPM_Max*#ResetCPUFanTach1Max#
IfBelowValue=1
IfBelowAction=!SetVariable ResetCPUFanTach1Max 1
DynamicVariables=1

[Mse_AIO_FanRPM_Avg1]
Measure=Calc
Formula=Mse_AIO_FanRPM
AverageSize=#AVERAGE1#

[Mse_AIO_FanRPM_Avg2]
Measure=Calc
Formula=Mse_AIO_FanRPM
AverageSize=#AVERAGE2#