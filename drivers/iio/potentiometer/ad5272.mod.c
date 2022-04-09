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
	{ 0xb3624bb8, "__devm_iio_device_register" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x34340150, "gpiod_set_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,industrialio");

MODULE_ALIAS("i2c:ad5272-020");
MODULE_ALIAS("i2c:ad5272-050");
MODULE_ALIAS("i2c:ad5272-100");
MODULE_ALIAS("i2c:ad5274-020");
MODULE_ALIAS("i2c:ad5274-100");
MODULE_ALIAS("of:N*T*Cadi,ad5272-020");
MODULE_ALIAS("of:N*T*Cadi,ad5272-020C*");
MODULE_ALIAS("of:N*T*Cadi,ad5272-050");
MODULE_ALIAS("of:N*T*Cadi,ad5272-050C*");
MODULE_ALIAS("of:N*T*Cadi,ad5272-100");
MODULE_ALIAS("of:N*T*Cadi,ad5272-100C*");
MODULE_ALIAS("of:N*T*Cadi,ad5274-020");
MODULE_ALIAS("of:N*T*Cadi,ad5274-020C*");
MODULE_ALIAS("of:N*T*Cadi,ad5274-100");
MODULE_ALIAS("of:N*T*Cadi,ad5274-100C*");

MODULE_INFO(srcversion, "23BD6DF052846D2A86C9931");
