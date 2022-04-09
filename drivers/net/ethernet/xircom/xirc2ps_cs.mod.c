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
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x9d8a8bca, "pcmcia_unregister_driver" },
	{ 0x136c7ecb, "pcmcia_register_driver" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x52996a04, "pcmcia_dev_present" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe4f7e36d, "pcmcia_map_mem_page" },
	{ 0xde80cd09, "ioremap" },
	{ 0x1b728f5a, "pcmcia_request_window" },
	{ 0xfb762773, "pcmcia_write_config_byte" },
	{ 0xf0a950e9, "pcmcia_loop_tuple" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x92997ed8, "_printk" },
	{ 0x133536b8, "register_netdev" },
	{ 0xd82355a8, "pcmcia_enable_device" },
	{ 0xe04da4f0, "pcmcia_request_irq" },
	{ 0xda20bae, "pcmcia_loop_config" },
	{ 0xd9470e26, "pcmcia_get_mac_from_cis" },
	{ 0xddf740ca, "pcmcia_get_tuple" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0x84dcf661, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xedc03953, "iounmap" },
	{ 0xda59b65, "free_netdev" },
	{ 0x9fe1ed77, "pcmcia_disable_device" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd0f80fce, "pcmcia_request_io" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xd44b38f4, "__skb_pad" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xf992d1e8, "cc_platform_has" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf3c35a84, "netdev_notice" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m0089c110Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0138c110Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pc0EA978EApd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pc80609023pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pcA650C32Apd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pc76DF1D29pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pcF1403719pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pbECA401BFpc*pd*");
MODULE_ALIAS("pcmcia:m01BFc010Af*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1B3B94FEpb*pcF381C1A2pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc0EC0AC37pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc947D9073pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc2464A6E3pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc3E08D609pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pcF7188E46pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54F7C49Cpb9FD2F0A2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54F7C49CpbEFE96769pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa816CC815pb174397DBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa44A09D9CpbB44DEECFpc*pd*");

MODULE_INFO(srcversion, "51998751C4553204633C495");
