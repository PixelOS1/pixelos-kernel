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
	{ 0x22749e72, "simple_open" },
	{ 0x86632d5a, "default_llseek" },
	{ 0xe283cb34, "simple_attr_release" },
	{ 0x246cd242, "debugfs_attr_write" },
	{ 0x6d5cd7ee, "debugfs_attr_read" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0xa164df89, "misc_register" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0x54a2d145, "hci_recv_frame" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8371509, "nonseekable_open" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x24e48d13, "skb_put" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xe1e9debf, "hci_register_dev" },
	{ 0xd00cee59, "hci_alloc_dev_priv" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xff80ab3, "skb_queue_head" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x459f3f88, "skb_push" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0x45db6081, "simple_attr_open" },
	{ 0x97ec3dc2, "hci_resume_dev" },
	{ 0x50395caa, "hci_suspend_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0xc93577bc, "hci_free_dev" },
	{ 0x582cd715, "hci_unregister_dev" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "2AB1A1D2E8CBAC917271B35");
