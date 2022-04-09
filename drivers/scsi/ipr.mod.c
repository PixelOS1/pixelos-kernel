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
	{ 0x73fec674, "param_ops_uint" },
	{ 0xee111615, "param_ops_int" },
	{ 0x107ab5e, "ata_scsi_dma_need_drain" },
	{ 0x73285ea3, "ata_sas_port_stop" },
	{ 0x45131539, "ata_sas_port_start" },
	{ 0xfbd32e3e, "ata_noop_qc_prep" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x77bc13a0, "strim" },
	{ 0xd4673394, "ata_sas_slave_configure" },
	{ 0x7f1218d3, "blk_queue_max_hw_sectors" },
	{ 0xec743ea0, "blk_queue_rq_timeout" },
	{ 0xc2f158d8, "ata_std_error_handler" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xbe277c8f, "scsi_dma_map" },
	{ 0xab9ae16d, "ata_sas_queuecmd" },
	{ 0x8962787b, "pci_cfg_access_trylock" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x15f59d1a, "ata_sas_sync_probe" },
	{ 0xbbe463ef, "ata_sas_port_init" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0x66e829a5, "scsi_remove_device" },
	{ 0x5ac4b094, "scsi_device_get" },
	{ 0x9316b04c, "kobject_uevent" },
	{ 0xbf022713, "scsi_add_device" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdd4b8dcd, "scsi_unblock_requests" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0xbcbcc6a1, "sysfs_create_bin_file" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x3ec726dd, "dma_pool_create" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xef731740, "pci_find_capability" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xa7a199fb, "pci_ioremap_bar" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe914e41e, "strcpy" },
	{ 0x898e4621, "ata_host_init" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0x80a30e6, "sysfs_remove_bin_file" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0xf7370f56, "system_state" },
	{ 0x5b04d302, "ata_sas_port_destroy" },
	{ 0x5a921311, "strncmp" },
	{ 0x6a03751f, "sgl_free_order" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x87b8798d, "sg_next" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xeb9e913d, "sgl_alloc_order" },
	{ 0x1564421, "request_firmware" },
	{ 0x349cba85, "strchr" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0x1000e51, "schedule" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0x7d466a68, "scsi_block_requests" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7ea9f2cf, "ata_sas_port_alloc" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xc6cbbc89, "capable" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x21894580, "pci_set_pcie_reset_state" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4460f2a, "pci_cfg_access_unlock" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5dec192, "ata_sas_scsi_ioctl" },
	{ 0x40b38a0f, "scmd_printk" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0x754d539c, "strlen" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb26b89e2, "scsi_report_device_reset" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0xa6257a2f, "complete" },
	{ 0x4239a5e4, "ata_qc_complete" },
	{ 0x4cebcbb0, "scsi_report_bus_reset" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfb578fc5, "memset" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x96848186, "scnprintf" },
	{ 0x92997ed8, "_printk" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd00000266bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd00000278bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd000002D4bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd000002D3bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd000002BEbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd0000028Dbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd000002C0bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd0000030Dbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000500sv00001014sd000002C1bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000500sv00001014sd000002C2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000500sv00001014sd00000338bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000002BDsv00001014sd000002C1bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000002BDsv00001014sd000002C2bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000002BDsv00001014sd00000338bc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd0000030Abc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd0000033Abc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd0000035Cbc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd00000360bc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000180sv00001014sd00000264bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000503sv00001014sd000002BFbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000503sv00001014sd000002D5bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000503sv00001014sd000002C3bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd0000033Cbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000356bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd0000035Fbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000352bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000353bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000354bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000033Bbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000355bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000357bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000035Dbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000035Ebc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FBbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FCbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FFbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FEbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000046Dbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004CAbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000474bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000475bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000499bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000049Abc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000049Bbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000049Cbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004C7bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004C8bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004C9bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000004DAsv00001014sd000004FCbc*sc*i*");
MODULE_ALIAS("pci:v00001014d000004DAsv00001014sd000004FBbc*sc*i*");

MODULE_INFO(srcversion, "08B860E94FF988B727FC9CC");
