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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x229d0e87, "hid_unregister_driver" },
	{ 0x357c7c39, "__hid_register_driver" },
	{ 0x2af975fa, "device_create_file" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8c835330, "input_ff_create" },
	{ 0x89e4046, "devm_kfree" },
	{ 0x6626afca, "down" },
	{ 0xcf2a6966, "up" },
	{ 0xcb2cb33d, "hid_hw_start" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8d97594e, "hid_open_report" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0x1372a6ae, "power_supply_powers" },
	{ 0x29a373c2, "devm_power_supply_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x92f71b5a, "devm_kmemdup" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0x3f4fc704, "input_alloc_absinfo" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8b13a8b8, "hid_snto32" },
	{ 0xb0cc64d6, "hid_field_extract" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfc07b4af, "hid_report_raw_event" },
	{ 0x4d3468c, "power_supply_changed" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xc310b981, "strnstr" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0xc11cd501, "input_mt_get_slot_by_key" },
	{ 0x8f048bb0, "input_mt_sync_frame" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x96848186, "scnprintf" },
	{ 0x5a921311, "strncmp" },
	{ 0x3b3f949b, "power_supply_get_drvdata" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x64acaa9d, "hid_hw_raw_request" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x66d065e8, "hid_hw_output_report" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5495392, "hid_debug" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x29b7c46d, "hid_hw_close" },
	{ 0xa8b52982, "hid_hw_open" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x42ad8fea, "hid_hw_stop" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x331337dc, "input_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g0102v0000046Dp00004011");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004101");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B00C");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00001017");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004010");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004050");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004007");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000402D");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000101B");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000406D");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000405E");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000404A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004072");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B013");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B018");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B01F");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000406A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004041");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004060");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004071");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004069");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004082");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000101A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004024");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004002");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B305");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B309");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B30B");
MODULE_ALIAS("hid:b0003g0102v0000046Dp*");
MODULE_ALIAS("hid:b0003g0104v0000046Dp00000049");
MODULE_ALIAS("hid:b0003g0104v0000046Dp00000057");
MODULE_ALIAS("hid:b0003g0104v0000046Dp0000005C");
MODULE_ALIAS("hid:b0003g0104v0000046Dp000000FE");
MODULE_ALIAS("hid:b0003g0104v0000046Dp*");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C082");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C087");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C090");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C081");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C086");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C091");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C262");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C088");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B305");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B309");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B30B");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B008");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B012");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B01D");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B01E");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B023");

MODULE_INFO(srcversion, "C480F782BDEB42D9AC28E4D");
