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
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x74c99cd1, "register_candev" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3317deee, "alloc_candev_mqs" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa9dd129e, "usb_string" },
	{ 0x13a809ea, "can_bus_off" },
	{ 0x6d4628c1, "alloc_can_err_skb" },
	{ 0xb24f9613, "netif_rx" },
	{ 0x9df6b80e, "alloc_can_skb" },
	{ 0xf3424cff, "close_candev" },
	{ 0xcaff4958, "open_candev" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0x921a7980, "usb_unanchor_urb" },
	{ 0x4a7a43c4, "can_free_echo_skb" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x88bbb52b, "can_put_echo_skb" },
	{ 0xdeebbef5, "usb_anchor_urb" },
	{ 0x7475a02, "usb_alloc_coherent" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xb875fdde, "can_get_echo_skb" },
	{ 0xcde079b8, "free_candev" },
	{ 0x667d4072, "usb_free_coherent" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x84dcf661, "netdev_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v0483p1234d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1BF777D67E14811868CE021");
