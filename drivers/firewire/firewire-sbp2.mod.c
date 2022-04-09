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
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0xce310cfa, "fw_device_enable_phys_dma" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7549c36, "driver_register" },
	{ 0xdf1cf544, "__scsi_add_device" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0xee111615, "param_ops_int" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x7d466a68, "scsi_block_requests" },
	{ 0x7f1218d3, "blk_queue_max_hw_sectors" },
	{ 0x66e829a5, "scsi_remove_device" },
	{ 0xa4a355ca, "fw_send_request" },
	{ 0xdd4b8dcd, "scsi_unblock_requests" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3ff92c06, "fw_bus_type" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3c56ef91, "fw_workqueue" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0xad3eba23, "blk_queue_update_dma_alignment" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x893475d, "fw_cancel_transaction" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x44a86bca, "scsi_device_lookup" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xd4f4bf56, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xda6af6f7, "fw_core_remove_address_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xa6257a2f, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xaedf84ce, "fw_high_memory_region" },
	{ 0x962c98ce, "fw_run_transaction" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x30412b2, "fw_send_response" },
	{ 0xbe277c8f, "scsi_dma_map" },
};

MODULE_INFO(depends, "firewire-core");

MODULE_ALIAS("ieee1394:ven*mo*sp0000609Ever00010483*");

MODULE_INFO(srcversion, "252A8F54BEEA287456BA453");
