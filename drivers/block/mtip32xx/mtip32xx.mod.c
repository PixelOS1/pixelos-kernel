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
	{ 0x22749e72, "simple_open" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x92997ed8, "_printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x6e841389, "cpu_info" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xa916b694, "strnlen" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x618911fc, "numa_node" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x9493fc86, "node_states" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xb0e602eb, "memmove" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x545f9a57, "__blk_mq_alloc_disk" },
	{ 0xce226563, "blk_mq_alloc_tag_set" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x7fde4ef0, "kmem_cache_alloc_node_trace" },
	{ 0x9c5937c, "blk_cleanup_disk" },
	{ 0x2dc6b6ad, "device_add_disk" },
	{ 0x292d5851, "set_capacity" },
	{ 0x132ff49c, "blk_queue_io_min" },
	{ 0x20e7f7f7, "blk_queue_max_segment_size" },
	{ 0x7f1218d3, "blk_queue_max_hw_sectors" },
	{ 0x38e7cfc2, "blk_queue_physical_block_size" },
	{ 0xf3e5664f, "blk_queue_max_segments" },
	{ 0x3b689112, "blk_queue_flag_clear" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xa7a8f833, "pcim_iounmap_regions" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa147db67, "blk_mq_tagset_busy_iter" },
	{ 0xef09180f, "blk_freeze_queue_start" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x71cefdb, "blk_mark_disk_dead" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa9bc5712, "put_disk" },
	{ 0x75587220, "blk_mq_free_tag_set" },
	{ 0xa5abf0ca, "blk_cleanup_queue" },
	{ 0xdaada13, "del_gendisk" },
	{ 0xffb7c514, "ida_free" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xa17ee47c, "blk_mq_free_request" },
	{ 0xc1ce6cae, "blk_execute_rq" },
	{ 0xf2f38155, "blk_mq_alloc_request" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0xed759704, "__blk_rq_map_sg" },
	{ 0x606db81c, "blk_mq_start_request" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x199c4833, "__irq_apply_affinity_hint" },
	{ 0xf84b47a1, "blk_mq_unquiesce_queue" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2c5f8a84, "blk_mq_quiesce_queue" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x754d539c, "strlen" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x64ff53ec, "blk_abort_request" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x56470118, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x54101891, "pcie_capability_write_word" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x358bd703, "pcie_capability_read_word" },
	{ 0x4d31f48f, "blk_queue_flag_set" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xef31f042, "blk_mq_end_request" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8f1c07f, "blk_mq_complete_request" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001344d00005150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005151sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005152sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005153sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005160sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005163sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8AAB9E7CB732E621C882D8F");
