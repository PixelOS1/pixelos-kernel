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
	{ 0x37a8cd8c, "param_ops_short" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xc48b4222, "dvb_usbv2_reset_resume" },
	{ 0xcecc9d7a, "dvb_usbv2_resume" },
	{ 0x516c5030, "dvb_usbv2_suspend" },
	{ 0x14e0fee1, "dvb_usbv2_disconnect" },
	{ 0x1e78c261, "dvb_usbv2_probe" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x60941796, "i2c_new_client_device" },
	{ 0xdd64e639, "strscpy" },
	{ 0xf7f00627, "zd1301_demod_get_dvb_frontend" },
	{ 0x83271d2a, "zd1301_demod_get_i2c_adapter" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xc88dc9c9, "i2c_unregister_device" },
	{ 0xdfbcf889, "module_put" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dvb_usb_v2,i2c-core,zd1301_demod");

MODULE_ALIAS("usb:v0ACEp13A1d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A3E7433B696F926AF9789FF");
