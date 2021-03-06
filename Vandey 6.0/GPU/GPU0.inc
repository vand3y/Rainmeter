[Mse_GPU0_Name]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#GPU0SensorId#
HWiNFOSensorInstance=#GPU0SensorInstanceId#
HWiNFOType=SensorNameCustom

[Mse_GPU0_Clock]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#GPU0SensorId#
HWiNFOSensorInstance=#GPU0SensorInstanceId#
HWiNFOEntryId=#GPU0EntryClockId#
HWiNFOType=CurrentValue

[Mse_GPU0_Usage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#GPU0SensorId#
HWiNFOSensorInstance=#GPU0SensorInstanceId#
HWiNFOEntryId=#GPU0EntryCoreLoadId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[Mse_GPU0_Fan]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#GPU0SensorFanId#
HWiNFOSensorInstance=#GPU0SensorFanInstanceId#
HWiNFOEntryId=#GPU0SensorFanEntryId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=2250

[Mse_GPU0_Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#GPU0SensorId#
HWiNFOSensorInstance=#GPU0SensorInstanceId#
HWiNFOEntryId=#GPU0EntryTemperatureId#
HWiNFOType=CurrentValue
MaxValue=90
MinValue=25

[Mse_GPU0_Memory_Usage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#GPU0SensorId#
HWiNFOSensorInstance=#GPU0SensorInstanceId#
HWiNFOEntryId=#GPU0EntryMemoryUsageId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[Mse_GPU0_Memory_Used]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#GPU0SensorId#
HWiNFOSensorInstance=#GPU0SensorInstanceId#
HWiNFOEntryId=#GPU0EntryMemoryAllocatedId#
HWiNFOType=CurrentValue

[Mse_GPU0_Memory_Clock]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#GPU0SensorId#
HWiNFOSensorInstance=#GPU0SensorInstanceId#
HWiNFOEntryId=#GPU0EntryMemoryClockSpeed#
HWiNFOType=CurrentValue

[Mse_GPU0_Usage_Max]
Measure=Calc
Formula=Mse_GPU0_Usage_Max < Mse_GPU0_Usage ? Mse_GPU0_Usage*#ResetGPU0Usage# : Mse_GPU0_Usage_Max*#ResetGPU0Usage#
IfBelowValue=1
IfBelowAction=!SetVariable ResetGPU0Usage 1
DynamicVariables=1

[Mse_GPU0_Usage_Avg1]
Measure=Calc
Formula=Mse_GPU0_Usage
AverageSize=#AVERAGE1#

[Mse_GPU0_Usage_Avg2]
Measure=Calc
Formula=Mse_GPU0_Usage
AverageSize=#AVERAGE2#

[Mse_GPU0_Fan_Min]
Measure=Calc
Formula=Mse_GPU0_Fan_Min #GPU0MinTach# Mse_GPU0_Fan ? Mse_GPU0_Fan_Min*#ResetGPU0TachMin# : Mse_GPU0_Fan*#ResetGPU0TachMin#
IfBelowValue=1
IfBelowAction=[!SetVariable ResetGPU0TachMin 1] [!SetVariable GPU0MinTach >]
IfAboveValue=0
IfAboveAction=!SetVariable GPU0MinTach <
DynamicVariables=1

[Mse_GPU0_Fan_Max]
Measure=Calc
Formula=Mse_GPU0_Fan_Max < Mse_GPU0_Fan ? Mse_GPU0_Fan*#ResetGPU0TachMax# : Mse_GPU0_Fan_Max*#ResetGPU0TachMax#
IfBelowValue=1
IfBelowAction=!SetVariable ResetGPU0TachMax 1
DynamicVariables=1

[Mse_GPU0_Fan_Avg1]
Measure=Calc
Formula=Mse_GPU0_Fan
AverageSize=#AVERAGE1#

[Mse_GPU0_Fan_Avg2]
Measure=Calc
Formula=Mse_GPU0_Fan
AverageSize=#AVERAGE2#

[Mse_GPU0_Memory_Used_Min]
Measure=Calc
Formula=Mse_GPU0_Memory_Used_Min #GPU0MinMem# Mse_GPU0_Memory_Used ? Mse_GPU0_Memory_Used_Min*#ResetGPU0MinMem# : Mse_GPU0_Memory_Used*#ResetGPU0MinMem#
IfBelowValue=1
IfBelowAction=[!SetVariable ResetGPU0MinMem 1] [!SetVariable GPU0MinMem >]
IfAboveValue=0
IfAboveAction=!SetVariable GPU0MinMem <
DynamicVariables=1

[Mse_GPU0_Memory_Used_Max]
Measure=Calc
Formula=Mse_GPU0_Memory_Used_Max < Mse_GPU0_Memory_Used ? Mse_GPU0_Memory_Used*#ResetGPUMaxMem1# : Mse_GPU0_Memory_Used_Max*#ResetGPUMaxMem1#
IfBelowValue=1
IfBelowAction=!SetVariable ResetGPUMaxMem1 1
DynamicVariables=1

[Mse_GPU0_Memory_Used_Avg1]
Measure=Calc
Formula=Mse_GPU0_Memory_Used
AverageSize=#AVERAGE1#

[Mse_GPU0_Memory_Used_Avg2]
Measure=Calc
Formula=Mse_GPU0_Memory_Used
AverageSize=#AVERAGE2#

[Mse_GPU0_Temp_Min]
Measure=Calc
Formula=Mse_GPU0_Temp_Min #GPU0MinTemp# Mse_GPU0_Temp ? Mse_GPU0_Temp_Min*#ResetGPU0MinTemp1# : Mse_GPU0_Temp*#ResetGPU0MinTemp1#
IfBelowValue=1
IfBelowAction=[!SetVariable ResetGPU0MinTemp1 1] [!SetVariable GPU0MinTemp >]
IfAboveValue=0
IfAboveAction=!SetVariable GPU0MinTemp <
DynamicVariables=1

[Mse_GPU0_Temp_Max]
Measure=Calc
Formula=Mse_GPU0_Temp_Max < Mse_GPU0_Temp ? Mse_GPU0_Temp*#ResetGPU0MaxTemp2# : Mse_GPU0_Temp_Max*#ResetGPU0MaxTemp2#
IfBelowValue=1
IfBelowAction=!SetVariable ResetGPU0MaxTemp2 1
DynamicVariables=1

[Mse_GPU0_Temp_Avg1]
Measure=Calc
Formula=Mse_GPU0_Temp
AverageSize=#AVERAGE1#

[Mse_GPU0_Temp_Avg2]
Measure=Calc
Formula=Mse_GPU0_Temp
AverageSize=#AVERAGE2#