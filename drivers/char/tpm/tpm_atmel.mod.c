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
	{ 0xd8af4033, "tpm_pm_resume" },
	{ 0xf2adc910, "tpm_pm_suspend" },
	{ 0x53bb6402, "tpm_chip_unregister" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x93bda9b5, "tpm_chip_register" },
	{ 0xd33cc6bb, "tpmm_chip_alloc" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x848d372e, "iowrite8" },
	{ 0xb19b445, "ioread8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3F8675DE5C8DC1D454B7929");
