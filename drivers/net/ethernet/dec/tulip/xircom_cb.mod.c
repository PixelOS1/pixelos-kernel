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
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xb19b445, "ioread8" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x84dcf661, "netdev_info" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x133536b8, "register_netdev" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xda59b65, "free_netdev" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000115Dd00000003sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B4E542913A72CD9CDB96660");
