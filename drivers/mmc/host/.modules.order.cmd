cmd_drivers/mmc/host/modules.order := {   echo drivers/mmc/host/sdhci.ko;   echo drivers/mmc/host/sdhci-pci.ko;   echo drivers/mmc/host/sdhci-acpi.ko;   echo drivers/mmc/host/wbsd.ko;   echo drivers/mmc/host/alcor.ko;   echo drivers/mmc/host/tifm_sd.ko;   echo drivers/mmc/host/sdricoh_cs.ko;   echo drivers/mmc/host/cb710-mmc.ko;   echo drivers/mmc/host/via-sdmmc.ko;   echo drivers/mmc/host/vub300.ko;   echo drivers/mmc/host/ushc.ko;   echo drivers/mmc/host/toshsd.ko;   echo drivers/mmc/host/rtsx_pci_sdmmc.ko;   echo drivers/mmc/host/rtsx_usb_sdmmc.ko;   echo drivers/mmc/host/sdhci-pltfm.ko;   echo drivers/mmc/host/cqhci.ko;   echo drivers/mmc/host/sdhci-xenon-driver.ko; :; } | awk '!x[$$0]++' - > drivers/mmc/host/modules.order