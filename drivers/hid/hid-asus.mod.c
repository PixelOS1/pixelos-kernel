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
	{ 0x89e4046, "devm_kfree" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0x40d50e2a, "devm_led_classdev_register_ext" },
	{ 0x57c46ceb, "asus_wmi_evaluate_method" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0x3f4fc704, "input_alloc_absinfo" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0x8f048bb0, "input_mt_sync_frame" },
	{ 0x4d3468c, "power_supply_changed" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0x331337dc, "input_event" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78ddb76b, "dmi_match" },
	{ 0xcb2cb33d, "hid_hw_start" },
	{ 0x8d97594e, "hid_open_report" },
	{ 0x1372a6ae, "power_supply_powers" },
	{ 0x29a373c2, "devm_power_supply_register" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0x677f83f1, "usb_hid_driver" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3b3f949b, "power_supply_get_drvdata" },
	{ 0x42ad8fea, "hid_hw_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb0e602eb, "memmove" },
	{ 0x69acdf38, "memcpy" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x64acaa9d, "hid_hw_raw_request" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "asus-wmi");

MODULE_ALIAS("hid:b0018g*v00000B05p00008585");
MODULE_ALIAS("hid:b0018g*v00000B05p00000101");
MODULE_ALIAS("hid:b0003g*v00000B05p00001854");
MODULE_ALIAS("hid:b0003g*v00000B05p00001837");
MODULE_ALIAS("hid:b0003g*v00000B05p00001822");
MODULE_ALIAS("hid:b0003g*v00000B05p00001869");
MODULE_ALIAS("hid:b0003g*v00000B05p00001866");
MODULE_ALIAS("hid:b0003g*v00000B05p000019B6");
MODULE_ALIAS("hid:b0003g*v00000B05p0000196B");
MODULE_ALIAS("hid:b0003g*v00000B05p000017E0");
MODULE_ALIAS("hid:b0003g*v00000B05p00001807");
MODULE_ALIAS("hid:b0003g*v000004F2p00001125");
MODULE_ALIAS("hid:b0003g*v0000062Ap00005110");
MODULE_ALIAS("hid:b0003g*v00000C45p00005112");
MODULE_ALIAS("hid:b0005g*v00000B05p00008502");
MODULE_ALIAS("hid:b0003g*v0000048Dp0000CE50");
MODULE_ALIAS("hid:b0003g0001v00000B05p0000183D");

MODULE_INFO(srcversion, "90BB2AB7C7AA247A949012D");
