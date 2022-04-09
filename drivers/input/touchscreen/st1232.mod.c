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
	{ 0xa8cce3e5, "dev_pm_qos_add_ancestor_request" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0xcf9b558d, "touchscreen_set_mt_pos" },
	{ 0xbcf00a6b, "dev_pm_qos_remove_request" },
	{ 0x331337dc, "input_event" },
	{ 0x8f048bb0, "input_mt_sync_frame" },
	{ 0xb670b8a1, "input_mt_assign_slots" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0x2fa42d74, "touchscreen_parse_properties" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0x89937627, "i2c_transfer" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("of:N*T*Csitronix,st1232");
MODULE_ALIAS("of:N*T*Csitronix,st1232C*");
MODULE_ALIAS("of:N*T*Csitronix,st1633");
MODULE_ALIAS("of:N*T*Csitronix,st1633C*");
MODULE_ALIAS("i2c:st1232-ts");
MODULE_ALIAS("i2c:st1633-ts");

MODULE_INFO(srcversion, "C5484EC7B7EDFC288B13FC2");
