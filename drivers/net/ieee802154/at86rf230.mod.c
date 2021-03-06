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
	{ 0x40a4c25b, "_dev_info" },
	{ 0xfa1483a4, "ieee802154_register_hw" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xe6a3ee26, "gpiod_set_raw_value_cansleep" },
	{ 0x3cfdcf52, "devm_gpio_request_one" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x234598a5, "__devm_regmap_init_spi" },
	{ 0x2ac5a4e0, "ieee802154_alloc_hw" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xf7175300, "regmap_read" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb7deb7c0, "ieee802154_free_hw" },
	{ 0x2a4dae5, "ieee802154_unregister_hw" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x95a99855, "ieee802154_rx_irqsafe" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6b4a11f, "gpiod_set_raw_value" },
	{ 0x88786b87, "gpio_to_desc" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb1b6121c, "spi_async" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xa6257a2f, "complete" },
	{ 0x27f08063, "ieee802154_wake_queue" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x37a0cba, "kfree" },
	{ 0xa3045246, "ieee802154_xmit_complete" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154,regmap-spi");

MODULE_ALIAS("spi:at86rf230");
MODULE_ALIAS("spi:at86rf231");
MODULE_ALIAS("spi:at86rf233");
MODULE_ALIAS("spi:at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf230");
MODULE_ALIAS("of:N*T*Catmel,at86rf230C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf231");
MODULE_ALIAS("of:N*T*Catmel,at86rf231C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf233");
MODULE_ALIAS("of:N*T*Catmel,at86rf233C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf212C*");

MODULE_INFO(srcversion, "0EC75018B40662F48ADF739");
