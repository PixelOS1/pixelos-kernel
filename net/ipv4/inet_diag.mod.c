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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x914e1fac, "sock_diag_put_meminfo" },
	{ 0x5d8476d3, "bpf_sk_storage_diag_alloc" },
	{ 0xb6e5ea4e, "from_kuid_munged" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xcb6fa2cc, "sock_diag_unregister" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc68fb0a5, "sock_i_ino" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xbdf950e3, "sock_diag_register" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7d11271e, "nla_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x7d1b2c3a, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x1b74d1, "nla_reserve_64bit" },
	{ 0xf665f74f, "sock_load_diag_module" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd42d25bc, "sock_diag_unregister_inet_compat" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xac2aa24a, "inet6_lookup" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd2ee7396, "sock_gen_put" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8e4eb451, "bpf_sk_storage_diag_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x24a2473, "sock_diag_check_cookie" },
	{ 0x76ea5cb, "sock_diag_save_cookie" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0xab60727, "__inet_lookup_listener" },
	{ 0xdac09328, "sock_diag_register_inet_compat" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd54044bb, "bpf_sk_storage_diag_put" },
	{ 0x7955f561, "__nlmsg_put" },
	{ 0x3a9f0715, "sock_i_uid" },
	{ 0xb7fa52bc, "__netlink_dump_start" },
	{ 0xa6a6ff6b, "netlink_net_capable" },
	{ 0xf6cfd700, "__inet_lookup_established" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F1FBC90856679C7DEDD8DCB");
