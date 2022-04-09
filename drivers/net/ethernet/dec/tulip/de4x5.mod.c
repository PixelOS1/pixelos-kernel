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
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x133536b8, "register_netdev" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x754d539c, "strlen" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xa916b694, "strnlen" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x9166fada, "strncpy" },
	{ 0x85bd1608, "__request_region" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x69acdf38, "memcpy" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc23477d, "current_task" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x92997ed8, "_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xda59b65, "free_netdev" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D45A815B812C4E136BC8796");
