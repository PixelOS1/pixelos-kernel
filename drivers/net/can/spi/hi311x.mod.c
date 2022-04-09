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
	{ 0xb3153dca, "driver_unregister" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0x88bbb52b, "can_put_echo_skb" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x4a7a43c4, "can_free_echo_skb" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xf3424cff, "close_candev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcaff4958, "open_candev" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x9d27181c, "spi_get_device_id" },
	{ 0x74c99cd1, "register_candev" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x68462f0f, "devm_regulator_get_optional" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x52345e6e, "spi_setup" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0x815588a6, "clk_enable" },
	{ 0x32cfe081, "dev_err_probe" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3317deee, "alloc_candev_mqs" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x6631a567, "devm_clk_get_optional" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x13a809ea, "can_bus_off" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xb875fdde, "can_get_echo_skb" },
	{ 0x1314b943, "can_change_state" },
	{ 0x6d4628c1, "alloc_can_err_skb" },
	{ 0xe1c1701c, "netif_rx_ni" },
	{ 0x9df6b80e, "alloc_can_skb" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xcde079b8, "free_candev" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x6fb48068, "unregister_candev" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x43469f8e, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("spi:hi3110");
MODULE_ALIAS("of:N*T*Cholt,hi3110");
MODULE_ALIAS("of:N*T*Cholt,hi3110C*");

MODULE_INFO(srcversion, "5B4F39BFCAF2DE2AE2A5EC9");
