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
	{ 0xe1e35260, "usb_stor_post_reset" },
	{ 0x1bc3edc2, "usb_stor_sense_invalidCDB" },
	{ 0x3fafbee2, "usb_stor_disconnect" },
	{ 0xeecb1d5, "scsi_eh_restore_cmnd" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x2f216816, "usb_stor_probe2" },
	{ 0xd79ed6c2, "usb_stor_transparent_scsi_command" },
	{ 0xa44c0030, "usb_stor_host_template_init" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfd80f3ab, "usb_stor_pre_reset" },
	{ 0x95153399, "usb_stor_reset_resume" },
	{ 0xf1508e38, "usb_stor_suspend" },
	{ 0x57db88ae, "usb_stor_probe1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe6ff1125, "scsi_eh_prep_cmnd" },
	{ 0x8edb6a58, "usb_stor_resume" },
	{ 0xa9e94dda, "usb_register_driver" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v04B4p6830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14CDp6116d0160dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0B2A33C0EEA7B71C05133F3");
