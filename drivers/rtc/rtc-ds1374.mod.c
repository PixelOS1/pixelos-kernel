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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x731cb5d4, "i2c_smbus_read_i2c_block_data" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xac1e1dd9, "devm_watchdog_register_device" },
	{ 0x2cc3d8f8, "watchdog_init_timeout" },
	{ 0xa01d5cf6, "__devm_rtc_register_device" },
	{ 0x8e0ecc69, "device_set_wakeup_capable" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x76af4d48, "devm_rtc_allocate_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xef2f45f3, "i2c_smbus_write_i2c_block_data" },
	{ 0x30e7fdd6, "rtc_update_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xcbb3c845, "devm_free_irq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:ds1374");

MODULE_INFO(srcversion, "DF51EFB2D2DD8B4C0A02131");
