cmd_drivers/parport/modules.order := {   echo drivers/parport/parport.ko;   echo drivers/parport/parport_pc.ko;   echo drivers/parport/parport_serial.ko;   echo drivers/parport/parport_cs.ko; :; } | awk '!x[$$0]++' - > drivers/parport/modules.order