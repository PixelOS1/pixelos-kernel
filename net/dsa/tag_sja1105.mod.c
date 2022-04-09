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
	{ 0xfb831f69, "dsa_tag_drivers_unregister" },
	{ 0xa8fdbc65, "dsa_tag_drivers_register" },
	{ 0x24e48d13, "skb_put" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x84069b6b, "kthread_queue_work" },
	{ 0x4c84f5b9, "dsa_8021q_bridge_tx_fwd_offload_vid" },
	{ 0xfa62d023, "br_vlan_enabled" },
	{ 0x2b7e15b9, "dsa_8021q_xmit" },
	{ 0x9a6726af, "dsa_tag_8021q_tx_vid" },
	{ 0xe5056aa3, "netdev_txq_to_tc" },
	{ 0x92997ed8, "_printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3f48bb55, "pskb_trim_rcsum_slow" },
	{ 0x59a2f0ee, "packing" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6055bf95, "dsa_switch_find" },
	{ 0x441c0c0d, "dsa_8021q_rcv" },
	{ 0xff2d96f4, "skb_pull_rcsum" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xe88656d8, "br_vlan_get_info_rcu" },
	{ 0x5928bba7, "vid_is_dsa_8021q_rxvlan" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xb0e602eb, "memmove" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xe2d2e418, "kthread_create_worker" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x56470118, "__warn_printk" },
	{ 0x670f5aee, "br_vlan_get_proto" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x37a0cba, "kfree" },
	{ 0x3546ab7b, "kthread_destroy_worker" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dsa_core,bridge");


MODULE_INFO(srcversion, "73B01F78B504EA9FBA2057A");
