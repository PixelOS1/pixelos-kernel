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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x84dcf661, "netdev_info" },
	{ 0xd0bb7cfa, "skb_clone_tx_timestamp" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x32cfe081, "dev_err_probe" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x6ece8090, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xb24f9613, "netif_rx" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xacff9338, "sock_efree" },
	{ 0xe1c1701c, "netif_rx_ni" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xda59b65, "free_netdev" },
	{ 0x133536b8, "register_netdev" },
	{ 0x7d11271e, "nla_put" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa64a5b60, "skb_tstamp_tx" },
	{ 0x34340150, "gpiod_set_value" },
	{ 0x24e48d13, "skb_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5FE30ABEDE07D78EC49D1B1");
