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
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x133536b8, "register_netdev" },
	{ 0xfb578fc5, "memset" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x1564421, "request_firmware" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xde80cd09, "ioremap" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x5012a70, "pv_ops" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x754d539c, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x92997ed8, "_printk" },
	{ 0xda59b65, "free_netdev" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000012AEd00000001sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000012AEd00000002sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000010B7d00000001sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001385d0000620Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001385d0000630Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001011d0000001Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000012AEd000000FAsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000010A9d00000009sv*sd*bc02sc00i*");

MODULE_INFO(srcversion, "F743E0B00F19C0353132C48");
