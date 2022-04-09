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
	{ 0x926f4dc7, "iio_read_const_attr" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x7e30893c, "__iio_device_register" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xf7175300, "regmap_read" },
	{ 0x7780d985, "devm_regmap_field_alloc" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0x663bac70, "iio_device_unregister" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0x185d6da3, "regmap_bulk_write" },
	{ 0x6dc20e0b, "iio_get_time_ns" },
	{ 0x66c0d752, "iio_push_event" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6288d382, "regmap_field_read" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd7c8507, "regmap_field_update_bits_base" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,i2c-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Csensortek,stk3310");
MODULE_ALIAS("of:N*T*Csensortek,stk3310C*");
MODULE_ALIAS("of:N*T*Csensortek,stk3311");
MODULE_ALIAS("of:N*T*Csensortek,stk3311C*");
MODULE_ALIAS("of:N*T*Csensortek,stk3335");
MODULE_ALIAS("of:N*T*Csensortek,stk3335C*");
MODULE_ALIAS("acpi*:STK3310:*");
MODULE_ALIAS("acpi*:STK3311:*");
MODULE_ALIAS("acpi*:STK3335:*");
MODULE_ALIAS("i2c:STK3310");
MODULE_ALIAS("i2c:STK3311");
MODULE_ALIAS("i2c:STK3335");

MODULE_INFO(srcversion, "F323D00B69F92758C4AA1EA");
