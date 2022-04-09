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
	{ 0xb3153dca, "driver_unregister" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0xb3624bb8, "__devm_iio_device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0x9d27181c, "spi_get_device_id" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe4bd0d8d, "regulator_get_voltage" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x43469f8e, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("acpi*:AANT1280:*");
MODULE_ALIAS("spi:adc128s052");
MODULE_ALIAS("spi:adc122s021");
MODULE_ALIAS("spi:adc122s051");
MODULE_ALIAS("spi:adc122s101");
MODULE_ALIAS("spi:adc124s021");
MODULE_ALIAS("spi:adc124s051");
MODULE_ALIAS("spi:adc124s101");
MODULE_ALIAS("of:N*T*Cti,adc128s052");
MODULE_ALIAS("of:N*T*Cti,adc128s052C*");
MODULE_ALIAS("of:N*T*Cti,adc122s021");
MODULE_ALIAS("of:N*T*Cti,adc122s021C*");
MODULE_ALIAS("of:N*T*Cti,adc122s051");
MODULE_ALIAS("of:N*T*Cti,adc122s051C*");
MODULE_ALIAS("of:N*T*Cti,adc122s101");
MODULE_ALIAS("of:N*T*Cti,adc122s101C*");
MODULE_ALIAS("of:N*T*Cti,adc124s021");
MODULE_ALIAS("of:N*T*Cti,adc124s021C*");
MODULE_ALIAS("of:N*T*Cti,adc124s051");
MODULE_ALIAS("of:N*T*Cti,adc124s051C*");
MODULE_ALIAS("of:N*T*Cti,adc124s101");
MODULE_ALIAS("of:N*T*Cti,adc124s101C*");

MODULE_INFO(srcversion, "4B2959B03EDDCA01D5F986A");
