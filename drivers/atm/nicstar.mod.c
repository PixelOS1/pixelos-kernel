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
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0x20978fb9, "idr_find" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x5012a70, "pv_ops" },
	{ 0x459f3f88, "skb_push" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x24e48d13, "skb_put" },
	{ 0x979bd4e8, "atm_charge" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x1000e51, "schedule" },
	{ 0x652032cb, "mac_pton" },
	{ 0x61faf07c, "atm_dev_register" },
	{ 0xfb578fc5, "memset" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xde80cd09, "ioremap" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xcd34d80, "skb_unlink" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xd1e29523, "atm_dev_deregister" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x92997ed8, "_printk" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");

MODULE_ALIAS("pci:v0000111Dd00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "894B040B0B2DA65ADE59D60");
