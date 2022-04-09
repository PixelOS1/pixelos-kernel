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
	{ 0x9d8a8bca, "pcmcia_unregister_driver" },
	{ 0x136c7ecb, "pcmcia_register_driver" },
	{ 0x24d273d1, "add_timer" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdcf6bbc2, "dev_trans_start" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x52996a04, "pcmcia_dev_present" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xf3c35a84, "netdev_notice" },
	{ 0x92997ed8, "_printk" },
	{ 0xfb762773, "pcmcia_write_config_byte" },
	{ 0x133536b8, "register_netdev" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xd82355a8, "pcmcia_enable_device" },
	{ 0xda20bae, "pcmcia_loop_config" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf992d1e8, "cc_platform_has" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x84dcf661, "netdev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd0f80fce, "pcmcia_request_io" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xda59b65, "free_netdev" },
	{ 0x9fe1ed77, "pcmcia_disable_device" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5012a70, "pv_ops" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m016Cc0081f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m018Ac0301f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m01BFc2328f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc0301f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc0303f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc0309f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0274c1106f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m8A01cC1ABf*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m021Bc0202f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mFFFFc1090f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa49B020A7pb119CC9FCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB4BE14E3pb9A12EB6Apc*pdAB9BE5EF*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0959823BpbAB9BE5EFpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa552AB682pbBC3B87E1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa00FA7BC8pb00E990CCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBC477DDEpb78C5F40Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440Fpb436768C5pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440Fpb730DF72Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440Fpb3ABBD061pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa55632FD5pb66BC2A90pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa547E66DCpb233ADAC2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0733CC81pb232019A8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa481E0094pbF91AF609pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa9AA79DC3pb40FAD875pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb7C2ADD04pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb7EF26116pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb2E272058pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa820A67B6pb*pc*pdAB9BE5EF*");

MODULE_INFO(srcversion, "804EFC7CE60333884FD35D7");
