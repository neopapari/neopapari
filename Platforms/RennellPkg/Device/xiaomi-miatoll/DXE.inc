# INF QcomPkg/XBLCore/XBLCore.inf

#FILE FREEFORM = DDE58710-41CD-4306-DBFB-3FA90BB1D2DD {
#    SECTION UI = "uefiplat.cfg"
#    SECTION RAW = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/uefiplat.cfg
#}

INF Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/AdapterInformationDxe/AdapterInformationDxe.inf
INF Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
#INF Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
INF Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/OSConfigDxe/OSConfigDxe.inf
#INF Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/PmicGlinkDxe/PmicGlinkDxe.inf
INF Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxe.inf
INF Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
INF Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/UsbInitDxe/UsbInitDxe.inf
INF Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
INF Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
INF Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
INF Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/DppDxe/DppDxe.inf
INF Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/RawFileSystemDxe/RawFileSystemDxe.inf
INF Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/UsbfnChgDxe/UsbfnChgDxe.inf
INF Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
INF Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
#INF Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/SecurityDxe/SecurityDxe.inf
#INF AndromedaPkg/Driver/SimpleFbDxe/SimpleFbDxe.inf
INF AndromedaPkg/Driver/DisplayCallerDxe/DisplayCallerDxe.inf

INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/VibratorDxe/VibratorDxe.inf

#INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/MinidumpTADxe/MinidumpTADxe.inf
#INF MdeModulePkg/Core/Dxe/DxeMain.inf
#INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
#INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
#INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf
#INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SecRSADxe/SecRSADxe.inf
#INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ASN1X509Dxe/ASN1X509Dxe.inf
#INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/VerifiedBootDxe/VerifiedBootDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TzDxe/TzDxeLA.inf
#INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
#INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
#INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/RscRtDxe.inf
#INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/SCHandlerRtDxe.inf
#INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/VariableDxe/VariableDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SimpleTextInOutSerialDxe/SimpleTextInOutSerial.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf
#INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
#INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
#INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
#INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
#INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
#INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
##INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
#INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/FontDxe/FontDxe.inf
#INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf
#INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/QcomMpmTimerDxe/QcomMpmTimerDxe.inf
#INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
#INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
#INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PdcDxe/PdcDxe.inf
#INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
#INF $(PACKAGE_NAME)/Device/$(TARGET_DEVICE)/Binaries/MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
#INF FatPkg/EnhancedFatDxe/Fat.inf
#INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
#INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf

INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf

INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
#INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
#INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
#INF QcomPkg/Drivers/UFSDxe/UFSDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
#INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
#INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
#INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/HashDxe/HashDxe.inf
#INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/CipherDxe/CipherDxe.inf
#INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/RNGDxe/RngDxe.inf
#INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/QcomBds/QcomBds.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PILDxe/PILDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Application/QcomChargerApp/QcomChargerApp.inf
#INF RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf

## Patched Binaries
# Device Specific Patched DXE
INF RennellPkg/Device/$(TARGET_DEVICE)/PatchedBinaries/ButtonsDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/PatchedBinaries/UFSDxe.inf
INF RennellPkg/Device/$(TARGET_DEVICE)/PatchedBinaries/DisplayDxe.inf
# Platform Specific Patched DXE
INF QcomPkg/PatchedBinaries/EnvDxe.inf
INF QcomPkg/PatchedBinaries/HALIOMMUDxe.inf
INF QcomPkg/PatchedBinaries/78EF0A56-1CF0-4535-B5DA-F6FD2F405A25.inf


FILE DRIVER = 6b38f7b4-ad98-40e9-9093-aca2b5a253c4 {
    SECTION PE32 = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.efi
    SECTION UI = "DiskIoDxe"
}

FILE DRIVER = 1fa1f39e-feff-4aae-bd7b-38a070a3b609 {
    SECTION PE32 = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.efi
    SECTION UI = "PartitionDxe"
}

FILE DRIVER = 3adf8dda-1850-44c5-8c63-bb991849bc6f {
    SECTION UI = "HashDxe"
#    SECTION RAW = Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/HashDxe/HashDxe.raw
    SECTION PE32 = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/HashDxe/HashDxe.efi
}

FILE DRIVER = 5f0937cd-73f9-445e-b320-bb6fd5d3cbde {
    SECTION UI = "CipherDxe"
#    SECTION RAW = Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/CipherDxe/CipherDxe.raw
    SECTION PE32 = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/CipherDxe/CipherDxe.efi
}

FILE DRIVER = b0d3689e-11f8-43c6-8ece-023a29cec35b {
    SECTION UI = "RngDxe"
#    SECTION RAW = Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/RNGDxe/RngDxe.raw
    SECTION PE32 = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/RNGDxe/RngDxe.efi
}

FILE DRIVER = 7861C9D1-43B6-410C-B8A7-C129A9346D9D {
    SECTION UI = "TpmDxe"
#    SECTION RAW = Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/HashDxe/HashDxe.raw
    SECTION PE32 = Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/TrEEDxe/TpmDxe.efi
}

FILE DRIVER = 59CC11DC-1C60-11E1-A80F-A3B54824019B {
    SECTION UI = "TrEEDxe"
#    SECTION RAW = Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/HashDxe/HashDxe.raw
    SECTION PE32 = Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/TrEEDxe/TrEEDxe.efi
}

FILE DRIVER = 5E0EAE60-EAED-4D75-B8BF-EDBBAABC3F09{
    SECTION UI = "SecurityDxe"
#    SECTION RAW = Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/HashDxe/HashDxe.raw
    SECTION PE32 = Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/SecurityDxe/SecurityDxe.efi
}


