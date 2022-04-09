cmd_lib/gen_crc64table := x86_64-pc-linux-gnu-gcc -Wp,-MMD,lib/.gen_crc64table.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89         -o lib/gen_crc64table lib/gen_crc64table.c   

source_lib/gen_crc64table := lib/gen_crc64table.c

deps_lib/gen_crc64table := \

lib/gen_crc64table: $(deps_lib/gen_crc64table)

$(deps_lib/gen_crc64table):
