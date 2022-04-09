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
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5012a70, "pv_ops" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0x1564421, "request_firmware" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x133536b8, "register_netdev" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xde80cd09, "ioremap" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x754d539c, "strlen" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92997ed8, "_printk" },
	{ 0x999e8297, "vfree" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xda59b65, "free_netdev" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001FC9d00003009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00003010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00003014sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1F67916712CB219030FBD49");
