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
	{ 0x9f13fd41, "ieee80211_rts_duration" },
	{ 0x884deb9d, "eeprom_93cx6_read" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6807038e, "ieee80211_rx_irqsafe" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x60158612, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9d94b04a, "ieee80211_unregister_hw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x419d6dcb, "ieee80211_stop_queue" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xb19b445, "ioread8" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5dac2d51, "ieee80211_alloc_hw_nm" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdedd0f83, "ieee80211_tx_status_irqsafe" },
	{ 0x848d372e, "iowrite8" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9381a653, "ieee80211_wake_queue" },
	{ 0xfc699255, "ieee80211_generic_frame_duration" },
	{ 0x69bb525b, "pci_try_set_mwi" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2c9ff847, "ieee80211_ctstoself_duration" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x60041f8f, "ieee80211_register_hw" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x308add0e, "ieee80211_free_hw" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x410ecd91, "ieee80211_queue_stopped" },
};

MODULE_INFO(depends, "mac80211,eeprom_93cx6,cfg80211");

MODULE_ALIAS("pci:v000010ECd00008199sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008185sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001799d0000700Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001799d0000701Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001799d00006001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001799d00006020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00003300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00003301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007106sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E3518623D5D303B44AC1C1D");
