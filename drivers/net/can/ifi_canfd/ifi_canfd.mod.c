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
	{ 0x545f063a, "can_change_mtu" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x9df6b80e, "alloc_can_skb" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xf12d9387, "can_fd_dlc2len" },
	{ 0xbb0a1aed, "alloc_canfd_skb" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0x13a809ea, "can_bus_off" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0x6d4628c1, "alloc_can_err_skb" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcaff4958, "open_candev" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xb875fdde, "can_get_echo_skb" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xf3424cff, "close_candev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x72b9627d, "napi_disable" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x88bbb52b, "can_put_echo_skb" },
	{ 0x6047ede6, "can_fd_len2dlc" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x74c99cd1, "register_candev" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x3317deee, "alloc_candev_mqs" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0xe4ec892b, "devm_platform_ioremap_resource" },
	{ 0xcde079b8, "free_candev" },
	{ 0x6fb48068, "unregister_candev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("of:N*T*Cifi,canfd-1.0");
MODULE_ALIAS("of:N*T*Cifi,canfd-1.0C*");

MODULE_INFO(srcversion, "6F1C02A911C3DA5E921391A");
