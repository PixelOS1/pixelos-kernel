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
	{ 0xac1720be, "typec_switch_get_drvdata" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c05391c, "typec_mux_get_drvdata" },
	{ 0x8eea5868, "typec_mux_unregister" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x95d0b743, "typec_switch_unregister" },
	{ 0x3167774f, "typec_mux_register" },
	{ 0xf1ca0df9, "typec_switch_register" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,typec");

MODULE_ALIAS("i2c:pi3usb30532");

MODULE_INFO(srcversion, "402F873332CB4D4CCFE0A92");
