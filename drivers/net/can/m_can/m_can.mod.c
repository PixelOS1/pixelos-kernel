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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x74c99cd1, "register_candev" },
	{ 0xe174f768, "can_rx_offload_queue_sorted" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x6d4628c1, "alloc_can_err_skb" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xed831a6, "can_rx_offload_get_echo_skb" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x464b4118, "can_rx_offload_enable" },
	{ 0xf7c71ce9, "phy_power_off" },
	{ 0x13a809ea, "can_bus_off" },
	{ 0xf3424cff, "close_candev" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xf12d9387, "can_fd_dlc2len" },
	{ 0xdf956e9c, "phy_power_on" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x6047ede6, "can_fd_len2dlc" },
	{ 0x3317deee, "alloc_candev_mqs" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcde079b8, "free_candev" },
	{ 0x13f76908, "pinctrl_pm_select_sleep_state" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xe7184a4a, "can_rx_offload_add_manual" },
	{ 0x545f063a, "can_change_mtu" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x485b0aa5, "fwnode_property_read_u32_array" },
	{ 0x6fb48068, "unregister_candev" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0x9df6b80e, "alloc_can_skb" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x253d89b, "pinctrl_pm_select_default_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x99261972, "devm_clk_get" },
	{ 0xcaff4958, "open_candev" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x77a2ba88, "can_rx_offload_threaded_irq_finish" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0xbb0a1aed, "alloc_canfd_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb875fdde, "can_get_echo_skb" },
	{ 0x88bbb52b, "can_put_echo_skb" },
	{ 0x309f5979, "can_rx_offload_del" },
	{ 0x4a7a43c4, "can_free_echo_skb" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "C3ECF0C6A2DF85A73869EFA");
