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
	{ 0x981efe92, "mpt_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x74a0134a, "mpt_device_driver_deregister" },
	{ 0x487512fd, "mpt_device_driver_register" },
	{ 0x40cdc00f, "mpt_reset_register" },
	{ 0x7398cade, "mpt_register" },
	{ 0x72b80cb0, "mpt_event_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x24e48d13, "skb_put" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb24f9613, "netif_rx" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x2b9752ed, "mpt_free_msg_frame" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xac59b783, "mpt_put_msg_frame" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6408bb3e, "mpt_get_msg_frame" },
	{ 0x133536b8, "register_netdev" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x87ef3402, "alloc_fcdev" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xda59b65, "free_netdev" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptbase");


MODULE_INFO(srcversion, "8C829EB8A95E0439A83F075");
