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
	{ 0x18e60984, "__do_once_start" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xfc5bacdf, "lwtunnel_encap_del_ops" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xfefa012f, "genl_register_family" },
	{ 0x3e456cee, "lwtunnel_encap_add_ops" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xe8edfbf3, "genl_unregister_family" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0x28674aa3, "dst_release" },
	{ 0x394d699b, "dst_cache_set_ip6" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0xb9df1f98, "lwtunnel_state_alloc" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x7f6cee89, "rhashtable_free_and_destroy" },
	{ 0x5d2aa5fb, "rhashtable_walk_peek" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0x56f6cc03, "nf_unregister_net_hooks" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0x7d11271e, "nla_put" },
	{ 0x1f5d65b, "dst_cache_get" },
	{ 0x8162c74, "free_bucket_spinlocks" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x7d1b2c3a, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x7ec60e66, "ip6_route_output_flags" },
	{ 0x5d43f717, "nf_register_net_hooks" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe8fbf4fa, "__alloc_bucket_spinlocks" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0x33a0c36d, "ip6_output" },
	{ 0x37a0cba, "kfree" },
	{ 0xfc10662e, "genlmsg_put" },
	{ 0xdfc002c6, "inet_proto_csum_replace_by_diff" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa1b06480, "ip_output" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xf5073623, "xfrm_lookup" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xe14c20e4, "__do_once_done" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6E7993BD389A59148ECB3FD");
