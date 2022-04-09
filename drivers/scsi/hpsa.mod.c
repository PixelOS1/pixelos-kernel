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
	{ 0xf62b85dc, "sas_release_transport" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x83e780d8, "sas_attach_transport" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x92997ed8, "_printk" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x2a303d4d, "check_signature" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xec32212e, "pci_irq_get_affinity" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xa7a199fb, "pci_ioremap_bar" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xa0965042, "pci_disable_link_state" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xdd4b8dcd, "scsi_unblock_requests" },
	{ 0x7d466a68, "scsi_block_requests" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x5b9adb5a, "scsi_host_get" },
	{ 0xc594d618, "sas_port_add_phy" },
	{ 0x8f410af0, "sas_phy_add" },
	{ 0xa0715105, "sas_phy_alloc" },
	{ 0x5a921311, "strncmp" },
	{ 0x27756bc8, "scsi_sanitize_inquiry_string" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xaf85c712, "scsi_print_command" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0x5c26a53b, "wait_for_completion_io_timeout" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x392b1fea, "wait_for_completion_io" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0x66e829a5, "scsi_remove_device" },
	{ 0x44a86bca, "scsi_device_lookup" },
	{ 0xbf022713, "scsi_add_device" },
	{ 0x8549e1f6, "sas_rphy_add" },
	{ 0x7c229eed, "sas_end_device_alloc" },
	{ 0xb0e602eb, "memmove" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xde80cd09, "ioremap" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x69acdf38, "memcpy" },
	{ 0x87b8798d, "sg_next" },
	{ 0xbe277c8f, "scsi_dma_map" },
	{ 0xec743ea0, "blk_queue_rq_timeout" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x32700178, "sas_port_free" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1b4f8c5c, "sas_port_add" },
	{ 0x56a7a602, "sas_port_alloc_num" },
	{ 0xf9034196, "sas_port_delete" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc2ef9e6a, "sas_port_delete_phy" },
	{ 0x670e9845, "sas_phy_delete" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9166fada, "strncpy" },
	{ 0xc6cbbc89, "capable" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfb578fc5, "memset" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0x96848186, "scnprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "scsi_transport_sas");

MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003241bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003243bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003245bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003247bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003249bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd0000324Abc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd0000324Bbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003233bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003350bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003351bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003352bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003353bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003354bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003355bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003356bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001920bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001921bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001922bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001923bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001924bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001925bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001926bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001928bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001929bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021BDbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021BEbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021BFbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C0bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C1bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C2bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C3bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C4bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C5bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C6bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C7bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C8bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C9bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CAbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CBbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CCbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CDbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CEbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000580bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000581bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000582bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000583bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000584bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000585bc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd00000076bc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd00000087bc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd0000007Dbc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd00000088bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000333Fsv0000103Csd0000333Fbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd*sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00000E11d*sv*sd*bc01sc04i*");

MODULE_INFO(srcversion, "85FB35139D25402A8EF40BD");
