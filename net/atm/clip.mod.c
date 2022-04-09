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
	{ 0x9e704944, "neigh_seq_next" },
	{ 0x57c27ced, "neigh_seq_stop" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0xf51cfa5a, "proc_create_net_data" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x35cac49d, "register_atm_ioctl" },
	{ 0x459f3f88, "skb_push" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x24e48d13, "skb_put" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x37a0cba, "kfree" },
	{ 0x979bd4e8, "atm_charge" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xb24f9613, "netif_rx" },
	{ 0x8ef0abf1, "neigh_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x28674aa3, "dst_release" },
	{ 0xb05876f7, "__neigh_create" },
	{ 0xf6764891, "neigh_lookup" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x133536b8, "register_netdev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x30598a28, "vcc_process_recv_queue" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x80d0181, "vcc_insert_socket" },
	{ 0xc6cbbc89, "capable" },
	{ 0xda59b65, "free_netdev" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa6b25eeb, "deregister_atm_ioctl" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x92997ed8, "_printk" },
	{ 0x82b6cdd4, "neigh_update" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x63bf1840, "netif_tx_unlock" },
	{ 0x4aafecd0, "netif_tx_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xdfbcf889, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x865d360, "__icmp_send" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x70ae92cb, "vcc_release_async" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4e45accf, "__neigh_for_each_release" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xaea0ab22, "neigh_seq_start" },
	{ 0xc2ad2872, "arp_tbl" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xfb578fc5, "memset" },
	{ 0x96848186, "scnprintf" },
	{ 0xd349d253, "seq_printf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3344b2df, "neigh_direct_output" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "B179B5C2C128FCEBAFD1E6A");
