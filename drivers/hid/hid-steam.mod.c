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
	{ 0x2b6731c0, "param_get_bool" },
	{ 0x229d0e87, "hid_unregister_driver" },
	{ 0x357c7c39, "__hid_register_driver" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4d3468c, "power_supply_changed" },
	{ 0x331337dc, "input_event" },
	{ 0x4a9bfc75, "hid_input_report" },
	{ 0xc97c045, "param_set_bool" },
	{ 0x29b7c46d, "hid_hw_close" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0xc7e9ea04, "power_supply_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe04dd75c, "hid_destroy_device" },
	{ 0x42ad8fea, "hid_hw_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa8b52982, "hid_hw_open" },
	{ 0x90635166, "hid_add_device" },
	{ 0xcb2cb33d, "hid_hw_start" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x8a16e529, "hid_allocate_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x8d97594e, "hid_open_report" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1372a6ae, "power_supply_powers" },
	{ 0x18bc4049, "power_supply_register" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0x754d539c, "strlen" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3b3f949b, "power_supply_get_drvdata" },
	{ 0x92997ed8, "_printk" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x3f4fc704, "input_alloc_absinfo" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0x5495392, "hid_debug" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2d43c3f7, "hid_parse_report" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x374f7f59, "hid_alloc_report_buf" },
	{ 0x64acaa9d, "hid_hw_raw_request" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000028DEp00001102");
MODULE_ALIAS("hid:b0003g*v000028DEp00001142");

MODULE_INFO(srcversion, "57E2414564DC076E5519F0E");
