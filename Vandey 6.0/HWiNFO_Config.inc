[Variables]
;Statistics Average Times
Average1=30
Average2=120

;Set drives to monitor
NumberOfDrives=3
Drive1=C:
Drive2=D:
Drive3=F:
Drive4=E:

;Set Max Download Speed In Mbps (Advertised Internet Speed if unknown go to speetest.net)
SpeedD=180

;Set Max Upload Speed In Mbps (Advertised Internet Speed if unknown go to speetest.net)
SpeedU=7

;Set CPU cores to monitor
;For now this only works for 4 cores
NumberOfCores=4

;==============================================
;== Change Values to match your system specs ==
;==============================================
; CPU Id
CPUId=0xf0000300
CPUInstanceId=0x0

;Clock Speeds
Core0ClockId=0x6000000
Core1ClockId=0x6000001
Core2ClockId=0x6000002
Core3ClockId=0x6000003

;Usages
Core0T0UsageId=0x7000000
Core0T1UsageId=0x7000001
Core1T0UsageId=0x7000002
Core1T1UsageId=0x7000003
Core2T0UsageId=0x7000004
Core2T1UsageId=0x7000005
Core3T0UsageId=0x7000006
Core3T1UsageId=0x7000007
CPUTotalUsageId=0x7000009

;CPU Fan
CPUFanId=0xf7067790
CPUFanInstanceId=0x0
CPUFanSpeedId=0x3000001

;CPU Temps
CPUThermalId=0xf0000400
CPUThermalInstance=0x0
CPUPackageId=0x10000fe

;AIO
AIOId=0xfc00ae00
AIOInstanceId=0x0
AIOLiquidTempId=0x1000000
AIOFanSpeedId=0x3000000
AIOPumpSpeedId=0x3000001

;Memory
PhysicalMemoryId=0xf0000301
PhysicalMemoryInstanceId=0x0
PhysicalMemoryUsedId=0x8000003
PhysicalMemoryAvailableId=0x8000004
PhysicalMemoryLoadId=0x8000005

;GPU 0
GPU0SensorId=0xe0002000
GPU0SensorInstanceId=0x0
GPU0EntryTemperatureId=0x1000000
GPU0EntryCoreLoadId=0x7000000
GPU0EntryClockId=0x6000000
GPU0EntryMemoryUsageId=0x7000008
GPU0EntryMemoryAllocatedId=0x80000fc
GPU0EntryMemoryClockSpeed=0x6000004
; Use this if fan is connected directly to GPU the FanId and FanInstanceId is the same as above
; if using a different fan header fill the appropriate id's for your system
GPU0SensorFanId=0xf7067790
GPU0SensorFanInstanceId=0x0
GPU0SensorFanEntryId=0x3000003

;GPU 1
GPU1SensorId=0xe0002000
GPU1SensorInstanceId=0x14
GPU1EntryTemperatureId=0x1000000
GPU1EntryCoreLoadId=0x7000000
GPU1EntryClockId=0x6000000
GPU1EntryMemoryUsageId=0x7000008
GPU1EntryMemoryAllocatedId=0x80000fc
GPU1EntryMemoryClockSpeed=0x6000004
; Use this if fan is connected directly to GPU the FanId and FanInstanceId is the same as above
; if using a different fan header fill the appropriate id's for your system
GPU1SensorFanId=0xe0002000
GPU1SensorFanInstanceId=0x14
GPU1SensorFanEntryId=0x8000000

;===================================================================
;====== IGNORE BELOW THIS LINE UNLESS YOU KNOW WHAT THESE ARE ======
;===================================================================
;Network Settings
;Set your network interface number.
Interface=0