FILE DRIVER = cccb0c28-4b24-11d5-9a5a-0090273fc14d {
    SECTION PE32 = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.efi
    SECTION UI = "GraphicsConsoleDxe"
}

#
#FILE DRIVER = 32C71E68-83A8-46ED-AED1-094E71B12057 {
#    SECTION PE32 = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SecRSADxe/SecRSADxe.efi
#    SECTION UI = "SecRSADxe"
#}
#
#FILE DRIVER = C2F9A4F5-F7B4-43E7-BA99-5EA804CC103A {
#    SECTION PE32 = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ASN1X509Dxe/ASN1X509Dxe.inf
#    SECTION UI = "ASN1X509Dxe"
#}

FILE DRIVER = B7F50E91-A759-412C-ADE4-DCD03E7F7C28 {
    SECTION PE32 = Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/XhciDxe/XhciDxe.efi
    SECTION UI = "XhciDxe"
}

FILE DRIVER = 240612B7-A063-11D4-9A3A-0090273FC14D {
    SECTION PE32 = Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/UsbBusDxe/UsbBusDxe.efi
    SECTION UI = "UsbBusDxe"
}

#FILE DRIVER = 2D2E62CF-9ECF-43B7-8219-94E7FC713DFE {
#    SECTION PE32 = Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/UsbKbDxe/UsbKbDxe.efi
#    SECTION UI = "UsbKbDxe"
#}

FILE DRIVER = 9FB4B4A7-42C0-4BCD-8540-9BCC6711F83E {
    SECTION PE32 = Rennell/BOOT.XF.3.1.1-00014-SC7180XWZB-1/QcomPkg/Drivers/UsbMassStorageDxe/UsbMassStorageDxe.efi
    SECTION UI = "UsbMassStorageDxe"
}

# Raw Files
FILE FREEFORM = A91D838E-A5FA-4138-825D-455E2303079E {
    SECTION UI = "BDS_Menu.cfg"
    SECTION RAW = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/BDS_Menu.cfg
}


FILE FREEFORM = A91D838E-A5FA-4138-825D-455E23030794 {
    SECTION UI = "logo1.bmp"
    SECTION RAW = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/logo1.bmp
}


FILE FREEFORM = D0E4C34A-2E16-4038-81D4-E4C3AAC877F3 {
    SECTION UI = "lock.bmp"
    SECTION RAW = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/lock.bmp
}


FILE FREEFORM = 83D62E8E-3285-4F51-B14D-2AA91DFFB941 {
    SECTION UI = "unlock.bmp"
    SECTION RAW = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/unlock.bmp
}


FILE FREEFORM = E8BE8724-78B2-4E6B-B94B-D23B7FCF80FE {
    SECTION UI = "alarm.bmp"
    SECTION RAW = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/alarm.bmp
}


FILE FREEFORM = FB6A76E1-B10A-4716-9AFC-0200D2BF4BF7 {
    SECTION UI = "fastboot.bmp"
    SECTION RAW = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/fastboot.bmp
}


FILE FREEFORM = 8CAE2C55-FC5A-410B-812B-8CA22F572F36 {
    SECTION UI = "Panel_rm69299_amoled_fhd_plus_video.xml"
    SECTION RAW = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Panel_rm69299_amoled_fhd_plus_video.xml
}


FILE FREEFORM = 8CAE2C55-FC5A-410B-812B-8CA22F557623 {
    SECTION UI = "Panel_huaxing_ft8756_fhd_vid.xml"
    SECTION RAW = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Panel_huaxing_ft8756_fhd_vid.xml
}


FILE FREEFORM = 4042B497-0B6E-490E-90DC-E321C75B5CE9 {
    SECTION UI = "Panel_tianma_nt36675_fhd_vid.xml"
    SECTION RAW = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Panel_tianma_nt36675_fhd_vid.xml
}


FILE FREEFORM = CE09CA21-74A1-41F1-A2A2-6C3114EB5AD7 {
    SECTION UI = "Panel_nt36672c_boe_fhd_plus_video.xml"
    SECTION RAW = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Panel_nt36672c_boe_fhd_plus_video.xml
}


FILE FREEFORM = 3E5584ED-05D4-4267-9048-0D47F76F4248 {
    SECTION UI = "battery_miui.bmp"
    SECTION RAW = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_miui.bmp
}


FILE FREEFORM = 4753E815-DDD8-402D-BF69-9B8C4EB7573E {
    SECTION UI = "battery_miui_charging.bmp"
    SECTION RAW = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_miui_charging.bmp
}


FILE FREEFORM = B0F8D1BE-5353-4812-B1F6-07E7768204CC {
    SECTION UI = "battery_symbol_DebugBoot.bmp"
    SECTION RAW = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_DebugBoot.bmp
}


FILE FREEFORM = F9E8F683-E065-4E09-B4F9-0230D7CECD08 {
    SECTION UI = "battery_symbol_DebugStay.bmp"
    SECTION RAW = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_DebugStay.bmp
}


FILE FREEFORM = A1E235DE-E825-4591-9623-C43175811826 {
    SECTION UI = "SecParti.cfg"
    SECTION RAW = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/SecParti.cfg
}


FILE FREEFORM = 21E9BDD9-6C3F-4F10-84A5-BBEC322741F1 {
    SECTION UI = "uefipil.cfg"
    SECTION RAW = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/uefipil.cfg
}


FILE FREEFORM = 45FE4B7C-150C-45DA-A021-4BEB2048EC6F {
    SECTION UI = "QcomChargerCfg.cfg"
    SECTION RAW = RennellPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/QcomChargerCfg.cfg
}
