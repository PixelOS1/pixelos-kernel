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
	{ 0xa24f23d8, "__request_module" },
	{ 0xf9a482f9, "msleep" },
	{ 0x89937627, "i2c_transfer" },
	{ 0xcecc9d7a, "dvb_usbv2_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37a8cd8c, "param_ops_short" },
	{ 0x5d07bae9, "dvb_usbv2_generic_rw_locked" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x60941796, "i2c_new_client_device" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0x1e78c261, "dvb_usbv2_probe" },
	{ 0x73795756, "rc_keydown" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x78fad7e0, "dvb_ca_en50221_release" },
	{ 0xc88dc9c9, "i2c_unregister_device" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x14e0fee1, "dvb_usbv2_disconnect" },
	{ 0xdfbcf889, "module_put" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x516c5030, "dvb_usbv2_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xfc2a3d88, "dvb_ca_en50221_init" },
	{ 0xc48b4222, "dvb_usbv2_reset_resume" },
	{ 0xf32ea3d5, "try_module_get" },
};

MODULE_INFO(depends, "i2c-core,dvb_usb_v2,rc-core,dvb-core");

MODULE_ALIAS("usb:v04B4p861Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1C73p861Fd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "34C82A8751C92CAFF5A3B7E");
