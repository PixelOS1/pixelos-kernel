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
	{ 0x72b243d4, "free_dma" },
	{ 0x7054a3e4, "request_dma" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xee111615, "param_ops_int" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x75587220, "blk_mq_free_tag_set" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xdaada13, "del_gendisk" },
	{ 0x49870137, "platform_device_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0x85bd1608, "__request_region" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x9e64fbfe, "rtc_cmos_read" },
	{ 0x7040fff9, "rtc_lock" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0xce226563, "blk_mq_alloc_tag_set" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x868acba5, "get_options" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x754d539c, "strlen" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xacaf7b1a, "__invalidate_device" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2268bebd, "bdev_check_media_change" },
	{ 0x292d5851, "set_capacity" },
	{ 0x21075824, "__free_pages" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd68133b, "submit_bio" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xbfa52de8, "bio_add_page" },
	{ 0x5d2b0351, "bio_associate_blkg" },
	{ 0x6665d5b9, "bio_init" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x606db81c, "blk_mq_start_request" },
	{ 0x175e33fb, "dma_spin_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x96155d3f, "__blk_mq_end_request" },
	{ 0xe3eb4747, "blk_update_request" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9c5937c, "blk_cleanup_disk" },
	{ 0x2dc6b6ad, "device_add_disk" },
	{ 0x999e8297, "vfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x37a0cba, "kfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xa6257a2f, "complete" },
	{ 0x7f1218d3, "blk_queue_max_hw_sectors" },
	{ 0x545f9a57, "__blk_mq_alloc_disk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5012a70, "pv_ops" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pnp:dPNP0700*");
MODULE_ALIAS("acpi*:PNP0700:*");

MODULE_INFO(srcversion, "734E61814B1F5C370A2DB9A");
