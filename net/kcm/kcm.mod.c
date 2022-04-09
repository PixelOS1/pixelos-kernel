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
	{ 0xff80ab3, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd93a9c2c, "release_sock" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0xdf150c04, "sock_init_data" },
	{ 0x4d7272e4, "migrate_enable" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0x68523297, "sockfd_lookup" },
	{ 0xd3399010, "strp_init" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0xd6cfd38e, "_copy_from_iter_nocache" },
	{ 0x3a32ff2b, "strp_unpause" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xaaad80a8, "strp_data_ready" },
	{ 0x7650c19b, "sock_release" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x82595815, "proc_create_net_single" },
	{ 0xd349d253, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xce489e24, "sock_no_getname" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xcf5e61c4, "sock_rfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xcd34d80, "skb_unlink" },
	{ 0xd0458486, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd2d53517, "sk_wait_data" },
	{ 0x6a551a05, "sock_no_socketpair" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0x5a5037ff, "strp_check_rcv" },
	{ 0xf25fff2f, "tcp_stream_memory_free" },
	{ 0xca1dc550, "sk_alloc" },
	{ 0xc23477d, "current_task" },
	{ 0xa0bf779a, "skb_copy_datagram_iter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x595bcc8b, "sock_no_bind" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x86203c04, "sk_stream_wait_memory" },
	{ 0x500f99e8, "strp_done" },
	{ 0x23112f0a, "sock_no_listen" },
	{ 0x10349e44, "__sk_mem_reclaim" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x27a82dae, "sock_no_accept" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x87f244b9, "sk_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x49608959, "migrate_disable" },
	{ 0xf0785fc6, "fput" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x25cd7fc1, "sock_no_shutdown" },
	{ 0x82f5a67b, "bpf_prog_get_type_dev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x15950b0c, "proto_register" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa7ec6c1d, "kernel_sendpage" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8761c95e, "datagram_poll" },
	{ 0x2999843c, "sock_register" },
	{ 0x6799d664, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0x9fa69b02, "sk_error_report" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf51cfa5a, "proc_create_net_data" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xb6371c45, "sock_alloc_file" },
	{ 0x7c2a861, "sock_alloc" },
	{ 0x5e970d32, "__sk_mem_schedule" },
	{ 0x82df4902, "sk_stream_error" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0xdb08471d, "strp_stop" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x716ba5e7, "csum_and_copy_from_iter" },
	{ 0x9dd8badf, "sock_no_connect" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x27ebbbba, "skb_splice_bits" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x1c4150c0, "fd_install" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xdf48e0d9, "sk_page_frag_refill" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x755869f2, "bpf_prog_put" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BDA3CECEEF0A8E02DA6B32C");
