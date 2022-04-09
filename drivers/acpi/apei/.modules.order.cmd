cmd_drivers/acpi/apei/modules.order := {   echo drivers/acpi/apei/einj.ko; :; } | awk '!x[$$0]++' - > drivers/acpi/apei/modules.order
