cmd_drivers/misc/echo/modules.order := {   echo drivers/misc/echo/echo.ko; :; } | awk '!x[$$0]++' - > drivers/misc/echo/modules.order
