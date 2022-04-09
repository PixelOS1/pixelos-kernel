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
	{ 0x4d1b1eb9, "tcf_unregister_action" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x24dce4b1, "tcf_register_action" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x349cba85, "strchr" },
	{ 0x92997ed8, "_printk" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x28674aa3, "dst_release" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xfebd8824, "tcf_dev_queue_xmit" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x459f3f88, "skb_push" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0xff2d96f4, "skb_pull_rcsum" },
	{ 0x6ece8090, "skb_clone" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7d11271e, "nla_put" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3a40b0d8, "tcf_idr_search" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x85798a34, "tcf_idr_cleanup" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x4fbba5a8, "tcf_idr_release" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x24a3e5f9, "tcf_chain_put_by_act" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x9bcaa452, "tcf_action_set_ctrlact" },
	{ 0x722e0dfd, "dev_get_by_index" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x5acae1e6, "tcf_action_check_ctrlact" },
	{ 0xd3b04af6, "tcf_idr_create_from_flags" },
	{ 0x73d3ccc2, "tcf_idr_check_alloc" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x54a73e0f, "tcf_generic_walker" },
	{ 0x3737463e, "tcf_action_update_stats" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x6adf3b0d, "tcf_idrinfo_destroy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F939DA363231AB3ADBDE44B");
