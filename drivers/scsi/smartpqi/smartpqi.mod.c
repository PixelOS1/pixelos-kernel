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
	{ 0x2d3385d3, "system_wq" },
	{ 0x5c26a53b, "wait_for_completion_io_timeout" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xf62b85dc, "sas_release_transport" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xee111615, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x7d466a68, "scsi_block_requests" },
	{ 0x27756bc8, "scsi_sanitize_inquiry_string" },
	{ 0x66e829a5, "scsi_remove_device" },
	{ 0x32700178, "sas_port_free" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x8f410af0, "sas_phy_add" },
	{ 0xdd4b8dcd, "scsi_unblock_requests" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xc594d618, "sas_port_add_phy" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x40b38a0f, "scmd_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x826d3243, "pcie_capability_clear_and_set_word" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc2ef9e6a, "sas_port_delete_phy" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x8549e1f6, "sas_rphy_add" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9034196, "sas_port_delete" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4b432a03, "scsi_host_busy" },
	{ 0x81dda7c9, "blk_mq_unique_tag" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x83e780d8, "sas_attach_transport" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xf9a7ca3, "scsi_rescan_device" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0xc6d61c63, "sas_expander_alloc" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x7c229eed, "sas_end_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xde80cd09, "ioremap" },
	{ 0xf1e046cc, "panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1b4f8c5c, "sas_port_add" },
	{ 0x6626afca, "down" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0x670e9845, "sas_phy_delete" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x618911fc, "numa_node" },
	{ 0xbf022713, "scsi_add_device" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x69f266a4, "blk_mq_pci_map_queues" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xa0715105, "sas_phy_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x56a7a602, "sas_port_alloc_num" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xcf2a6966, "up" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xaeafaa63, "scsi_build_sense" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd46727d8, "pci_choose_state" },
	{ 0x96e91be1, "bsg_job_done" },
	{ 0x77bc13a0, "strim" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xbe277c8f, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_sas");

MODULE_ALIAS("pci:v00009005d0000028Fsv0000105Bsd00001211bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000105Bsd00001321bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A22bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A23bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A24bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A36bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A37bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00008460bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00001104bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00001105bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00001106bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00001107bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00001108bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00001109bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00008460bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00008461bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd0000C460bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd0000C461bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd0000F460bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd0000F461bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000045bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000046bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000047bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000048bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd0000004Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd0000004Bbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd0000004Cbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd0000004Fbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000051bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000052bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000053bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000054bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000019E5sd0000D227bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000019E5sd0000D228bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000019E5sd0000D229bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000019E5sd0000D22Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000019E5sd0000D22Bbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000019E5sd0000D22Cbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000110bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000608bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000801bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000802bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000803bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000804bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000805bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000806bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000807bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000808bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000809bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd0000080Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000900bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000901bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000902bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000903bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000904bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000905bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000906bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000907bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000908bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd0000090Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001200bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001201bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001202bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001280bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001281bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001282bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001300bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001301bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001302bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001303bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001380bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001400bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001402bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001410bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001411bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001412bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001420bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001430bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001440bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001441bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001450bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001452bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001460bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001461bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001462bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001470bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001471bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001472bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001480bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001490bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001491bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd000014A0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd000014A1bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd000014A2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd000014B0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd000014B1bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd000014C0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd000014C1bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd000014D0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd000014E0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd000014F0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000013FEsd00008312bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001028sd00001FE0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000601bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000602bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000603bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000609bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000650bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000651bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000652bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000653bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000654bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000655bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000700bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000701bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00001001bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00001002bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00001100bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00001101bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001590sd00000294bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001590sd000002DBbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001590sd000002DCbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001590sd0000032Ebc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001D8Dsd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001D8Dsd00000908bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001D8Dsd00000806bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001D8Dsd00000916bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001458sd00001000bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001DFCsd00003161bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001CF2sd00005445bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001CF2sd00005446bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001CF2sd00005447bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001CF2sd00000B27bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001CF2sd00000B29bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001CF2sd00000B45bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C536DA2019076EC927873F9");
