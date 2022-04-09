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
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x164fb66d, "p54_rx" },
	{ 0x24e48d13, "skb_put" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x9416299, "p54_register_common" },
	{ 0x589ddb3f, "p54_read_eeprom" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x21752e, "device_release_driver" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xfa13c188, "p54_parse_firmware" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0x868319dd, "request_firmware_nowait" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xde80cd09, "ioremap" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x96d16f8c, "p54_init_common" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0x69bb525b, "pci_try_set_mwi" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xe2e1d20f, "pci_dev_get" },
	{ 0xa6257a2f, "complete" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xeb9e7a29, "p54_free_skb" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x52aef963, "p54_free_common" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xe2a4f9f7, "p54_unregister_common" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x71807b5, "pci_reenable_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "p54common");

MODULE_ALIAS("pci:v00001260d00003890sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d00003877sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d00003886sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d0000FFFFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E3AE04DAC6AF4A7A7C75CB4");
