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
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x95a99855, "ieee802154_rx_irqsafe" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xa6257a2f, "complete" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xc26f8803, "debugfs_create_devm_seqfile" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0xfa1483a4, "ieee802154_register_hw" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x1564421, "request_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2ac5a4e0, "ieee802154_alloc_hw" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xd349d253, "seq_printf" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x43469f8e, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb7deb7c0, "ieee802154_free_hw" },
	{ 0x2a4dae5, "ieee802154_unregister_hw" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("spi:adf7242");
MODULE_ALIAS("spi:adf7241");
MODULE_ALIAS("of:N*T*Cadi,adf7242");
MODULE_ALIAS("of:N*T*Cadi,adf7242C*");
MODULE_ALIAS("of:N*T*Cadi,adf7241");
MODULE_ALIAS("of:N*T*Cadi,adf7241C*");

MODULE_INFO(srcversion, "279AD969DB5D1DB1B66637C");
