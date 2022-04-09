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
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x331337dc, "input_event" },
	{ 0x81fefc83, "i2c_smbus_read_byte" },
	{ 0x40d50e2a, "devm_led_classdev_register_ext" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x401e43c5, "devm_regulator_bulk_get" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x55248fd5, "regulator_set_voltage" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x4d1153b, "i2c_smbus_write_byte" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("of:N*T*Ccypress,tm2-touchkey");
MODULE_ALIAS("of:N*T*Ccypress,tm2-touchkeyC*");
MODULE_ALIAS("of:N*T*Ccypress,midas-touchkey");
MODULE_ALIAS("of:N*T*Ccypress,midas-touchkeyC*");
MODULE_ALIAS("of:N*T*Ccypress,aries-touchkey");
MODULE_ALIAS("of:N*T*Ccypress,aries-touchkeyC*");
MODULE_ALIAS("of:N*T*Ccoreriver,tc360-touchkey");
MODULE_ALIAS("of:N*T*Ccoreriver,tc360-touchkeyC*");
MODULE_ALIAS("i2c:tm2-touchkey");

MODULE_INFO(srcversion, "5F8C9BE4D3A08C5E1FFFF20");
