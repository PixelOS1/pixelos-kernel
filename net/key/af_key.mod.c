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
	{ 0xfa225959, "sock_no_sendpage" },
	{ 0xd0458486, "sock_no_mmap" },
	{ 0x25cd7fc1, "sock_no_shutdown" },
	{ 0x23112f0a, "sock_no_listen" },
	{ 0x418dba4d, "sock_no_ioctl" },
	{ 0x8761c95e, "datagram_poll" },
	{ 0xce489e24, "sock_no_getname" },
	{ 0x27a82dae, "sock_no_accept" },
	{ 0x6a551a05, "sock_no_socketpair" },
	{ 0x9dd8badf, "sock_no_connect" },
	{ 0x595bcc8b, "sock_no_bind" },
	{ 0x50cc3a6f, "xfrm_register_km" },
	{ 0x2999843c, "sock_register" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0x15950b0c, "proto_register" },
	{ 0x6799d664, "proto_unregister" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xdd5f7519, "xfrm_unregister_km" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x72395dc1, "xfrm_calg_get_byid" },
	{ 0x5c699441, "xfrm_aalg_get_byid" },
	{ 0x27866435, "security_xfrm_state_alloc" },
	{ 0xe7bcd6e8, "xfrm_state_add" },
	{ 0xb1491ae1, "xfrm_audit_state_add" },
	{ 0xde92ad71, "xfrm_state_update" },
	{ 0x3ceaa1ee, "xfrm_init_state" },
	{ 0x754d539c, "strlen" },
	{ 0xc80741, "xfrm_ealg_get_byid" },
	{ 0xa22aaa32, "xfrm_state_alloc" },
	{ 0x547615b1, "xfrm_policy_byid" },
	{ 0xecc32da7, "xfrm_audit_policy_add" },
	{ 0xd8a78c88, "xfrm_policy_insert" },
	{ 0x791d9bb9, "xfrm_policy_alloc" },
	{ 0xcc40beb1, "xfrm_alloc_spi" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0x4d96993d, "xfrm_find_acq" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xfb578fc5, "memset" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x3482f8a8, "xfrm_policy_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc65304b3, "security_xfrm_policy_alloc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc36551f7, "xfrm_audit_policy_delete" },
	{ 0xa9c63b69, "security_xfrm_policy_free" },
	{ 0x1f9d688, "xfrm_policy_bysel_ctx" },
	{ 0x69acdf38, "memcpy" },
	{ 0x410993d7, "xfrm_migrate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x28dce3c0, "xfrm_find_acq_byseq" },
	{ 0xfb86ebc2, "__xfrm_state_destroy" },
	{ 0xc34a7690, "xfrm_audit_state_delete" },
	{ 0xf693617c, "xfrm_state_delete" },
	{ 0xc599a772, "security_xfrm_state_delete" },
	{ 0xdcedb06f, "xfrm_state_lookup" },
	{ 0x87f244b9, "sk_free" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x307eaf37, "skb_copy" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc6b1fdbe, "xfrm_aalg_get_byidx" },
	{ 0xb73be794, "xfrm_ealg_get_byidx" },
	{ 0x7a8ca627, "xfrm_count_pfkey_enc_supported" },
	{ 0xa575945, "xfrm_count_pfkey_auth_supported" },
	{ 0x28e23139, "xfrm_probe_algs" },
	{ 0x64355c2, "km_state_notify" },
	{ 0x83f4e6cc, "xfrm_state_flush" },
	{ 0x757d364c, "km_policy_notify" },
	{ 0x105f2174, "xfrm_policy_flush" },
	{ 0x24e48d13, "skb_put" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdd9494ea, "__sock_recv_ts_and_drops" },
	{ 0xfd6c3908, "skb_free_datagram" },
	{ 0xa0bf779a, "skb_copy_datagram_iter" },
	{ 0x801ba6fd, "skb_recv_datagram" },
	{ 0x92997ed8, "_printk" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xf51cfa5a, "proc_create_net_data" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdf150c04, "sock_init_data" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xca1dc550, "sk_alloc" },
	{ 0x9487d3e1, "ns_capable" },
	{ 0x1e9edfb7, "seq_hlist_start_head_rcu" },
	{ 0x67b78eb3, "seq_hlist_next_rcu" },
	{ 0xd349d253, "seq_printf" },
	{ 0xb6e5ea4e, "from_kuid_munged" },
	{ 0x3a9f0715, "sock_i_uid" },
	{ 0xc68fb0a5, "sock_i_ino" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0x26264c4f, "xfrm_state_walk" },
	{ 0x17d7978c, "xfrm_state_walk_done" },
	{ 0xb89dfabc, "xfrm_policy_walk_done" },
	{ 0xe7fc02f3, "xfrm_policy_walk" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xcf5e61c4, "sock_rfree" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "92AE557D4F1FD4174B86AD5");
