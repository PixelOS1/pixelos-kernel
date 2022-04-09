#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x868acba5, "get_options" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xb3624bb8, "__devm_iio_device_register" },
	{ 0x32cfe081, "dev_err_probe" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0x401e43c5, "devm_regulator_bulk_get" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x66c0d752, "iio_push_event" },
	{ 0x6dc20e0b, "iio_get_time_ns" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x96848186, "scnprintf" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x4d1153b, "i2c_smbus_write_byte" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,industrialio");

MODULE_ALIAS("of:N*T*Camstaos,tsl2571");
MODULE_ALIAS("of:N*T*Camstaos,tsl2571C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2671");
MODULE_ALIAS("of:N*T*Camstaos,tsl2671C*");
MODULE_ALIAS("of:N*T*Camstaos,tmd2671");
MODULE_ALIAS("of:N*T*Camstaos,tmd2671C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2771");
MODULE_ALIAS("of:N*T*Camstaos,tsl2771C*");
MODULE_ALIAS("of:N*T*Camstaos,tmd2771");
MODULE_ALIAS("of:N*T*Camstaos,tmd2771C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2572");
MODULE_ALIAS("of:N*T*Camstaos,tsl2572C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2672");
MODULE_ALIAS("of:N*T*Camstaos,tsl2672C*");
MODULE_ALIAS("of:N*T*Camstaos,tmd2672");
MODULE_ALIAS("of:N*T*Camstaos,tmd2672C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2772");
MODULE_ALIAS("of:N*T*Camstaos,tsl2772C*");
MODULE_ALIAS("of:N*T*Camstaos,tmd2772");
MODULE_ALIAS("of:N*T*Camstaos,tmd2772C*");
MODULE_ALIAS("of:N*T*Cavago,apds9930");
MODULE_ALIAS("of:N*T*Cavago,apds9930C*");
MODULE_ALIAS("i2c:tsl2571");
MODULE_ALIAS("i2c:tsl2671");
MODULE_ALIAS("i2c:tmd2671");
MODULE_ALIAS("i2c:tsl2771");
MODULE_ALIAS("i2c:tmd2771");
MODULE_ALIAS("i2c:tsl2572");
MODULE_ALIAS("i2c:tsl2672");
MODULE_ALIAS("i2c:tmd2672");
MODULE_ALIAS("i2c:tsl2772");
MODULE_ALIAS("i2c:tmd2772");
MODULE_ALIAS("i2c:apds9930");

MODULE_INFO(srcversion, "6DCDFDEB1FBCD72CFDEAF91");
