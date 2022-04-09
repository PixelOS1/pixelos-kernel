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
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:lm3530-led");

MODULE_INFO(srcversion, "AB11ABAFDB27FF0F99C792F");
