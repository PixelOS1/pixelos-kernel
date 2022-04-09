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
	{ 0xcd9dd851, "param_ops_ushort" },
	{ 0xb34fdfcf, "param_ops_byte" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x3f151964, "usbatm_usb_disconnect" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0x761ae28f, "usb_driver_claim_interface" },
	{ 0x8d20065e, "usb_altnum_to_altsetting" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xd6f46ea2, "usb_driver_release_interface" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x761aca9d, "usbatm_usb_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbatm");


MODULE_INFO(srcversion, "68F6109825DE6FE81708C65");
