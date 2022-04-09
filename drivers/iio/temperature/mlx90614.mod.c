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
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x7e30893c, "__iio_device_register" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x663bac70, "iio_device_unregister" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8df14a40, "i2c_smbus_xfer" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xe9058da2, "i2c_smbus_read_word_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf2247574, "gpiod_direction_input" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf9cd2564, "gpiod_direction_output" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,i2c-core");

MODULE_ALIAS("of:N*T*Cmelexis,mlx90614");
MODULE_ALIAS("of:N*T*Cmelexis,mlx90614C*");
MODULE_ALIAS("i2c:mlx90614");

MODULE_INFO(srcversion, "C945C0D55FE722988F6C9CA");
