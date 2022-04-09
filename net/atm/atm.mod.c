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
	{ 0xd93a9c2c, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdf150c04, "sock_init_data" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x60db5ae0, "proc_create_seq_private" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0x754d539c, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x3f1f9b5c, "send_sig" },
	{ 0xe35d6993, "_proc_mkdir" },
	{ 0x31c865cf, "sock_gettstamp" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0xd349d253, "seq_printf" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x801ba6fd, "skb_recv_datagram" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xfa225959, "sock_no_sendpage" },
	{ 0xd0458486, "sock_no_mmap" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0x6a551a05, "sock_no_socketpair" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x339c0a66, "device_del" },
	{ 0xdaf02d94, "device_register" },
	{ 0xca1dc550, "sk_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xa0bf779a, "skb_copy_datagram_iter" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x52d91e96, "class_unregister" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0x23112f0a, "sock_no_listen" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x27a82dae, "sock_no_accept" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x4886abc9, "sock_wake_async" },
	{ 0x87f244b9, "sk_free" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x97ac8144, "__class_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2af975fa, "device_create_file" },
	{ 0xdd9494ea, "__sock_recv_ts_and_drops" },
	{ 0xdfbcf889, "module_put" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x15950b0c, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x761527a1, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x2999843c, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x6799d664, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa271ea4a, "remove_proc_subtree" },
	{ 0x79037e4d, "proc_create_data" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x24e48d13, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xfd6c3908, "skb_free_datagram" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "63B07BE1ADF1CE702433239");
