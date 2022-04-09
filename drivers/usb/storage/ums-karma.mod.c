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
	{ 0xe2d6366d, "usb_stor_bulk_transfer_buf" },
	{ 0xe1e35260, "usb_stor_post_reset" },
	{ 0x8b640a5c, "usb_stor_Bulk_transport" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3fafbee2, "usb_stor_disconnect" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x2f216816, "usb_stor_probe2" },
	{ 0xa44c0030, "usb_stor_host_template_init" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfd80f3ab, "usb_stor_pre_reset" },
	{ 0x95153399, "usb_stor_reset_resume" },
	{ 0xf1508e38, "usb_stor_suspend" },
	{ 0x57db88ae, "usb_stor_probe1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x8edb6a58, "usb_stor_resume" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x12cac5f3, "usb_stor_Bulk_reset" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v045Ap5210d0101dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "191518F74D2E386D4E95D7B");
