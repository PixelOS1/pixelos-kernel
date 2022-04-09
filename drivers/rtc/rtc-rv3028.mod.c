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
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xfb8ca534, "devm_clk_register" },
	{ 0x8c3f37f9, "devm_rtc_nvmem_register" },
	{ 0xa01d5cf6, "__devm_rtc_register_device" },
	{ 0x65cc7b69, "rtc_add_group" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x76af4d48, "devm_rtc_allocate_device" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xbc556315, "sysfs_notify" },
	{ 0x30e7fdd6, "rtc_update_irq" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0x185d6da3, "regmap_bulk_write" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf7175300, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3028");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3028C*");

MODULE_INFO(srcversion, "AB542D368BA99FCC20AF07F");
