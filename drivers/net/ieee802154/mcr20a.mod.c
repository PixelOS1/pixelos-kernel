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
	{ 0xb3153dca, "driver_unregister" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0xf7175300, "regmap_read" },
	{ 0x75ff8ef3, "regmap_multi_reg_write" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6f26a144, "_dev_crit" },
	{ 0xfa1483a4, "ieee802154_register_hw" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x234598a5, "__devm_regmap_init_spi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2ac5a4e0, "ieee802154_alloc_hw" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x28b2ea29, "devm_gpiod_get" },
	{ 0xa3045246, "ieee802154_xmit_complete" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x95a99855, "ieee802154_rx_irqsafe" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb1b6121c, "spi_async" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb7deb7c0, "ieee802154_free_hw" },
	{ 0x2a4dae5, "ieee802154_unregister_hw" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154,regmap-spi");

MODULE_ALIAS("spi:mcr20a");
MODULE_ALIAS("of:N*T*Cnxp,mcr20a");
MODULE_ALIAS("of:N*T*Cnxp,mcr20aC*");

MODULE_INFO(srcversion, "79D76C082632557BE7BBBD1");
