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
	{ 0xc39aed23, "dev_pm_set_wake_irq" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xa01d5cf6, "__devm_rtc_register_device" },
	{ 0xfb8ca534, "devm_clk_register" },
	{ 0x8c3f37f9, "devm_rtc_nvmem_register" },
	{ 0x76af4d48, "devm_rtc_allocate_device" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xc85cb619, "i2c_match_id" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x30e7fdd6, "rtc_update_irq" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0x185d6da3, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf7175300, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-i2c");

MODULE_ALIAS("i2c:pcf85063");
MODULE_ALIAS("i2c:pcf85063tp");
MODULE_ALIAS("i2c:pcf85063a");
MODULE_ALIAS("i2c:rv8263");

MODULE_INFO(srcversion, "41AFE9D05D0790C88297445");
