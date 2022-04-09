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
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xbc0bf17b, "intel_th_driver_unregister" },
	{ 0x419905b5, "intel_th_driver_register" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xd77f124a, "intel_th_output_enable" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa78af5f3, "ioread32" },
};

MODULE_INFO(depends, "intel_th");


MODULE_INFO(srcversion, "8E16BAF74BE23918538CDD1");
