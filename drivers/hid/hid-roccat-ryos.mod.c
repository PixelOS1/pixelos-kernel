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
	{ 0x229d0e87, "hid_unregister_driver" },
	{ 0x4195254f, "class_destroy" },
	{ 0x357c7c39, "__hid_register_driver" },
	{ 0x1aafecfe, "__class_create" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xe4fb08fe, "roccat_connect" },
	{ 0x103efe8a, "roccat_common2_device_init_struct" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xcb2cb33d, "hid_hw_start" },
	{ 0x8d97594e, "hid_open_report" },
	{ 0x677f83f1, "usb_hid_driver" },
	{ 0x57642c5, "roccat_common2_sysfs_read" },
	{ 0xa0425cf2, "roccat_common2_sysfs_write" },
	{ 0x2f622ea1, "roccat_disconnect" },
	{ 0x42ad8fea, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e4427c8, "roccat_report_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid-roccat,hid-roccat-common");

MODULE_ALIAS("hid:b0003g*v00001E7Dp00003138");
MODULE_ALIAS("hid:b0003g*v00001E7Dp000031CE");
MODULE_ALIAS("hid:b0003g*v00001E7Dp00003232");

MODULE_INFO(srcversion, "FE0A0B66572C5BAA349777D");
