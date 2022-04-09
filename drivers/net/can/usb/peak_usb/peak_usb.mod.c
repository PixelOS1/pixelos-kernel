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
	{ 0x84dcf661, "netdev_info" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x74c99cd1, "register_candev" },
	{ 0x6d4628c1, "alloc_can_err_skb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xfa6ca004, "driver_for_each_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x921a7980, "usb_unanchor_urb" },
	{ 0x13a809ea, "can_bus_off" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xf3424cff, "close_candev" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xc23477d, "current_task" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xf12d9387, "can_fd_dlc2len" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x6047ede6, "can_fd_len2dlc" },
	{ 0x3317deee, "alloc_candev_mqs" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcde079b8, "free_candev" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x545f063a, "can_change_mtu" },
	{ 0x1314b943, "can_change_state" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x6fb48068, "unregister_candev" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xa916b694, "strnlen" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x9df6b80e, "alloc_can_skb" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcaff4958, "open_candev" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xbb0a1aed, "alloc_canfd_skb" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xb875fdde, "can_get_echo_skb" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x88bbb52b, "can_put_echo_skb" },
	{ 0x4a7a43c4, "can_free_echo_skb" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xdeebbef5, "usb_anchor_urb" },
	{ 0x51ec4d55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v0C72p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0014d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "19A2FAA9D18CB67D3ACD86C");
