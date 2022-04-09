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
	{ 0xff80ab3, "skb_queue_head" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x1537b21c, "debugfs_create_u8" },
	{ 0x49843e91, "__hci_cmd_sync" },
	{ 0xe1e9debf, "hci_register_dev" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x582cd715, "hci_unregister_dev" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x21b33f57, "debugfs_create_x16" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2505bf18, "kstrtol_from_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x86632d5a, "default_llseek" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x459f3f88, "skb_push" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x22749e72, "simple_open" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xd00cee59, "hci_alloc_dev_priv" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc93577bc, "hci_free_dev" },
	{ 0x24e48d13, "skb_put" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "DC6329071F43393E2B6F90D");
