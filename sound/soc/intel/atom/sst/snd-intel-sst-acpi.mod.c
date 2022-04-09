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
	{ 0xa9b2e59, "sst_context_init" },
	{ 0x754d539c, "strlen" },
	{ 0x475978f7, "sst_context_cleanup" },
	{ 0x28e09af1, "iosf_mbi_available" },
	{ 0x33519826, "sst_alloc_drv_context" },
	{ 0x802467c2, "snd_intel_acpi_dsp_driver_probe" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xf752e98c, "acpi_match_device" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x44ad1cf7, "intel_sst_pm" },
	{ 0x5d79da3d, "sst_configure_runtime_pm" },
	{ 0x83ff4c07, "snd_soc_acpi_find_machine" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8d37ad0a, "snd_soc_acpi_intel_cherrytrail_machines" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x16c1fc93, "snd_soc_acpi_intel_baytrail_machines" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xcea381dd, "x86_match_cpu" },
};

MODULE_INFO(depends, "snd-intel-sst-core,snd-intel-dspcfg,snd-soc-acpi,snd-soc-acpi-intel-match");

MODULE_ALIAS("acpi*:80860F28:*");
MODULE_ALIAS("acpi*:808622A8:*");

MODULE_INFO(srcversion, "CA48A998FFC0BA8E7984E40");
