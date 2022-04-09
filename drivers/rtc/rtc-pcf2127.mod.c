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
	{ 0x65f465d, "i2c_del_driver" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x30e7fdd6, "rtc_update_irq" },
	{ 0xaa10ea97, "__devm_regmap_init" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x9d27181c, "spi_get_device_id" },
	{ 0x234598a5, "__devm_regmap_init_spi" },
	{ 0x8c3f37f9, "devm_rtc_nvmem_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0xac1e1dd9, "devm_watchdog_register_device" },
	{ 0xa01d5cf6, "__devm_rtc_register_device" },
	{ 0x65cc7b69, "rtc_add_group" },
	{ 0x81f466c5, "device_property_present" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x76af4d48, "devm_rtc_allocate_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xf7175300, "regmap_read" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x185d6da3, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-spi");

MODULE_ALIAS("spi:pcf2127");
MODULE_ALIAS("spi:pcf2129");
MODULE_ALIAS("spi:pca2129");
MODULE_ALIAS("i2c:pcf2127");
MODULE_ALIAS("i2c:pcf2129");
MODULE_ALIAS("i2c:pca2129");

MODULE_INFO(srcversion, "94C212B927D1DCCC2CE3125");
