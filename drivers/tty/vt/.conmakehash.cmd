cmd_drivers/tty/vt/conmakehash := x86_64-pc-linux-gnu-gcc -Wp,-MMD,drivers/tty/vt/.conmakehash.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89         -o drivers/tty/vt/conmakehash drivers/tty/vt/conmakehash.c   

source_drivers/tty/vt/conmakehash := drivers/tty/vt/conmakehash.c

deps_drivers/tty/vt/conmakehash := \

drivers/tty/vt/conmakehash: $(deps_drivers/tty/vt/conmakehash)

$(deps_drivers/tty/vt/conmakehash):
