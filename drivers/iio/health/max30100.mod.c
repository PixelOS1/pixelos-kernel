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
	{ 0x8af62e49, "_dev_err" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x7e30893c, "__iio_device_register" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1278ffd6, "devm_iio_kfifo_buffer_setup_ext" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0x731cb5d4, "i2c_smbus_read_i2c_block_data" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf7175300, "regmap_read" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x663bac70, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,industrialio,regmap-i2c,kfifo_buf");

MODULE_ALIAS("of:N*T*Cmaxim,max30100");
MODULE_ALIAS("of:N*T*Cmaxim,max30100C*");
MODULE_ALIAS("i2c:max30100");

MODULE_INFO(srcversion, "B977AA4AD381760722D34F7");
