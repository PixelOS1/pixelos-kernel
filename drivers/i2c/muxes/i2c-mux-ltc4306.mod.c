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
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf7175300, "regmap_read" },
	{ 0xf92c8476, "gpiochip_get_data" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xfbd84ed6, "i2c_mux_add_adapter" },
	{ 0x8b649654, "devm_gpiochip_add_data_with_key" },
	{ 0x9bccda18, "regmap_get_device" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x34340150, "gpiod_set_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xc618b354, "i2c_mux_alloc" },
	{ 0x81f466c5, "device_property_present" },
	{ 0xc85cb619, "i2c_match_id" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x129da2cf, "i2c_mux_del_adapters" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,i2c-mux,regmap-i2c");

MODULE_ALIAS("of:N*T*Clltc,ltc4305");
MODULE_ALIAS("of:N*T*Clltc,ltc4305C*");
MODULE_ALIAS("of:N*T*Clltc,ltc4306");
MODULE_ALIAS("of:N*T*Clltc,ltc4306C*");
MODULE_ALIAS("i2c:ltc4305");
MODULE_ALIAS("i2c:ltc4306");

MODULE_INFO(srcversion, "9858DE9A41FD8F55F27C7D5");
