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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xec743ea0, "blk_queue_rq_timeout" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xee111615, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x7f1218d3, "blk_queue_max_hw_sectors" },
	{ 0x66e829a5, "scsi_remove_device" },
	{ 0xec32212e, "pci_irq_get_affinity" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xb633f115, "irq_poll_enable" },
	{ 0x4d4d7b79, "blk_mq_map_queues" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x3be38d4c, "__register_chrdev" },
	{ 0x87b8798d, "sg_next" },
	{ 0x40b38a0f, "scmd_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x591c0306, "_dev_notice" },
	{ 0xc751da51, "blk_queue_virt_boundary" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xaf85c712, "scsi_print_command" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4b432a03, "scsi_host_busy" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x81dda7c9, "blk_mq_unique_tag" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xde80cd09, "ioremap" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x7dd49bd0, "fasync_helper" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0xad3eba23, "blk_queue_update_dma_alignment" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x199c4833, "__irq_apply_affinity_hint" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xef731740, "pci_find_capability" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0x1d0d3a05, "pci_select_bars" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xbf022713, "scsi_add_device" },
	{ 0x4d31f48f, "blk_queue_flag_set" },
	{ 0x40cdf542, "driver_create_file" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x44a86bca, "scsi_device_lookup" },
	{ 0x92997ed8, "_printk" },
	{ 0x69f266a4, "blk_mq_pci_map_queues" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b5500c5, "pci_cfg_access_lock" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x1a632a59, "__scsi_iterate_devices" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xcf2a6966, "up" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x76abb595, "kill_fasync" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xd4e8d3e0, "driver_remove_file" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb3088b32, "pci_enable_device_mem" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xe0aef0a6, "pci_release_selected_regions" },
	{ 0xe0cce0fe, "pci_request_selected_regions" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3ec726dd, "dma_pool_create" },
	{ 0x4460f2a, "pci_cfg_access_unlock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x358bd703, "pcie_capability_read_word" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbe277c8f, "scsi_dma_map" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001000d00000411sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000007Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000078sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000079sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000073sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000071sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000413sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000005Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000002Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000005Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000005Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000CFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000053sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000001Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000001Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E7sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BDFC3839754D95E6284DFAA");
