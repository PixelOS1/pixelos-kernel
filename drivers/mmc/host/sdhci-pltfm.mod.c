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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x563e6058, "sdhci_remove_host" },
	{ 0x815588a6, "clk_enable" },
	{ 0x49c275bb, "sdhci_alloc_host" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x20640143, "sdhci_resume_host" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x34efeb51, "sdhci_add_host" },
	{ 0xbd6f4cba, "sdhci_free_host" },
	{ 0x64e8a26e, "sdhci_set_clock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x283c133d, "sdhci_suspend_host" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfccc7067, "sdhci_reset" },
	{ 0xbecdd87c, "sdhci_set_uhs_signaling" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0xe4ec892b, "devm_platform_ioremap_resource" },
	{ 0x45456ef2, "sdhci_set_bus_width" },
	{ 0x81f466c5, "device_property_present" },
};

MODULE_INFO(depends, "sdhci");


MODULE_INFO(srcversion, "E93A123B4BA07DC2F6C5FEC");
