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
	{ 0xb3153dca, "driver_unregister" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0x3f4fc704, "input_alloc_absinfo" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0x3ebd1582, "devm_gpiod_get_index" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x52345e6e, "spi_setup" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34340150, "gpiod_set_value" },
	{ 0x8f048bb0, "input_mt_sync_frame" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0xc11cd501, "input_mt_get_slot_by_key" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x331337dc, "input_event" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x43469f8e, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:MSHW0037:*");

MODULE_INFO(srcversion, "FDF548CCDA198E18586EB43");
