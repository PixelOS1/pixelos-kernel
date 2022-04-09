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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x69acdf38, "memcpy" },
	{ 0x60158612, "ieee80211_beacon_get_tim" },
	{ 0xc50f2e3b, "ieee80211_find_sta" },
	{ 0x21752e, "device_release_driver" },
	{ 0x60041f8f, "ieee80211_register_hw" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x8f60f032, "ieee80211_restart_hw" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x65a526db, "ieee80211_start_tx_ba_session" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8e2c1520, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7b076afe, "ieee80211_stop_tx_ba_session" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x5dac2d51, "ieee80211_alloc_hw_nm" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x308add0e, "ieee80211_free_hw" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x9d94b04a, "ieee80211_unregister_hw" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x1564421, "request_firmware" },
	{ 0x591c0306, "_dev_notice" },
	{ 0xa7fc11d6, "ieee80211_wake_queues" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x14feedc1, "ieee80211_stop_queues" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc23477d, "current_task" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x307eaf37, "skb_copy" },
	{ 0x6807038e, "ieee80211_rx_irqsafe" },
	{ 0x24e48d13, "skb_put" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xaa7ab137, "ieee80211_find_sta_by_ifaddr" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xdedd0f83, "ieee80211_tx_status_irqsafe" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x32e84752, "ieee80211_queue_work" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xa6257a2f, "complete" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x868319dd, "request_firmware_nowait" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x92997ed8, "_printk" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xb0e602eb, "memmove" },
	{ 0x459f3f88, "skb_push" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("pci:v000011ABd00002A0Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B36sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E23BC6197BA461D7E53C177");
