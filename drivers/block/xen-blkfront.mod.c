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
	{ 0x3b1bbe48, "blkdev_compat_ptr_ioctl" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0xee111615, "param_ops_int" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x22486473, "xenbus_unregister_driver" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xf955e86a, "__xenbus_register_frontend" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0xeb833c22, "xen_has_pv_disk_devices" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x72be1baf, "set_capacity_and_notify" },
	{ 0x38fca637, "set_disk_ro" },
	{ 0x2dc6b6ad, "device_add_disk" },
	{ 0x545f9a57, "__blk_mq_alloc_disk" },
	{ 0xd68133b, "submit_bio" },
	{ 0xf83ba0ad, "blk_mq_kick_requeue_list" },
	{ 0x75782bc4, "blk_mq_requeue_request" },
	{ 0x4ddfa440, "xenbus_frontend_closed" },
	{ 0x292d5851, "set_capacity" },
	{ 0x71cefdb, "blk_mark_disk_dead" },
	{ 0xce226563, "blk_mq_alloc_tag_set" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x1cb9a1c8, "xenbus_gather" },
	{ 0x7de8ba75, "blk_mq_update_nr_hw_queues" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xb30797d, "xenbus_switch_state" },
	{ 0xfb578fc5, "memset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0xf7866b4f, "bind_evtchn_to_irqhandler_lateeoi" },
	{ 0x68244312, "xenbus_alloc_evtchn" },
	{ 0xb67c2756, "xenbus_grant_ring" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0xf27d0a7b, "gnttab_grant_foreign_access_ref" },
	{ 0x4b931968, "xen_features" },
	{ 0x31dca4d8, "gnttab_claim_grant_reference" },
	{ 0x56470118, "__warn_printk" },
	{ 0xea5cbce, "xen_irq_lateeoi" },
	{ 0x70647d8d, "blk_queue_write_cache" },
	{ 0x3b689112, "blk_queue_flag_clear" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8f1c07f, "blk_mq_complete_request" },
	{ 0x93d1d424, "gnttab_free_grant_references" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0x88e7dbfc, "blk_mq_stop_hw_queue" },
	{ 0x76e85b92, "gnttab_request_free_callback" },
	{ 0x2ecea079, "gnttab_foreach_grant_in_range" },
	{ 0x87b8798d, "sg_next" },
	{ 0xed759704, "__blk_rq_map_sg" },
	{ 0xd27f215d, "gnttab_alloc_grant_references" },
	{ 0x606db81c, "blk_mq_start_request" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x75587220, "blk_mq_free_tag_set" },
	{ 0x9c5937c, "blk_cleanup_disk" },
	{ 0x45bfb450, "blk_mq_stop_hw_queues" },
	{ 0xdaada13, "del_gendisk" },
	{ 0xf5d8db67, "blk_mq_start_stopped_hw_queues" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc23477d, "current_task" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2b0fe000, "gnttab_cancel_free_callback" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0x21075824, "__free_pages" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x49e5156, "gnttab_try_end_foreign_access" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x5a921311, "strncmp" },
	{ 0xecd8f23d, "xenbus_read" },
	{ 0x28e64c64, "xen_has_pv_and_legacy_disk_devices" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x9f984513, "strrchr" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x9a00dbc1, "blk_queue_max_discard_sectors" },
	{ 0x35d93880, "blk_queue_dma_alignment" },
	{ 0xf3e5664f, "blk_queue_max_segments" },
	{ 0x20e7f7f7, "blk_queue_max_segment_size" },
	{ 0xbee75f33, "blk_queue_segment_boundary" },
	{ 0x7f1218d3, "blk_queue_max_hw_sectors" },
	{ 0x38e7cfc2, "blk_queue_physical_block_size" },
	{ 0x728fda38, "blk_queue_logical_block_size" },
	{ 0x4d31f48f, "blk_queue_flag_set" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x9ed698da, "xenbus_dev_fatal" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xef31f042, "blk_mq_end_request" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A07A0FFCC1B4D1788FCD68C");
