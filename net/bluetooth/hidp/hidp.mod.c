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
	{ 0x2d3385d3, "system_wq" },
	{ 0xff80ab3, "skb_queue_head" },
	{ 0x90635166, "hid_add_device" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xdf150c04, "sock_init_data" },
	{ 0x279b738, "hid_ignore" },
	{ 0x53b954a2, "up_read" },
	{ 0x7e478053, "kernel_sendmsg" },
	{ 0x68523297, "sockfd_lookup" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x2d43c3f7, "hid_parse_report" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xce489e24, "sock_no_getname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x64ce6e62, "bt_sock_register" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4a9bfc75, "hid_input_report" },
	{ 0x668b19a1, "down_read" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x331337dc, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd0458486, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x850ab1fa, "sock_no_recvmsg" },
	{ 0xd3cb7d10, "bt_sock_unlink" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x6a551a05, "sock_no_socketpair" },
	{ 0xb65b6b57, "l2cap_conn_put" },
	{ 0xca1dc550, "sk_alloc" },
	{ 0xc23477d, "current_task" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x301e3193, "l2cap_is_socket" },
	{ 0x595bcc8b, "sock_no_bind" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x23112f0a, "sock_no_listen" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x27a82dae, "sock_no_accept" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x87f244b9, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc7132b2c, "__module_put_and_kthread_exit" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0xf0785fc6, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x25cd7fc1, "sock_no_shutdown" },
	{ 0xe96ebd33, "bt_sock_link" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x15950b0c, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x761527a1, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x6799d664, "proto_unregister" },
	{ 0x316a330b, "l2cap_register_user" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe04dd75c, "hid_destroy_device" },
	{ 0x8a16e529, "hid_allocate_device" },
	{ 0x7311a5e0, "l2cap_conn_get" },
	{ 0x16e6d67f, "get_device" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x9dd8badf, "sock_no_connect" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0xd68a37d4, "sock_no_sendmsg" },
	{ 0x8fc84473, "set_user_nice" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc1b58d72, "bt_procfs_init" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x24e48d13, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe81f9dc, "bt_procfs_cleanup" },
	{ 0xf812cff6, "memscan" },
	{ 0x319649e6, "l2cap_unregister_user" },
	{ 0xefc7653c, "input_allocate_device" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "F6202073E83E8AC087BA7FF");
