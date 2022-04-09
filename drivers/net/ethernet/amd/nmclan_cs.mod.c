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
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x133536b8, "register_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xddf740ca, "pcmcia_get_tuple" },
	{ 0xd82355a8, "pcmcia_enable_device" },
	{ 0xe04da4f0, "pcmcia_request_irq" },
	{ 0xd0f80fce, "pcmcia_request_io" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xda59b65, "free_netdev" },
	{ 0x9fe1ed77, "pcmcia_disable_device" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x52996a04, "pcmcia_dev_present" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xf992d1e8, "cc_platform_has" },
	{ 0x84dcf661, "netdev_info" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7700cef0, "pcmcia_reset_card" },
	{ 0x92997ed8, "_printk" },
	{ 0xf3c35a84, "netdev_notice" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,pcmcia_core");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa085A850Bpb00B2E941pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0EBF1D60pbAD673AAFpc*pd*");

MODULE_INFO(srcversion, "6EEC86DE928786FA73079E5");
