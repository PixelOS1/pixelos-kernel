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
	{ 0x2fe0588a, "scsi_set_medium_removal" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xec743ea0, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xee111615, "param_ops_int" },
	{ 0xe982ad48, "cdrom_number_of_slots" },
	{ 0x3b1bbe48, "blkdev_compat_ptr_ioctl" },
	{ 0x93ca52cf, "scsi_alloc_request" },
	{ 0xe345078a, "scsi_ioctl_block_when_processing_errors" },
	{ 0xbbe117fa, "unregister_cdrom" },
	{ 0xd119a8f5, "blk_dump_rq_flags" },
	{ 0x87b8798d, "sg_next" },
	{ 0x16ed83ae, "scsi_free_sgtables" },
	{ 0x40b38a0f, "scmd_printk" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7dc072c1, "cdrom_open" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7723bc20, "scsi_autopm_get_device" },
	{ 0x349ef22, "scsi_alloc_sgtables" },
	{ 0x938b46b9, "blk_rq_unmap_user" },
	{ 0x75b7701d, "__alloc_disk_node" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd028f603, "cdrom_release" },
	{ 0xdaada13, "del_gendisk" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0x9f37056, "__scsi_execute" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x5a921311, "strncmp" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf1d842e, "cdrom_get_media_event" },
	{ 0x292d5851, "set_capacity" },
	{ 0x2268bebd, "bdev_check_media_change" },
	{ 0x6801a49, "blk_rq_map_user" },
	{ 0x4e6f75b2, "cdrom_check_events" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xae282741, "cdrom_get_last_written" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa17ee47c, "blk_mq_free_request" },
	{ 0xc1ce6cae, "blk_execute_rq" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xaf40110d, "scsi_ioctl" },
	{ 0xa9bc5712, "put_disk" },
	{ 0x139d4a49, "scsi_register_driver" },
	{ 0x2894b1d, "scsi_block_when_processing_errors" },
	{ 0x3ad8c1a2, "scsi_test_unit_ready" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x3e3f7905, "cdrom_ioctl" },
	{ 0xfe983cdc, "blk_pm_runtime_init" },
	{ 0xe8576a49, "register_cdrom" },
	{ 0x2dc6b6ad, "device_add_disk" },
	{ 0x5ac4b094, "scsi_device_get" },
	{ 0x445356d5, "scsi_autopm_put_device" },
	{ 0x728fda38, "blk_queue_logical_block_size" },
	{ 0x94b38714, "scsi_mode_sense" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "5149BC085C84D64AA61300E");
