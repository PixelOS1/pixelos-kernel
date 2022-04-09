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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x32e84752, "ieee80211_queue_work" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0xba55d23e, "crc7_be" },
	{ 0xbbbf1fc4, "wl1251_free_hw" },
	{ 0x88786b87, "gpio_to_desc" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0x52345e6e, "spi_setup" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x3cfdcf52, "devm_gpio_request_one" },
	{ 0x43469f8e, "spi_sync" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x92997ed8, "_printk" },
	{ 0x152e4f7d, "wl1251_init_ieee80211" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xa6b4a11f, "gpiod_set_raw_value" },
	{ 0x308add0e, "ieee80211_free_hw" },
	{ 0xa1e74801, "wl1251_alloc_hw" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xeff1f3dc, "regulator_enable" },
};

MODULE_INFO(depends, "mac80211,crc7,wl1251");


MODULE_INFO(srcversion, "632E0963575CF2F056B4CC4");
