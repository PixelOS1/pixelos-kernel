cmd_certs/extract-cert := x86_64-pc-linux-gnu-gcc -Wp,-MMD,certs/.extract-cert.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89         -o certs/extract-cert certs/extract-cert.c   -lcrypto 

source_certs/extract-cert := certs/extract-cert.c

deps_certs/extract-cert := \

certs/extract-cert: $(deps_certs/extract-cert)

$(deps_certs/extract-cert):
