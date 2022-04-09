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
	{ 0x9b02585d, "single_release" },
	{ 0x94216657, "seq_read" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x229d0e87, "hid_unregister_driver" },
	{ 0x357c7c39, "__hid_register_driver" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x96848186, "scnprintf" },
	{ 0xc1e2234, "hwmon_device_register_with_info" },
	{ 0xcf2a6966, "up" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa8b52982, "hid_hw_open" },
	{ 0xcb2cb33d, "hid_hw_start" },
	{ 0x8d97594e, "hid_open_report" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x66d065e8, "hid_hw_output_report" },
	{ 0xd349d253, "seq_printf" },
	{ 0xe4345174, "single_open" },
	{ 0x42ad8fea, "hid_hw_stop" },
	{ 0x29b7c46d, "hid_hw_close" },
	{ 0xe734c844, "hwmon_device_unregister" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xa6257a2f, "complete" },
	{ 0xddf6ad7a, "completion_done" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00001B1Cp00001C03");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001C04");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001C05");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001C06");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001C07");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001C08");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001C09");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001C0A");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001C0B");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001C0C");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001C0D");

MODULE_INFO(srcversion, "0E2B98E9043C5C2049D1A6A");
