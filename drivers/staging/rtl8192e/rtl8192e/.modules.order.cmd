cmd_drivers/staging/rtl8192e/rtl8192e/modules.order := {   echo drivers/staging/rtl8192e/rtl8192e/r8192e_pci.ko; :; } | awk '!x[$$0]++' - > drivers/staging/rtl8192e/rtl8192e/modules.order
