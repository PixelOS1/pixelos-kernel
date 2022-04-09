cmd_drivers/staging/rtl8723bs/modules.order := {   echo drivers/staging/rtl8723bs/r8723bs.ko; :; } | awk '!x[$$0]++' - > drivers/staging/rtl8723bs/modules.order
