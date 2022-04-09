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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xff80ab3, "skb_queue_head" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xe3feba56, "tasklet_unlock_spin_wait" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb4101ed, "atm_alloc_charge" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xc23477d, "current_task" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x727c1060, "suni_init" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xde80cd09, "ioremap" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0x61faf07c, "atm_dev_register" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x2cc2d52d, "vcc_hash" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x44c6e633, "vcc_sklist_lock" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xd1e29523, "atm_dev_deregister" },
	{ 0xedc03953, "iounmap" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm,suni");

MODULE_ALIAS("pci:v0000111Ad00000000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000111Ad00000002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EECD05BBFEF59B921A7AF64");
