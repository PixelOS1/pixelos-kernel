cmd_scripts/sign-file := x86_64-pc-linux-gnu-gcc -Wp,-MMD,scripts/.sign-file.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89         -o scripts/sign-file scripts/sign-file.c   -lcrypto 

source_scripts/sign-file := scripts/sign-file.c

deps_scripts/sign-file := \

scripts/sign-file: $(deps_scripts/sign-file)

$(deps_scripts/sign-file):
