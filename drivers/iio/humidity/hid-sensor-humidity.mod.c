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
	{ 0x5ece5b52, "hid_sensor_pm_ops" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0x6dc20e0b, "iio_get_time_ns" },
	{ 0x7e30893c, "__iio_device_register" },
	{ 0xcd333a58, "sensor_hub_register_callback" },
	{ 0xd9c71c64, "hid_sensor_setup_trigger" },
	{ 0x7f7621ec, "hid_sensor_format_scale" },
	{ 0x54b1de42, "sensor_hub_input_get_attribute_info" },
	{ 0x92f71b5a, "devm_kmemdup" },
	{ 0xc4d3249d, "hid_sensor_parse_common_attributes" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0x8940209f, "sensor_hub_input_attr_get_raw_value" },
	{ 0x4f4e3979, "hid_sensor_power_state" },
	{ 0x410cd39c, "hid_sensor_read_samp_freq_value" },
	{ 0x276f76ca, "hid_sensor_read_raw_hyst_value" },
	{ 0x4c62f80a, "hid_sensor_write_raw_hyst_value" },
	{ 0x11142b47, "hid_sensor_write_samp_freq_value" },
	{ 0x5c4c65b5, "hid_sensor_remove_trigger" },
	{ 0x3c1195f6, "sensor_hub_remove_callback" },
	{ 0x663bac70, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid-sensor-trigger,industrialio,hid-sensor-hub,hid-sensor-iio-common");

MODULE_ALIAS("platform:HID-SENSOR-200032");

MODULE_INFO(srcversion, "A5E5D26A49F7F56106A5E6D");
