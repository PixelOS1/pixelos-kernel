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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0x754d539c, "strlen" },
	{ 0x7d466a68, "scsi_block_requests" },
	{ 0x48b36153, "mpt_set_taskmgmt_in_progress_flag" },
	{ 0x4796b7b2, "mpt_HardResetHandler" },
	{ 0xdd4b8dcd, "scsi_unblock_requests" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xd349d253, "seq_printf" },
	{ 0x6408bb3e, "mpt_get_msg_frame" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4a6ce7, "mpt_halt_firmware" },
	{ 0xaf85c712, "scsi_print_command" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb47a712, "mpt_raid_phys_disk_get_num_paths" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x6c4b80e0, "mpt_send_handshake_request" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0x502108d0, "mpt_fwfault_debug" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xac59b783, "mpt_put_msg_frame" },
	{ 0x67064e78, "mpt_resume" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x234e0ea9, "mpt_Soft_Hard_ResetHandler" },
	{ 0x60e23b90, "mpt_GetIocState" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x42157b80, "mpt_raid_phys_disk_pg1" },
	{ 0x37a0cba, "kfree" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0x69b63bfe, "mpt_print_ioc_summary" },
	{ 0x35d93880, "blk_queue_dma_alignment" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2b9752ed, "mpt_free_msg_frame" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x7b8487fc, "mpt_suspend" },
	{ 0x6c7c4c31, "mpt_detach" },
	{ 0xa2817a80, "mpt_clear_taskmgmt_in_progress_flag" },
	{ 0xbe277c8f, "scsi_dma_map" },
	{ 0x80d77140, "mpt_put_msg_frame_hi_pri" },
};

MODULE_INFO(depends, "mptbase");


MODULE_INFO(srcversion, "619C6C995FB40CC10D833B8");
