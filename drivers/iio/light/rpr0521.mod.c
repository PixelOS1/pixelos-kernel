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
	{ 0x1a61affa, "regcache_mark_dirty" },
	{ 0x663bac70, "iio_device_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7fd076f, "regcache_sync" },
	{ 0xe9eff1ff, "iio_trigger_notify_done" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0xf25891ce, "iio_trigger_poll_chained" },
	{ 0x7c9a9799, "iio_device_release_direct_mode" },
	{ 0x72cb7ce4, "iio_device_claim_direct_mode" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4f58ba1, "regmap_raw_write" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x7e30893c, "__iio_device_register" },
	{ 0x2a31a433, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x50063258, "__devm_iio_trigger_register" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xc3434aab, "devm_iio_trigger_alloc" },
	{ 0xe1c64e92, "iio_device_id" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0xf7175300, "regmap_read" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x6dc20e0b, "iio_get_time_ns" },
	{ 0xdf3519be, "iio_trigger_using_own" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,i2c-core,industrialio-triggered-buffer,regmap-i2c");

MODULE_ALIAS("i2c:rpr0521");
MODULE_ALIAS("acpi*:RPR0521:*");

MODULE_INFO(srcversion, "F6A16FE31796DDB16539E8C");
