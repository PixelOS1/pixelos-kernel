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
	{ 0x49d74de6, "acpi_bus_unregister_driver" },
	{ 0xafe29401, "acpi_bus_register_driver" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x426452a3, "acpi_evaluation_failure_warn" },
	{ 0x6dc20e0b, "iio_get_time_ns" },
	{ 0xe9eff1ff, "iio_trigger_notify_done" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf25891ce, "iio_trigger_poll_chained" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xdf3519be, "iio_trigger_using_own" },
	{ 0xb3624bb8, "__devm_iio_device_register" },
	{ 0x2a31a433, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x16e6d67f, "get_device" },
	{ 0x50063258, "__devm_iio_trigger_register" },
	{ 0xc3434aab, "devm_iio_trigger_alloc" },
	{ 0xe1c64e92, "iio_device_id" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("acpi*:ACPI0008:*");

MODULE_INFO(srcversion, "4496420673BD3EE98F75E78");
