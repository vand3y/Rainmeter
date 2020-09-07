[Mse_Physical_Memory_Available]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#PhysicalMemoryId#
HWiNFOSensorInstance=#PhysicalMemoryInstanceId#
HWiNFOEntryId=#PhysicalMemoryAvailableId#
HWiNFOType=CurrentValue

[Mse_Physical_Memory_Used]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#PhysicalMemoryId#
HWiNFOSensorInstance=#PhysicalMemoryInstanceId#
HWiNFOEntryId=#PhysicalMemoryUsedId#
HWiNFOType=CurrentValue

[Mse_Physical_Memory_Load]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#PhysicalMemoryId#
HWiNFOSensorInstance=#PhysicalMemoryInstanceId#
HWiNFOEntryId=#PhysicalMemoryLoadId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[Mse_Memory_Min]
Measure=Calc
Formula=Mse_Memory_Min #RAMMin# Mse_Physical_Memory_Used ? Mse_Memory_Min*#ResetRAMMin# : Mse_Physical_Memory_Used*#ResetRAMMin#
IfBelowValue=1
IfBelowAction=[!SetVariable ResetRAMMin 1] [!SetVariable RAMMin >]
IfAboveValue=0
IfAboveAction=!SetVariable RAMMin <
DynamicVariables=1

[Mse_Memory_Max]
Measure=Calc
Formula=Mse_Memory_Max < Mse_Physical_Memory_Used ? Mse_Physical_Memory_Used*#ResetRamMax# : Mse_Memory_Max*#ResetRamMax#
IfBelowValue=1
IfBelowAction=!SetVariable ResetRamMax 1
DynamicVariables=1

[Mse_Memory_Avg1]
Measure=Calc
Formula=Mse_Physical_Memory_Used
AverageSize=#AVERAGE1#

[Mse_Memory_Avg2]
Measure=Calc
Formula=Mse_Physical_Memory_Used
AverageSize=#AVERAGE2#