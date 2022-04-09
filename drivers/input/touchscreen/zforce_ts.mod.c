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
	{ 0x3ebd1582, "devm_gpiod_get_index" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x8e0ecc69, "device_set_wakeup_capable" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0x68462f0f, "devm_regulator_get_optional" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x794d1829, "input_device_enabled" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5aff3b28, "pm_stay_awake" },
	{ 0x2365d364, "pm_relax" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7ce0d551, "gpiod_get_value_cansleep" },
	{ 0xdf35db69, "input_mt_report_finger_count" },
	{ 0x8f048bb0, "input_mt_sync_frame" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0x331337dc, "input_event" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0xa6257a2f, "complete" },
	{ 0xb7214e95, "pm_wakeup_dev_event" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:zforce-ts");

MODULE_INFO(srcversion, "F10981AD1195B6697304BDD");
