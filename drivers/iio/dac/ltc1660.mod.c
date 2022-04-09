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
	{ 0xb3153dca, "driver_unregister" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0x32cfe081, "dev_err_probe" },
	{ 0x7e30893c, "__iio_device_register" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0x234598a5, "__devm_regmap_init_spi" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0x9d27181c, "spi_get_device_id" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xe4bd0d8d, "regulator_get_voltage" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x663bac70, "iio_device_unregister" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,regmap-spi");

MODULE_ALIAS("spi:ltc1660");
MODULE_ALIAS("spi:ltc1665");
MODULE_ALIAS("of:N*T*Clltc,ltc1660");
MODULE_ALIAS("of:N*T*Clltc,ltc1660C*");
MODULE_ALIAS("of:N*T*Clltc,ltc1665");
MODULE_ALIAS("of:N*T*Clltc,ltc1665C*");

MODULE_INFO(srcversion, "B36ED0A0BFD98C66F709CF7");
