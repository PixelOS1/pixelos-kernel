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
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x4d1153b, "i2c_smbus_write_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("of:N*T*Ctaos,tsl2550");
MODULE_ALIAS("of:N*T*Ctaos,tsl2550C*");
MODULE_ALIAS("i2c:tsl2550");

MODULE_INFO(srcversion, "B1FBCD730DEE9652D1BC43A");
