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
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x28b2ea29, "devm_gpiod_get" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0x2fa42d74, "touchscreen_parse_properties" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x794d1829, "input_device_enabled" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb670b8a1, "input_mt_assign_slots" },
	{ 0xc11cd501, "input_mt_get_slot_by_key" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7ce0d551, "gpiod_get_value_cansleep" },
	{ 0x8f048bb0, "input_mt_sync_frame" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0x331337dc, "input_event" },
	{ 0xcf9b558d, "touchscreen_set_mt_pos" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:pixcir_ts");
MODULE_ALIAS("i2c:pixcir_tangoc");

MODULE_INFO(srcversion, "7E282F0A09D52AD7793A6B7");
