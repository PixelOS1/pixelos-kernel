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
	{ 0xa73cda8f, "no_llseek" },
	{ 0x9d8a8bca, "pcmcia_unregister_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x136c7ecb, "pcmcia_register_driver" },
	{ 0x4195254f, "class_destroy" },
	{ 0x92997ed8, "_printk" },
	{ 0x3be38d4c, "__register_chrdev" },
	{ 0x1aafecfe, "__class_create" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x4dce8ff3, "device_create" },
	{ 0xd82355a8, "pcmcia_enable_device" },
	{ 0xda20bae, "pcmcia_loop_config" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc23477d, "current_task" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8371509, "nonseekable_open" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x52996a04, "pcmcia_dev_present" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd0f80fce, "pcmcia_request_io" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x90ce49bd, "device_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9fe1ed77, "pcmcia_disable_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m0223c0200f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE32CDD8Cpb8F23318Bpc*pd*");

MODULE_INFO(srcversion, "D4357F482835306D85181B7");
