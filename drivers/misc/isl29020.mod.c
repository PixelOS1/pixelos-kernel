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
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:isl29020");

MODULE_INFO(srcversion, "77498240D3A55CCB9730FFD");
