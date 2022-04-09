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
	{ 0xee111615, "param_ops_int" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xbf08c671, "devm_thermal_of_cooling_device_register" },
	{ 0xfbf394b, "devm_hwmon_device_register_with_info" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0xc85cb619, "i2c_match_id" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:max6650");
MODULE_ALIAS("i2c:max6651");
MODULE_ALIAS("of:N*T*Cmaxim,max6650");
MODULE_ALIAS("of:N*T*Cmaxim,max6650C*");
MODULE_ALIAS("of:N*T*Cmaxim,max6651");
MODULE_ALIAS("of:N*T*Cmaxim,max6651C*");

MODULE_INFO(srcversion, "00F05066B2D9DC2D34D8C2D");
