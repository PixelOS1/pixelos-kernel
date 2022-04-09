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
	{ 0xa24f23d8, "__request_module" },
	{ 0xf5fa5da, "cdev_del" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xacb32f2d, "cdev_init" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xee111615, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x12b41126, "media_device_unregister_entity" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xdb773c53, "media_devnode_create" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x90ce49bd, "device_destroy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0x1eeebc48, "media_get_pad_index" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x86632d5a, "default_llseek" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x9604dda, "freezing_slow_path" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x60941796, "i2c_new_client_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xda48e803, "media_entity_pads_init" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6626afca, "down" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x4dce8ff3, "device_create" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc88dc9c9, "i2c_unregister_device" },
	{ 0xce807a25, "up_write" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x66d87d38, "symbol_put_addr" },
	{ 0x3b09f2ee, "cdev_add" },
	{ 0x5660bee0, "media_device_register_entity" },
	{ 0xdfbcf889, "module_put" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x1bfb9a7c, "media_create_pad_link" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xcaca8662, "media_create_pad_links" },
	{ 0x71cc0d23, "media_create_intf_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4df02057, "crc32_be" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xcf2a6966, "up" },
	{ 0x4195254f, "class_destroy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1aafecfe, "__class_create" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0x6ca0bc7b, "media_devnode_remove" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "mc,i2c-core");


MODULE_INFO(srcversion, "6F921E7C1A5261FD815EF7E");
