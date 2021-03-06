[Mse_GPU1_Name]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#GPU1SensorId#
HWiNFOSensorInstance=#GPU1SensorInstanceId#
HWiNFOType=SensorNameCustom

[Mse_GPU1_Clock]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#GPU1SensorId#
HWiNFOSensorInstance=#GPU1SensorInstanceId#
HWiNFOEntryId=#GPU1EntryClockId#
HWiNFOType=CurrentValue

[Mse_GPU1_Usage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#GPU1SensorId#
HWiNFOSensorInstance=#GPU1SensorInstanceId#
HWiNFOEntryId=#GPU1EntryCoreLoadId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[Mse_GPU1_Fan]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#GPU1SensorFanId#
HWiNFOSensorInstance=#GPU1SensorFanInstanceId#
HWiNFOEntryId=#GPU1SensorFanEntryId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=2250

[Mse_GPU1_Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#GPU1SensorId#
HWiNFOSensorInstance=#GPU1SensorInstanceId#
HWiNFOEntryId=#GPU1EntryTemperatureId#
HWiNFOType=CurrentValue
MaxValue=90
MinValue=25

[Mse_GPU1_Memory_Usage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#GPU1SensorId#
HWiNFOSensorInstance=#GPU1SensorInstanceId#
HWiNFOEntryId=#GPU1EntryMemoryUsageId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[Mse_GPU1_Memory_Used]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#GPU1SensorId#
HWiNFOSensorInstance=#GPU1SensorInstanceId#
HWiNFOEntryId=#GPU1EntryMemoryAllocatedId#
HWiNFOType=CurrentValue

[Mse_GPU1_Memory_Clock]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#GPU1SensorId#
HWiNFOSensorInstance=#GPU1SensorInstanceId#
HWiNFOEntryId=#GPU1EntryMemoryClockSpeed#
HWiNFOType=CurrentValue

[Mse_GPU1_Usage_Max]
Measure=Calc
Formula=Mse_GPU1_Usage_Max < Mse_GPU1_Usage ? Mse_GPU1_Usage*#ResetGPU1Usage# : Mse_GPU1_Usage_Max*#ResetGPU1Usage#
IfBelowValue=1
IfBelowAction=!SetVariable ResetGPU1Usage 1
DynamicVariables=1

[Mse_GPU1_Usage_Avg1]
Measure=Calc
Formula=Mse_GPU1_Usage
AverageSize=#AVERAGE1#

[Mse_GPU1_Usage_Avg2]
Measure=Calc
Formula=Mse_GPU1_Usage
AverageSize=#AVERAGE2#

[Mse_GPU1_Fan_Min]
Measure=Calc
Formula=Mse_GPU1_Fan_Min #GPU1MinTach# Mse_GPU1_Fan ? Mse_GPU1_Fan_Min*#ResetGPU1TachMin# : Mse_GPU1_Fan*#ResetGPU1TachMin#
IfBelowValue=1
IfBelowAction=[!SetVariable ResetGPU1TachMin 1] [!SetVariable GPU1MinTach >]
IfAboveValue=0
IfAboveAction=!SetVariable GPU1MinTach <
DynamicVariables=1

[Mse_GPU1_Fan_Max]
Measure=Calc
Formula=Mse_GPU1_Fan_Max < Mse_GPU1_Fan ? Mse_GPU1_Fan*#ResetGPU1TachMax# : Mse_GPU1_Fan_Max*#ResetGPU1TachMax#
IfBelowValue=1
IfBelowAction=!SetVariable ResetGPU1TachMax 1
DynamicVariables=1

[Mse_GPU1_Fan_Avg1]
Measure=Calc
Formula=Mse_GPU1_Fan
AverageSize=#AVERAGE1#

[Mse_GPU1_Fan_Avg2]
Measure=Calc
Formula=Mse_GPU1_Fan
AverageSize=#AVERAGE2#

[Mse_GPU1_Memory_Used_Min]
Measure=Calc
Formula=Mse_GPU1_Memory_Used_Min #GPU1MinMem# Mse_GPU1_Memory_Used ? Mse_GPU1_Memory_Used_Min*#ResetGPU1MinMem# : Mse_GPU1_Memory_Used*#ResetGPU1MinMem#
IfBelowValue=1
IfBelowAction=[!SetVariable ResetGPU1MinMem 1] [!SetVariable GPU1MinMem >]
IfAboveValue=0
IfAboveAction=!SetVariable GPU1MinMem <
DynamicVariables=1

[Mse_GPU1_Memory_Used_Max]
Measure=Calc
Formula=Mse_GPU1_Memory_Used_Max < Mse_GPU1_Memory_Used ? Mse_GPU1_Memory_Used*#ResetGPUMaxMem1# : Mse_GPU1_Memory_Used_Max*#ResetGPUMaxMem1#
IfBelowValue=1
IfBelowAction=!SetVariable ResetGPUMaxMem1 1
DynamicVariables=1

[Mse_GPU1_Memory_Used_Avg1]
Measure=Calc
Formula=Mse_GPU1_Memory_Used
AverageSize=#AVERAGE1#

[Mse_GPU1_Memory_Used_Avg2]
Measure=Calc
Formula=Mse_GPU1_Memory_Used
AverageSize=#AVERAGE2#

[Mse_GPU1_Temp_Min]
Measure=Calc
Formula=Mse_GPU1_Temp_Min #GPU1MinTemp# Mse_GPU1_Temp ? Mse_GPU1_Temp_Min*#ResetGPU1MinTemp1# : Mse_GPU1_Temp*#ResetGPU1MinTemp1#
IfBelowValue=1
IfBelowAction=[!SetVariable ResetGPU1MinTemp1 1] [!SetVariable GPU1MinTemp >]
IfAboveValue=0
IfAboveAction=!SetVariable GPU1MinTemp <
DynamicVariables=1

[Mse_GPU1_Temp_Max]
Measure=Calc
Formula=Mse_GPU1_Temp_Max < Mse_GPU1_Temp ? Mse_GPU1_Temp*#ResetGPU1MaxTemp2# : Mse_GPU1_Temp_Max*#ResetGPU1MaxTemp2#
IfBelowValue=1
IfBelowAction=!SetVariable ResetGPU1MaxTemp2 1
DynamicVariables=1

[Mse_GPU1_Temp_Avg1]
Measure=Calc
Formula=Mse_GPU1_Temp
AverageSize=#AVERAGE1#

[Mse_GPU1_Temp_Avg2]
Measure=Calc
Formula=Mse_GPU1_Temp
AverageSize=#AVERAGE2#