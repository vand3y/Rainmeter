[Mse_CPU_Name]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#CPUId#
HWiNFOSensorInstance=0x0
HWiNFOType=SensorNameCustom

[Mse_CPU_Usage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#CPUId#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=#CPUTotalUsageId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[Mse_CPU_Usage_Max]
Measure=Calc
Formula=Mse_CPU_Usage_Max < Mse_CPU_Usage ? Mse_CPU_Usage*#ResetCPU1Usage# : Mse_CPU_Usage_Max*#ResetCPU1Usage#
IfBelowValue=1
IfBelowAction=!SetVariable ResetCPU1Usage 1
DynamicVariables=1

[Mse_CPU_Usage_Avg1]
Measure=Calc
Formula=Mse_CPU_Usage
AverageSize=#AVERAGE1#

[Mse_CPU_Usage_Avg2]
Measure=Calc
Formula=Mse_CPU_Usage
AverageSize=#AVERAGE2#

[Mse_CPU_Core0T0_Usage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#CPUId#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=#Core0T0UsageId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[Mse_CPU_Core0T1_Usage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#CPUId#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=#Core0T1UsageId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[Mse_CPU_Core1T0_Usage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#CPUId#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=#Core1T0UsageId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[Mse_CPU_Core1T1_Usage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#CPUId#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=#Core1T1UsageId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[Mse_CPU_Core2T0_Usage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#CPUId#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=#Core2T0UsageId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[Mse_CPU_Core2T1_Usage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#CPUId#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=#Core2T1UsageId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[Mse_CPU_Core3T0_Usage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#CPUId#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=#Core3T0UsageId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[Mse_CPU_Core3T1_Usage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#CPUId#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=#Core3T1UsageId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[Mse_CPUClock_Core0]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#CPUId#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=#Core0ClockId#
HWiNFOType=CurrentValue

[Mse_CPUClock_Core1]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#CPUId#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=#Core1ClockId#
HWiNFOType=CurrentValue

[Mse_CPUClock_Core2]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#CPUId#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=#Core2ClockId#
HWiNFOType=CurrentValue

[Mse_CPUClock_Core3]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#CPUId#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=#Core3ClockId#
HWiNFOType=CurrentValue

[Mse_CPUClock_Total]
Measure=Calc
Formula=(Mse_CPUClock_Core0 + Mse_CPUClock_Core1 + Mse_CPUClock_Core2 + Mse_CPUClock_Core3)/4.0

[Mse_CPUPackage_Temp]
Measure=Plugin
PlugIn=HWiNFO
HWiNFOSensorId=#CPUThermalId#
HWiNFOSensorInstance=#CPUThermalInstanceId#
HWiNFOEntryId=#CPUPackageId#
HWiNFOType=CurrentValue
MaxValue=90
MinValue=20

[Mse_CPUPackage_Temp_Min]
Measure=Calc
Formula=Mse_CPUPackage_Temp_Min #CPUMinTemp1# Mse_CPUPackage_Temp ? Mse_CPUPackage_Temp_Min*#ResetCPU1MinTemp1# : Mse_CPUPackage_Temp*#ResetCPU1MinTemp1#
IfBelowValue=1
IfBelowAction=[!SetVariable ResetCPU1MinTemp1 1] [!SetVariable CPUMinTemp1 >]
IfAboveValue=0
IfAboveAction=!SetVariable CPUMinTemp1 <
DynamicVariables=1

[Mse_CPUPackage_Temp_Max]
Measure=Calc
Formula=Mse_CPUPackage_Temp_Max < Mse_CPUPackage_Temp ? Mse_CPUPackage_Temp*#ResetCPU1MaxTemp2# : Mse_CPUPackage_Temp_Max*#ResetCPU1MaxTemp2#
IfBelowValue=1
IfBelowAction=!SetVariable ResetCPU1MaxTemp2 1
DynamicVariables=1

[Mse_CPUPackage_Temp_Avg1]
Measure=Calc
Formula=Mse_CPUPackage_Temp
AverageSize=#AVERAGE1#

[Mse_CPUPackage_Temp_Avg2]
Measure=Calc
Formula=Mse_CPUPackage_Temp
AverageSize=#AVERAGE2#