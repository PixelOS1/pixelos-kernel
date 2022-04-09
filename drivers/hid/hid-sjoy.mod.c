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
	{ 0x357c7c39, "__hid_register_driver" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ccb388b, "input_ff_create_memless" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xcb2cb33d, "hid_hw_start" },
	{ 0x8d97594e, "hid_open_report" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xeefcded2, "hid_hw_request" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v00006666p00008801");
MODULE_ALIAS("hid:b0003g*v00006666p00008802");
MODULE_ALIAS("hid:b0003g*v00006666p00008804");
MODULE_ALIAS("hid:b0003g*v00000925p00000005");
MODULE_ALIAS("hid:b0003g*v00000925p00008888");
MODULE_ALIAS("hid:b0003g*v00000925p00008866");
MODULE_ALIAS("hid:b0003g*v00000B43p00000003");

MODULE_INFO(srcversion, "D48F942095A7EF64E177699");
