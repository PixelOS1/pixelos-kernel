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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xec743ea0, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0x80a30e6, "sysfs_remove_bin_file" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0xee111615, "param_ops_int" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x66e829a5, "scsi_remove_device" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x87b8798d, "sg_next" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xde80cd09, "ioremap" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xbf022713, "scsi_add_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x44a86bca, "scsi_device_lookup" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x697ed5f0, "memcpy_and_pad" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x898cf188, "scsi_partsize" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xbcbcc6a1, "sysfs_create_bin_file" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbe277c8f, "scsi_dma_map" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000017D3d00001110sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001130sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001160sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001203sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001210sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001214sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001230sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001260sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001270sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001280sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001380sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001381sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001884sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d0000188Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B288FED49E1A3497638B392");
