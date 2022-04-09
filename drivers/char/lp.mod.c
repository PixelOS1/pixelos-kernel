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
	{ 0x45a41106, "noop_llseek" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x50b1a13b, "parport_unregister_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x4195254f, "class_destroy" },
	{ 0xa74b3f97, "__parport_register_driver" },
	{ 0x1aafecfe, "__class_create" },
	{ 0x3be38d4c, "__register_chrdev" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x5a921311, "strncmp" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xa7cc78c, "parport_read" },
	{ 0x1000e51, "schedule" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xc23477d, "current_task" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc69d0c74, "parport_register_dev_model" },
	{ 0x188b6bbb, "register_console" },
	{ 0x92997ed8, "_printk" },
	{ 0x4dce8ff3, "device_create" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x9459bcd1, "parport_claim_or_block" },
	{ 0x37a0cba, "kfree" },
	{ 0x63caa65f, "unregister_console" },
	{ 0x9c12d0eb, "parport_unregister_device" },
	{ 0x90ce49bd, "device_destroy" },
	{ 0x77eebefb, "parport_release" },
	{ 0x7e9650f8, "parport_write" },
	{ 0xa07a37f0, "memchr" },
	{ 0x82b662d5, "parport_negotiate" },
	{ 0x73c4bffc, "parport_set_timeout" },
	{ 0x2265fcad, "parport_claim" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "1566968C0E51504E868B3CC");
