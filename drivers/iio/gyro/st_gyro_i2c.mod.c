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
	{ 0xfdde5d6f, "st_gyro_common_probe" },
	{ 0x9b2705be, "st_sensors_power_enable" },
	{ 0xab62a48b, "st_sensors_i2c_configure" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xff8d2953, "st_gyro_get_settings" },
	{ 0xe46facee, "st_sensors_dev_name_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,st_gyro,st_sensors,st_sensors_i2c,industrialio");

MODULE_ALIAS("i2c:l3g4200d");
MODULE_ALIAS("i2c:lsm330d_gyro");
MODULE_ALIAS("i2c:lsm330dl_gyro");
MODULE_ALIAS("i2c:lsm330dlc_gyro");
MODULE_ALIAS("i2c:l3gd20");
MODULE_ALIAS("i2c:l3gd20h");
MODULE_ALIAS("i2c:l3g4is_ui");
MODULE_ALIAS("i2c:lsm330_gyro");
MODULE_ALIAS("i2c:lsm9ds0_gyro");
MODULE_ALIAS("of:N*T*Cst,l3g4200d-gyro");
MODULE_ALIAS("of:N*T*Cst,l3g4200d-gyroC*");
MODULE_ALIAS("of:N*T*Cst,lsm330d-gyro");
MODULE_ALIAS("of:N*T*Cst,lsm330d-gyroC*");
MODULE_ALIAS("of:N*T*Cst,lsm330dl-gyro");
MODULE_ALIAS("of:N*T*Cst,lsm330dl-gyroC*");
MODULE_ALIAS("of:N*T*Cst,lsm330dlc-gyro");
MODULE_ALIAS("of:N*T*Cst,lsm330dlc-gyroC*");
MODULE_ALIAS("of:N*T*Cst,l3gd20-gyro");
MODULE_ALIAS("of:N*T*Cst,l3gd20-gyroC*");
MODULE_ALIAS("of:N*T*Cst,l3gd20h-gyro");
MODULE_ALIAS("of:N*T*Cst,l3gd20h-gyroC*");
MODULE_ALIAS("of:N*T*Cst,l3g4is-gyro");
MODULE_ALIAS("of:N*T*Cst,l3g4is-gyroC*");
MODULE_ALIAS("of:N*T*Cst,lsm330-gyro");
MODULE_ALIAS("of:N*T*Cst,lsm330-gyroC*");
MODULE_ALIAS("of:N*T*Cst,lsm9ds0-gyro");
MODULE_ALIAS("of:N*T*Cst,lsm9ds0-gyroC*");

MODULE_INFO(srcversion, "A500DD9B9720B0A10219AFB");
