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
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xeca94a9a, "devm_mfd_add_devices" },
	{ 0x8cca128b, "regmap_irq_get_domain" },
	{ 0x89d41097, "devm_regmap_add_irq_chip" },
	{ 0xf7175300, "regmap_read" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,mfd-core,regmap-i2c");

MODULE_ALIAS("i2c:bd9571mwv");
MODULE_ALIAS("of:N*T*Crohm,bd9571mwv");
MODULE_ALIAS("of:N*T*Crohm,bd9571mwvC*");
MODULE_ALIAS("of:N*T*Crohm,bd9574mwf");
MODULE_ALIAS("of:N*T*Crohm,bd9574mwfC*");

MODULE_INFO(srcversion, "245637674F3233E0D5B5452");
