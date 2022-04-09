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
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x27f08063, "ieee802154_wake_queue" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xa3045246, "ieee802154_xmit_complete" },
	{ 0x95a99855, "ieee802154_rx_irqsafe" },
	{ 0x24e48d13, "skb_put" },
	{ 0xeed42f1c, "ieee802154_hdr_push" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xfa1483a4, "ieee802154_register_hw" },
	{ 0x5d5f5d8e, "clk_register_fixed_rate" },
	{ 0xa6b4a11f, "gpiod_set_raw_value" },
	{ 0xf9a482f9, "msleep" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfe990052, "gpio_free" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0xbed205fd, "gpiod_direction_output_raw" },
	{ 0x88786b87, "gpio_to_desc" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x2ac5a4e0, "ieee802154_alloc_hw" },
	{ 0xd4d1fb8d, "ieee802154_hdr_peek_addrs" },
	{ 0xb7deb7c0, "ieee802154_free_hw" },
	{ 0x2a4dae5, "ieee802154_unregister_hw" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7757b51a, "clk_unregister" },
	{ 0xa6257a2f, "complete" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x92997ed8, "_printk" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb1b6121c, "spi_async" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6f26a144, "_dev_crit" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154,ieee802154");

MODULE_ALIAS("of:N*T*Ccascoda,ca8210");
MODULE_ALIAS("of:N*T*Ccascoda,ca8210C*");

MODULE_INFO(srcversion, "9C7CD36CC5F19F24FE594F3");
