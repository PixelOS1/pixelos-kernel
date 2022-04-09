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
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x229d0e87, "hid_unregister_driver" },
	{ 0x357c7c39, "__hid_register_driver" },
	{ 0x5495392, "hid_debug" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x2af975fa, "device_create_file" },
	{ 0x40d50e2a, "devm_led_classdev_register_ext" },
	{ 0x754d539c, "strlen" },
	{ 0x68e12d35, "hid_validate_values" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1ccb388b, "input_ff_create_memless" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0xa8b52982, "hid_hw_open" },
	{ 0x1372a6ae, "power_supply_powers" },
	{ 0x29a373c2, "devm_power_supply_register" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xeefcded2, "hid_hw_request" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xffb7c514, "ida_free" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x29b7c46d, "hid_hw_close" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0x8f048bb0, "input_mt_sync_frame" },
	{ 0x331337dc, "input_event" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0x42ad8fea, "hid_hw_stop" },
	{ 0x677f83f1, "usb_hid_driver" },
	{ 0xcb2cb33d, "hid_hw_start" },
	{ 0x8d97594e, "hid_open_report" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3b3f949b, "power_supply_get_drvdata" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x3f4fc704, "input_alloc_absinfo" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xa916b694, "strnlen" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x66d065e8, "hid_hw_output_report" },
	{ 0x37a0cba, "kfree" },
	{ 0x64acaa9d, "hid_hw_raw_request" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0005g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0003g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000024B");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000374");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000002");
MODULE_ALIAS("hid:b0003g*v0000054Cp00001000");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000306");
MODULE_ALIAS("hid:b0005g*v0000046Dp00000306");
MODULE_ALIAS("hid:b0005g*v00000609p00000306");
MODULE_ALIAS("hid:b0003g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0005g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0003g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0005g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000BA0");
MODULE_ALIAS("hid:b0003g*v00001345p00003008");
MODULE_ALIAS("hid:b0005g*v00000609p00000368");
MODULE_ALIAS("hid:b0005g*v00000609p00000369");
MODULE_ALIAS("hid:b0003g*v000012BAp0000074B");
MODULE_ALIAS("hid:b0003g*v00001430p0000474C");
MODULE_ALIAS("hid:b0003g*v000012BAp00000100");
MODULE_ALIAS("hid:b0003g*v00001430p000007BB");

MODULE_INFO(srcversion, "322E25A2FB645C1FA5FBB32");
