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
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7549c36, "driver_register" },
	{ 0xa4a355ca, "fw_send_request" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x3ff92c06, "fw_bus_type" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x93d4aa26, "fw_iso_context_start" },
	{ 0xf62b47d, "fw_iso_context_queue_flush" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xb24f9613, "netif_rx" },
	{ 0x7cc4a5d, "printk_timed_ratelimit" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3a771e39, "fw_core_add_descriptor" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xda59b65, "free_netdev" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x133536b8, "register_netdev" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x7d18b4af, "fw_iso_buffer_destroy" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x289445f2, "fw_iso_context_queue" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xd4f4bf56, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x589aa2ed, "fw_iso_context_stop" },
	{ 0xda6af6f7, "fw_core_remove_address_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0x82fde540, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xb9610d34, "fw_iso_buffer_init" },
	{ 0x24e48d13, "skb_put" },
	{ 0xaedf84ce, "fw_high_memory_region" },
	{ 0x6b2a837a, "fw_iso_context_destroy" },
	{ 0x30412b2, "fw_send_response" },
	{ 0xbc6094c, "fw_core_remove_descriptor" },
};

MODULE_INFO(depends, "firewire-core");

MODULE_ALIAS("ieee1394:ven*mo*sp0000005Ever00000001*");
MODULE_ALIAS("ieee1394:ven*mo*sp0000005Ever00000002*");

MODULE_INFO(srcversion, "9ED900BB7D14221EEFD25D2");
