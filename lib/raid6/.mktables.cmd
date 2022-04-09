cmd_lib/raid6/mktables := x86_64-pc-linux-gnu-gcc -Wp,-MMD,lib/raid6/.mktables.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89         -o lib/raid6/mktables lib/raid6/mktables.c   

source_lib/raid6/mktables := lib/raid6/mktables.c

deps_lib/raid6/mktables := \

lib/raid6/mktables: $(deps_lib/raid6/mktables)

$(deps_lib/raid6/mktables):
