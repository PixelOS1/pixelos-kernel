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
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3f4fc704, "input_alloc_absinfo" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0x6626afca, "down" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0xcf2a6966, "up" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x64acaa9d, "hid_hw_raw_request" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8f048bb0, "input_mt_sync_frame" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0x331337dc, "input_event" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xcb2cb33d, "hid_hw_start" },
	{ 0x8d97594e, "hid_open_report" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x42ad8fea, "hid_hw_stop" },
	{ 0x29b7c46d, "hid_hw_close" },
	{ 0xa8b52982, "hid_hw_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b*g*v0000044Ep0000120B");
MODULE_ALIAS("hid:b*g*v0000044Ep00001215");
MODULE_ALIAS("hid:b*g*v0000044Ep0000120C");

MODULE_INFO(srcversion, "412C98421006A77260166A1");
