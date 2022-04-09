cmd_scripts/bin2c := x86_64-pc-linux-gnu-gcc -Wp,-MMD,scripts/.bin2c.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89         -o scripts/bin2c scripts/bin2c.c   

source_scripts/bin2c := scripts/bin2c.c

deps_scripts/bin2c := \

scripts/bin2c: $(deps_scripts/bin2c)

$(deps_scripts/bin2c):
