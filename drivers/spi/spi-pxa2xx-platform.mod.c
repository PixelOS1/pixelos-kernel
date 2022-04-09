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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x73c98c2d, "pci_bus_type" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x815588a6, "clk_enable" },
	{ 0xcb7c3a7c, "spi_register_controller" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x8adca48b, "pci_match_id" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x88786b87, "gpio_to_desc" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xee09ed35, "devm_ioremap_resource" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xbd697861, "dma_request_chan" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x93a5681b, "spi_unregister_controller" },
	{ 0x2baf8a18, "__devm_spi_alloc_controller" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0xbed205fd, "gpiod_direction_output_raw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x7290df4d, "device_set_node" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe885dd47, "__dma_request_channel" },
	{ 0x99261972, "devm_clk_get" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xc6ea82a0, "spi_finalize_current_transfer" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xfe990052, "gpio_free" },
	{ 0xba497f13, "loops_per_jiffy" },
	{ 0xc785f106, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0xb1c5ad9b, "spi_controller_suspend" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x62376aca, "spi_controller_resume" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x81f466c5, "device_property_present" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT33C0:*");
MODULE_ALIAS("acpi*:INT33C1:*");
MODULE_ALIAS("acpi*:INT3430:*");
MODULE_ALIAS("acpi*:INT3431:*");
MODULE_ALIAS("acpi*:80860F0E:*");
MODULE_ALIAS("acpi*:8086228E:*");
MODULE_ALIAS("of:N*T*Cmarvell,mmp2-ssp");
MODULE_ALIAS("of:N*T*Cmarvell,mmp2-sspC*");

MODULE_INFO(srcversion, "8839E524B1E04A061626549");
