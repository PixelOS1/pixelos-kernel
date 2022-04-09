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
	{ 0x3be38d4c, "__register_chrdev" },
	{ 0x1aafecfe, "__class_create" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x4dce8ff3, "device_create" },
	{ 0xd82355a8, "pcmcia_enable_device" },
	{ 0xda20bae, "pcmcia_loop_config" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xa0a0cb18, "stream_open" },
	{ 0xc23477d, "current_task" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x52996a04, "pcmcia_dev_present" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd0f80fce, "pcmcia_request_io" },
	{ 0x90ce49bd, "device_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9fe1ed77, "pcmcia_disable_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m0223c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2FB368CApbA2BD8C39pc*pd*");

MODULE_INFO(srcversion, "01BA38F41BBFB821AFB21B7");
