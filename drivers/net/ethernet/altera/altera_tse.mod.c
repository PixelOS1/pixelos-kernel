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
	{ 0x84dcf661, "netdev_info" },
	{ 0xd0ece629, "phy_disconnect" },
	{ 0xee111615, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x56470118, "__warn_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc38e7269, "mdiobus_unregister" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31900c0b, "mdiobus_free" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xda59b65, "free_netdev" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x88f15d51, "phy_ethtool_get_link_ksettings" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ccf5210, "platform_get_irq_byname" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3419636e, "platform_get_resource_byname" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xe8bbaf9d, "phy_ethtool_set_link_ksettings" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("of:N*T*Caltr,tse-msgdma-1.0");
MODULE_ALIAS("of:N*T*Caltr,tse-msgdma-1.0C*");
MODULE_ALIAS("of:N*T*Caltr,tse-1.0");
MODULE_ALIAS("of:N*T*Caltr,tse-1.0C*");
MODULE_ALIAS("of:N*T*CALTR,tse-1.0");
MODULE_ALIAS("of:N*T*CALTR,tse-1.0C*");

MODULE_INFO(srcversion, "2D3A3C488E316B32735ADB7");
