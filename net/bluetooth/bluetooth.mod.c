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
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xff80ab3, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd93a9c2c, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdf150c04, "sock_init_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x570c8604, "fwnode_property_read_u8_array" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xc9ede2c1, "crypto_alloc_shash" },
	{ 0xe4345174, "single_open" },
	{ 0x1537b21c, "debugfs_create_u8" },
	{ 0x60db5ae0, "proc_create_seq_private" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x1cb040d4, "led_trigger_event" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x9b02585d, "single_release" },
	{ 0x31c865cf, "sock_gettstamp" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xc2109942, "skb_pull_data" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x307eaf37, "skb_copy" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd349d253, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf90d3ed4, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x801ba6fd, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1632bc21, "kvasprintf_const" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xff282521, "rfkill_register" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x732fb9e, "devm_led_trigger_register" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xc68fb0a5, "sock_i_ino" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x94216657, "seq_read" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcd34d80, "skb_unlink" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd0458486, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x8727cd8c, "__get_task_comm" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x6a551a05, "sock_no_socketpair" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x6aa99869, "from_kuid" },
	{ 0x8466b02b, "__sock_recv_wifi_status" },
	{ 0x86632d5a, "default_llseek" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xac47c400, "__sock_queue_rcv_skb" },
	{ 0x339c0a66, "device_del" },
	{ 0xca1dc550, "sk_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb230d2ec, "crypto_ecdh_encode_key" },
	{ 0xc23477d, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x46e6e457, "rfkill_alloc" },
	{ 0xa0bf779a, "skb_copy_datagram_iter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3ba33f72, "device_find_child" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0xffb7c514, "ida_free" },
	{ 0xfb8d6db5, "iov_iter_kvec" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xeb3de78a, "crypto_shash_digest" },
	{ 0xbd6841d4, "crc16" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x5a921311, "strncmp" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x23112f0a, "sock_no_listen" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x27a82dae, "sock_no_accept" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x9e4890a7, "device_move" },
	{ 0x87f244b9, "sk_free" },
	{ 0x68d212c3, "init_uts_ns" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xe283cb34, "simple_attr_release" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xf5c5e04e, "device_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x22749e72, "simple_open" },
	{ 0xa4881569, "crypto_shash_setkey" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x89e4046, "devm_kfree" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3620f016, "sk_filter_trim_cap" },
	{ 0x25cd7fc1, "sock_no_shutdown" },
	{ 0x657ef943, "__sock_recv_timestamp" },
	{ 0x6d5cd7ee, "debugfs_attr_read" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xdd9494ea, "__sock_recv_ts_and_drops" },
	{ 0xdfbcf889, "module_put" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x15950b0c, "proto_register" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x761527a1, "put_device" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8761c95e, "datagram_poll" },
	{ 0x2999843c, "sock_register" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x6799d664, "proto_unregister" },
	{ 0x6b853d06, "ns_to_kernel_old_timeval" },
	{ 0x258c7b2d, "crypto_alloc_kpp" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x4aaa05cd, "sock_alloc_send_skb" },
	{ 0x21b84b5e, "put_cmsg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe4b5ded9, "__pskb_copy_fclone" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x16e6d67f, "get_device" },
	{ 0x148653, "vsnprintf" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x955c295f, "led_trigger_unregister_simple" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x9dd8badf, "sock_no_connect" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x69acdf38, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xa517c0ff, "crypto_stats_kpp_compute_shared_secret" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0xe89c5d22, "crypto_stats_kpp_set_secret" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0xc0763484, "rfkill_blocked" },
	{ 0x4ec54e78, "bitmap_to_arr32" },
	{ 0xab1063ca, "led_trigger_register_simple" },
	{ 0x4195254f, "class_destroy" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7e51de59, "debugfs_create_u16" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1ae4301b, "crypto_shash_tfm_digest" },
	{ 0xb6f1d859, "crypto_stats_get" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x16faf8e4, "crypto_stats_kpp_generate_public_key" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x24e48d13, "skb_put" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x246cd242, "debugfs_attr_write" },
	{ 0x20978fb9, "idr_find" },
	{ 0x1aafecfe, "__class_create" },
	{ 0x78b887ed, "vsprintf" },
	{ 0x7475be8e, "crypto_ecdh_key_len" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x45db6081, "simple_attr_open" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3a9f0715, "sock_i_uid" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xfd6c3908, "skb_free_datagram" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "rfkill,ecdh_generic");


MODULE_INFO(srcversion, "133236C4946118C637FF5EF");
