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
	{ 0x6b9cd9e3, "i2c_acpi_new_device_by_fwnode" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0x81fefc83, "i2c_smbus_read_byte" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xb3624bb8, "__devm_iio_device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe9058da2, "i2c_smbus_read_word_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xee15abe8, "i2c_smbus_write_word_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,industrialio");

MODULE_ALIAS("acpi*:CPLM3218:*");
MODULE_ALIAS("of:N*T*Ccapella,cm3218");
MODULE_ALIAS("of:N*T*Ccapella,cm3218C*");
MODULE_ALIAS("of:N*T*Ccapella,cm32181");
MODULE_ALIAS("of:N*T*Ccapella,cm32181C*");

MODULE_INFO(srcversion, "0F82E791504205E1407ABF9");
