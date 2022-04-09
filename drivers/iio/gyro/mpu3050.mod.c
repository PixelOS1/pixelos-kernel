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
	{ 0x43fd6cca, "iio_triggered_buffer_cleanup" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x4a5a0dd5, "pm_runtime_force_suspend" },
	{ 0xfbd84ed6, "i2c_mux_add_adapter" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x926f4dc7, "iio_read_const_attr" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0xe9eff1ff, "iio_trigger_notify_done" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x129da2cf, "i2c_mux_del_adapters" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0xa4cd87c0, "pm_runtime_force_resume" },
	{ 0x4bdcd3a6, "iio_triggered_buffer_setup_ext" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x185d6da3, "regmap_bulk_write" },
	{ 0xf7175300, "regmap_read" },
	{ 0x663bac70, "iio_device_unregister" },
	{ 0x6dc20e0b, "iio_get_time_ns" },
	{ 0x401e43c5, "devm_regulator_bulk_get" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0xf25891ce, "iio_trigger_poll_chained" },
	{ 0xc3434aab, "devm_iio_trigger_alloc" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xc618b354, "i2c_mux_alloc" },
	{ 0x253f7f3c, "iio_read_mount_matrix" },
	{ 0x8f6331cd, "__iio_trigger_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdf3519be, "iio_trigger_using_own" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7e30893c, "__iio_device_register" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x980b983d, "iio_show_mount_matrix" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0x2fb6de5d, "add_device_randomness" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xcc78c58f, "iio_push_to_buffers_with_ts_unaligned" },
	{ 0xe1c64e92, "iio_device_id" },
	{ 0x16e6d67f, "get_device" },
	{ 0x96d01fb1, "__module_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,i2c-mux,industrialio,i2c-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cinvensense,mpu3050");
MODULE_ALIAS("of:N*T*Cinvensense,mpu3050C*");
MODULE_ALIAS("of:N*T*Cinvn,mpu3050");
MODULE_ALIAS("of:N*T*Cinvn,mpu3050C*");
MODULE_ALIAS("i2c:mpu3050");

MODULE_INFO(srcversion, "4A881E770184ECFC629F9CF");
