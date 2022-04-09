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
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0xdfc12431, "wiphy_register" },
	{ 0x5d180d08, "wiphy_new_nm" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xdfbcf889, "module_put" },
	{ 0x24d22fd, "netdev_upper_dev_unlink" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0xa25fce3f, "netdev_rx_handler_unregister" },
	{ 0x96d01fb1, "__module_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xaaeda4d8, "netdev_upper_dev_link" },
	{ 0xc97322ad, "register_netdevice" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x2d7dfc73, "netif_stacked_transfer_operstate" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xcf6f7e4c, "netdev_rx_handler_register" },
	{ 0xcac320d3, "__dev_get_by_index" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0xfd11e320, "cfg80211_disconnected" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xb1e54e7c, "cfg80211_connect_done" },
	{ 0xce1fb33, "cfg80211_put_bss" },
	{ 0xfda27c91, "cfg80211_inform_bss_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x753b52ed, "wiphy_free" },
	{ 0x42f1cc7d, "wiphy_unregister" },
	{ 0xaf0effb6, "cfg80211_scan_done" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x86814848, "ether_setup" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "19099A4FF486B0F21355F35");
