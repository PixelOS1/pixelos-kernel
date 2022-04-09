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
	{ 0x2bce9694, "iio_validate_scan_mask_onehot" },
	{ 0x926f4dc7, "iio_read_const_attr" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xe9eff1ff, "iio_trigger_notify_done" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x7c9a9799, "iio_device_release_direct_mode" },
	{ 0x72cb7ce4, "iio_device_claim_direct_mode" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x9bccda18, "regmap_get_device" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x7e30893c, "__iio_device_register" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x2a31a433, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0x485b0aa5, "fwnode_property_read_u32_array" },
	{ 0x3024ba4b, "device_get_next_child_node" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x66c0d752, "iio_push_event" },
	{ 0x6dc20e0b, "iio_get_time_ns" },
	{ 0xf7175300, "regmap_read" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x663bac70, "iio_device_unregister" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,i2c-core,industrialio-triggered-buffer,regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,ads1015");
MODULE_ALIAS("of:N*T*Cti,ads1015C*");
MODULE_ALIAS("of:N*T*Cti,ads1115");
MODULE_ALIAS("of:N*T*Cti,ads1115C*");
MODULE_ALIAS("i2c:ads1015");
MODULE_ALIAS("i2c:ads1115");

MODULE_INFO(srcversion, "A31BFA548610D7A13230A09");
