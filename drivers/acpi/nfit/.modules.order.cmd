cmd_drivers/acpi/nfit/modules.order := {   echo drivers/acpi/nfit/nfit.ko; :; } | awk '!x[$$0]++' - > drivers/acpi/nfit/modules.order
