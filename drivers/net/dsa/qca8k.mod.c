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
	{ 0xcabd7490, "mdio_driver_unregister" },
	{ 0x9e70dd86, "mdio_driver_register" },
	{ 0xf070a6b1, "dsa_switch_resume" },
	{ 0xce9bba07, "dsa_switch_suspend" },
	{ 0x9dca454d, "dsa_unregister_switch" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xaa10ea97, "__devm_regmap_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x93accc2b, "dsa_switch_shutdown" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy,dsa_core");


MODULE_INFO(srcversion, "82EF1539D1FED050206B66D");
