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
	{ 0xe283cb34, "simple_attr_release" },
	{ 0x4fddc9de, "simple_attr_write" },
	{ 0x4045cb0b, "simple_attr_read" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0x22749e72, "simple_open" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4edb97c5, "desc_to_gpio" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x7e51de59, "debugfs_create_u16" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x282d8810, "devm_device_add_group" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0x2fa42d74, "touchscreen_parse_properties" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x754d539c, "strlen" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x349cba85, "strchr" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x3db2e2e, "touchscreen_report_pos" },
	{ 0xc851d33a, "input_mt_report_pointer_emulation" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0x331337dc, "input_event" },
	{ 0x96848186, "scnprintf" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x89937627, "i2c_transfer" },
	{ 0x45db6081, "simple_attr_open" },
	{ 0x37a0cba, "kfree" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("of:N*T*Cedt,edt-ft5206");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5206C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506C*");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236C*");
MODULE_ALIAS("i2c:edt-ft5x06");
MODULE_ALIAS("i2c:edt-ft5506");
MODULE_ALIAS("i2c:ev-ft5726");
MODULE_ALIAS("i2c:ft6236");

MODULE_INFO(srcversion, "F9F579E52293F3F8CC4356A");
