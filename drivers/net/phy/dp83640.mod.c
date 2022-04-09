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
	{ 0xee111615, "param_ops_int" },
	{ 0xcd9dd851, "param_ops_ushort" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x42dc26a1, "phy_driver_unregister" },
	{ 0x761527a1, "put_device" },
	{ 0x78756bd5, "phy_driver_register" },
	{ 0x5f0cf6d6, "ptp_find_pin" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x58211d6c, "ptp_find_pin_unlocked" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xfd03a232, "ptp_clock_unregister" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfcda5886, "dev_mc_del" },
	{ 0xe0bec3ba, "dev_mc_add" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd6611206, "skb_complete_tx_timestamp" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x4836c822, "ptp_clock_event" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x92997ed8, "_printk" },
	{ 0x16e6d67f, "get_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0d40089, "ptp_clock_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xd906d82c, "ptp_parse_header" },
	{ 0xff80ab3, "skb_queue_head" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xe1c1701c, "netif_rx_ni" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfec4b87c, "genphy_soft_reset" },
	{ 0x6e4b27d0, "ptp_clock_index" },
	{ 0xf881344d, "mdiobus_write" },
	{ 0x61495404, "phy_error" },
	{ 0x817f296c, "phy_trigger_machine" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:0010000000000000010111001110????");

MODULE_INFO(srcversion, "02F7A5A9F2E9E562FA74212");
