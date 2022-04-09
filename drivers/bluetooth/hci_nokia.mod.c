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
	{ 0xbc294c30, "__serdev_device_driver_register" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf7037635, "btbcm_set_bdaddr" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49843e91, "__hci_cmd_sync" },
	{ 0x1564421, "request_firmware" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x5fcf17a5, "hci_uart_tx_wakeup" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xb150ea3a, "serdev_device_get_tiocm" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x651ff016, "serdev_device_set_baudrate" },
	{ 0x515610c, "serdev_device_write_flush" },
	{ 0x7ce0d551, "gpiod_get_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0x18738f05, "serdev_device_set_flow_control" },
	{ 0x3e51a3c4, "serdev_device_set_tiocm" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe8723b0a, "hci_uart_register_device" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x99261972, "devm_clk_get" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0x28b2ea29, "devm_gpiod_get" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x9a2a64b5, "gpiod_get_value" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x34340150, "gpiod_set_value" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xa6257a2f, "complete" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb9bee798, "h4_recv_buf" },
	{ 0x54a2d145, "hci_recv_frame" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x24e48d13, "skb_put" },
	{ 0xd44b38f4, "__skb_pad" },
	{ 0x459f3f88, "skb_push" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x257bee8f, "serdev_device_wait_until_sent" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xd1912c59, "hci_uart_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "btbcm,bluetooth,hci_uart");


MODULE_INFO(srcversion, "3ACD52201C7C19B56DED462");
