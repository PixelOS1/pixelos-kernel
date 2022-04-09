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
	{ 0xc8a016aa, "param_ops_string" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xee111615, "param_ops_int" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x907a06f4, "root_device_unregister" },
	{ 0xbb6269b0, "bus_unregister" },
	{ 0x7549c36, "driver_register" },
	{ 0x5b7424d5, "bus_register" },
	{ 0xf3d30378, "__root_device_register" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x818416e1, "scsi_set_sense_information" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xb0e602eb, "memmove" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x64ff53ec, "blk_abort_request" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x81dda7c9, "blk_mq_unique_tag" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xdaf02d94, "device_register" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x69e683de, "uuid_gen" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x131a6146, "xa_clear_mark" },
	{ 0xc666a132, "crc_t10dif" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0xa78c92d7, "sg_miter_stop" },
	{ 0xfd1d5018, "sg_miter_next" },
	{ 0x23906fc1, "sg_miter_start" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xfb578fc5, "memset" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x1a632a59, "__scsi_iterate_devices" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x1b6865c, "xa_get_mark" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xd349d253, "seq_printf" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x69acdf38, "memcpy" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8ac743de, "sg_copy_buffer" },
	{ 0x4d4d7b79, "blk_mq_map_queues" },
	{ 0x745a981, "xa_erase" },
	{ 0x999e8297, "vfree" },
	{ 0x776c87fd, "device_unregister" },
	{ 0x9da0ba4, "xa_set_mark" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd0fe8d51, "sg_pcopy_from_buffer" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xaeafaa63, "scsi_build_sense" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x96848186, "scnprintf" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x9ae47436, "_find_last_bit" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E00FA85945E1E663C6C1A83");
