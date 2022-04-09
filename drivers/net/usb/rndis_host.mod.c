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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd15f0f60, "usbnet_resume" },
	{ 0x9f4d6962, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x950e8580, "usbnet_cdc_unbind" },
	{ 0xc37b7ea4, "usbnet_disconnect" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x9fd4db3, "usbnet_generic_cdc_bind" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x13864ccb, "usbnet_stop" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x95249623, "dev_get_tstats64" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0xec297bc5, "usbnet_start_xmit" },
	{ 0xa8378ebb, "usbnet_suspend" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x128f355, "skb_copy_expand" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xc70dc5a7, "usbnet_tx_timeout" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x86afb1d6, "usbnet_skb_return" },
	{ 0xd6f46ea2, "usb_driver_release_interface" },
	{ 0x97d1db56, "usbnet_open" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5f219c43, "usb_interrupt_msg" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xb0e602eb, "memmove" },
	{ 0x6277eaac, "eth_mac_addr" },
};

MODULE_INFO(depends, "usbnet,cdc_ether");

MODULE_ALIAS("usb:v1630p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v238Bp*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc04ip01in*");

MODULE_INFO(srcversion, "B62841E362874F969271F4F");
