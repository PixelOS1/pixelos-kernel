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
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0x7ce0d551, "gpiod_get_value_cansleep" },
	{ 0x8f048bb0, "input_mt_sync_frame" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0x331337dc, "input_event" },
	{ 0xc11cd501, "input_mt_get_slot_by_key" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34340150, "gpiod_set_value" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,crc-itu-t");

MODULE_ALIAS("i2c:sis_i2c_ts");
MODULE_ALIAS("i2c:9200-ts");

MODULE_INFO(srcversion, "3B2D05E1F6702E38ADFCB91");
