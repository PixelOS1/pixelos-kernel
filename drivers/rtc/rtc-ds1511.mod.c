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
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x8c3f37f9, "devm_rtc_nvmem_register" },
	{ 0xa01d5cf6, "__devm_rtc_register_device" },
	{ 0x76af4d48, "devm_rtc_allocate_device" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0xe4ec892b, "devm_platform_ioremap_resource" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x6971447a, "rtc_month_days" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x30e7fdd6, "rtc_update_irq" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "823AB59251F5714840E9ACF");
