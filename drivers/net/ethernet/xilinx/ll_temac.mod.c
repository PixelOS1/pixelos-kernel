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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x492698f8, "ethtool_op_get_ts_info" },
	{ 0xd0ece629, "phy_disconnect" },
	{ 0xd0bb7cfa, "skb_clone_tx_timestamp" },
	{ 0x6d1b375f, "phy_do_ioctl_running" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x1ef12e52, "__mdiobus_register" },
	{ 0x5d34fc48, "phy_ethtool_nway_reset" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc38e7269, "mdiobus_unregister" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6d389c68, "devm_mdiobus_alloc_size" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xb24f9613, "netif_rx" },
	{ 0x9eb69b23, "phy_print_status" },
	{ 0xe68515da, "devm_platform_ioremap_resource_byname" },
	{ 0x9bb4e317, "ioread32be" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xcc2400bd, "phy_start" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x133536b8, "register_netdev" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1d97d600, "devm_alloc_etherdev_mqs" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x88f15d51, "phy_ethtool_get_link_ksettings" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x4b35e781, "skb_defer_rx_timestamp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xe8bbaf9d, "phy_ethtool_set_link_ksettings" },
	{ 0x3d07ff5f, "phy_connect" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa64a5b60, "skb_tstamp_tx" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xe4ec892b, "devm_platform_ioremap_resource" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "libphy,mdio_devres");

MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-1.01.b");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-1.01.bC*");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.00.a");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.00.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.02.a");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.02.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.03.a");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.03.aC*");

MODULE_INFO(srcversion, "707144A0C2D7DF6FEF9FD02");
