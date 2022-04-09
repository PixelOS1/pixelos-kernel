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
	{ 0xe9eff1ff, "iio_trigger_notify_done" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0x6dc20e0b, "iio_get_time_ns" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x81f466c5, "device_property_present" },
	{ 0x7e30893c, "__iio_device_register" },
	{ 0x5eadaa5f, "iio_channel_cb_get_channels" },
	{ 0xd728b0d1, "iio_channel_get_all_cb" },
	{ 0x4bdcd3a6, "iio_triggered_buffer_setup_ext" },
	{ 0x8f6331cd, "__iio_trigger_register" },
	{ 0x1c652a17, "iio_trigger_set_immutable" },
	{ 0xac6d5a62, "iio_channel_cb_get_iio_dev" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc3434aab, "devm_iio_trigger_alloc" },
	{ 0xe1c64e92, "iio_device_id" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf9393856, "iio_convert_raw_to_processed" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xf25891ce, "iio_trigger_poll_chained" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xf7175300, "regmap_read" },
	{ 0xd0b1d381, "iio_read_channel_scale" },
	{ 0x26ada09d, "iio_read_channel_offset" },
	{ 0x7a711aef, "iio_channel_start_all_cb" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xf40f22e7, "iio_trigger_unregister" },
	{ 0x43fd6cca, "iio_triggered_buffer_cleanup" },
	{ 0x267c0508, "iio_channel_release_all_cb" },
	{ 0x663bac70, "iio_device_unregister" },
	{ 0x2a1fab3c, "iio_channel_stop_all_cb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,industrialio,industrialio-buffer-cb,industrialio-triggered-buffer,regmap-i2c");

MODULE_ALIAS("i2c:lmp91000");
MODULE_ALIAS("i2c:lmp91002");
MODULE_ALIAS("of:N*T*Cti,lmp91000");
MODULE_ALIAS("of:N*T*Cti,lmp91000C*");
MODULE_ALIAS("of:N*T*Cti,lmp91002");
MODULE_ALIAS("of:N*T*Cti,lmp91002C*");

MODULE_INFO(srcversion, "3F2A47A09E6F410FCF79DD8");
