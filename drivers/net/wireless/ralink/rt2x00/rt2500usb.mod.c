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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x32b511b1, "rt2x00mac_tx_frames_pending" },
	{ 0x4dbc1f20, "rt2x00mac_get_ringparam" },
	{ 0x45a317ad, "rt2x00mac_get_antenna" },
	{ 0x3f99c2c, "rt2x00mac_set_antenna" },
	{ 0x26721457, "rt2x00mac_flush" },
	{ 0x95b46ca7, "rt2x00mac_rfkill_poll" },
	{ 0x4f6754a0, "rt2x00mac_conf_tx" },
	{ 0x3fbdbb6f, "rt2x00mac_get_stats" },
	{ 0xf3b8ca70, "rt2x00mac_sw_scan_complete" },
	{ 0xd2f91674, "rt2x00mac_sw_scan_start" },
	{ 0x6dd1b6fc, "rt2x00mac_set_key" },
	{ 0x6576d744, "rt2x00mac_set_tim" },
	{ 0xbb61f480, "rt2x00mac_configure_filter" },
	{ 0x7825579e, "rt2x00mac_bss_info_changed" },
	{ 0xde51ed82, "rt2x00mac_config" },
	{ 0x46db5334, "rt2x00mac_remove_interface" },
	{ 0x314148b6, "rt2x00mac_add_interface" },
	{ 0xd73fab62, "rt2x00mac_stop" },
	{ 0xa89d9690, "rt2x00mac_start" },
	{ 0x264f955, "rt2x00mac_tx" },
	{ 0x8698e0da, "rt2x00usb_flush_queue" },
	{ 0x4bef6594, "rt2x00usb_kick_queue" },
	{ 0x1cf66289, "rt2x00usb_watchdog" },
	{ 0x259006d5, "rt2x00usb_clear_entry" },
	{ 0x224e78e, "rt2x00usb_uninitialize" },
	{ 0x89e1de3a, "rt2x00usb_initialize" },
	{ 0x6653fc85, "rt2x00usb_resume" },
	{ 0xa43134f2, "rt2x00usb_suspend" },
	{ 0x1c983f53, "rt2x00usb_disconnect" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xcc61b409, "rt2x00lib_set_mac_address" },
	{ 0x70737b6, "rt2x00usb_disable_radio" },
	{ 0xf9a482f9, "msleep" },
	{ 0x95445822, "rt2x00usb_vendor_request" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9f58bbcd, "rt2x00usb_vendor_req_buff_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x66b04b83, "rt2x00debug_dump_frame" },
	{ 0x459f3f88, "skb_push" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x205e7457, "rt2x00usb_vendor_request_buff" },
	{ 0x4d678205, "rt2x00usb_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2x00usb");

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7F73ED42D4DF78E140372C9");
