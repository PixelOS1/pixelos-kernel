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
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x68e12d35, "hid_validate_values" },
	{ 0xcb2cb33d, "hid_hw_start" },
	{ 0x8d97594e, "hid_open_report" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x331337dc, "input_event" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xeefcded2, "hid_hw_request" },
	{ 0x64acaa9d, "hid_hw_raw_request" },
	{ 0x66d065e8, "hid_hw_output_report" },
	{ 0x37a0cba, "kfree" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x42ad8fea, "hid_hw_stop" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000017EFp00006009");
MODULE_ALIAS("hid:b0003g*v000017EFp00006047");
MODULE_ALIAS("hid:b0005g*v000017EFp00006048");
MODULE_ALIAS("hid:b0003g*v000017EFp00006067");
MODULE_ALIAS("hid:b0003g*v000004B3p00003100");
MODULE_ALIAS("hid:b0003g*v000004B3p00003103");
MODULE_ALIAS("hid:b0003g*v000004B3p00003105");
MODULE_ALIAS("hid:b0003g*v000004B3p00003108");
MODULE_ALIAS("hid:b0003g*v000004B3p00003109");
MODULE_ALIAS("hid:b0003g*v000017EFp00006049");
MODULE_ALIAS("hid:b0003g*v000017EFp00006062");
MODULE_ALIAS("hid:b0003g0001v000017EFp000060A3");

MODULE_INFO(srcversion, "9FBEFC4D8943207C51CAC75");
