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
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x2dc6b6ad, "device_add_disk" },
	{ 0x292d5851, "set_capacity" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xa6257a2f, "complete" },
	{ 0xfd741b50, "blk_execute_rq_nowait" },
	{ 0xf2f38155, "blk_mq_alloc_request" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x9166fada, "strncpy" },
	{ 0xef31f042, "blk_mq_end_request" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf9a482f9, "msleep" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xbee75f33, "blk_queue_segment_boundary" },
	{ 0xf3e5664f, "blk_queue_max_segments" },
	{ 0x545f9a57, "__blk_mq_alloc_disk" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa926a4d, "blk_mq_init_queue" },
	{ 0xce226563, "blk_mq_alloc_tag_set" },
	{ 0xfb578fc5, "memset" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xde80cd09, "ioremap" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x92997ed8, "_printk" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x75587220, "blk_mq_free_tag_set" },
	{ 0xa5abf0ca, "blk_cleanup_queue" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xdaada13, "del_gendisk" },
	{ 0x9c5937c, "blk_cleanup_disk" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x45bfb450, "blk_mq_stop_hw_queues" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0x42b94174, "blk_mq_start_hw_queues" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0xed759704, "__blk_rq_map_sg" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x606db81c, "blk_mq_start_request" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000105Ad00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5FEF003CD1168800087237C");
