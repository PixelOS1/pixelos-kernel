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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x89937627, "i2c_transfer" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x9ee72ea1, "mlxsw_core_resources_query" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5cf3dd79, "mlxsw_core_bus_device_unregister" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xbb7e9ba4, "mlxsw_core_bus_device_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x484489a4, "mlxsw_cmd_exec" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcec1d46a, "devm_kmalloc" },
};

MODULE_INFO(depends, "i2c-core,mlxsw_core");


MODULE_INFO(srcversion, "F1AA5C53F4F87672002075C");
