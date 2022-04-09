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
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x2170e6d, "napi_enable" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x84dcf661, "netdev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0xee09ed35, "devm_ioremap_resource" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x349cba85, "strchr" },
	{ 0x133536b8, "register_netdev" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x754d539c, "strlen" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xda59b65, "free_netdev" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4182f7ba, "gpiod_get_raw_value" },
	{ 0x88786b87, "gpio_to_desc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AD10C7E366B9860CB2FF786");
