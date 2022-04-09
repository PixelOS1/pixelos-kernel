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
	{ 0xeb9ad005, "misc_deregister" },
	{ 0xa164df89, "misc_register" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x754d539c, "strlen" },
	{ 0x34c4a8eb, "input_ff_destroy" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x41482d8b, "strndup_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x8c835330, "input_ff_create" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf7455c16, "input_event_to_user" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x331337dc, "input_event" },
	{ 0xe233762a, "input_event_from_user" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3f4fc704, "input_alloc_absinfo" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0xa6257a2f, "complete" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xa0a0cb18, "stream_open" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x37a0cba, "kfree" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc23477d, "current_task" },
	{ 0xa03278ef, "input_ff_flush" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "438F2017826496DD7B6AF01");
