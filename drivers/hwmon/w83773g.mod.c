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
	{ 0x8af62e49, "_dev_err" },
	{ 0xfbf394b, "devm_hwmon_device_register_with_info" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf7175300, "regmap_read" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cnuvoton,w83773g");
MODULE_ALIAS("of:N*T*Cnuvoton,w83773gC*");
MODULE_ALIAS("i2c:w83773g");

MODULE_INFO(srcversion, "689EA82E15F52FE1AFF5226");
