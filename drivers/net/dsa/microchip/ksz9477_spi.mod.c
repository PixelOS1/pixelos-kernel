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
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x2f75bc65, "ksz9477_switch_register" },
	{ 0x52345e6e, "spi_setup" },
	{ 0x234598a5, "__devm_regmap_init_spi" },
	{ 0x9c650e24, "ksz_switch_alloc" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbbe59a71, "ksz_switch_remove" },
	{ 0x93accc2b, "dsa_switch_shutdown" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ksz9477,regmap-spi,ksz_common,dsa_core");

MODULE_ALIAS("spi:ksz9477");
MODULE_ALIAS("spi:ksz9897");
MODULE_ALIAS("spi:ksz9893");
MODULE_ALIAS("spi:ksz9563");
MODULE_ALIAS("spi:ksz8563");
MODULE_ALIAS("spi:ksz9567");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9477");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9477C*");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9897");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9897C*");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9893");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9893C*");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9563");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9563C*");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz8563");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz8563C*");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9567");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9567C*");

MODULE_INFO(srcversion, "ACACDF48946996A9B725450");
