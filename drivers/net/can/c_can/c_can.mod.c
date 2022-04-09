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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x84dcf661, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x74c99cd1, "register_candev" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x6d4628c1, "alloc_can_err_skb" },
	{ 0xde0eba69, "pinctrl_select_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xdd64e639, "strscpy" },
	{ 0x19ce1f08, "pinctrl_lookup_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x13a809ea, "can_bus_off" },
	{ 0x8446a9fe, "pinctrl_get" },
	{ 0xf3424cff, "close_candev" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x3317deee, "alloc_candev_mqs" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcde079b8, "free_candev" },
	{ 0x13f76908, "pinctrl_pm_select_sleep_state" },
	{ 0x9b575304, "pinctrl_put" },
	{ 0x545f063a, "can_change_mtu" },
	{ 0x6fb48068, "unregister_candev" },
	{ 0xa916b694, "strnlen" },
	{ 0x9df6b80e, "alloc_can_skb" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x253d89b, "pinctrl_pm_select_default_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcaff4958, "open_candev" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb875fdde, "can_get_echo_skb" },
	{ 0x88bbb52b, "can_put_echo_skb" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "361B3AAD41A869C991CDFE2");
