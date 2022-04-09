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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xb2e3bafd, "spi_dv_device" },
	{ 0xc4882dce, "scsi_track_queue_full" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xee111615, "param_ops_int" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x6c5dae23, "scsi_kmap_atomic_sg" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf1e5fd32, "spi_attach_transport" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x63556a20, "__starget_for_each_device" },
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0x56c8799d, "scsi_kunmap_atomic_sg" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4c315016, "spi_populate_tag_msg" },
	{ 0xcffa2aff, "spi_populate_width_msg" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xf0140a9f, "spi_release_transport" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x999dfedd, "__scsi_device_lookup_by_target" },
	{ 0x37a0cba, "kfree" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8ea5a77e, "spi_display_xfer_agreement" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xa6257a2f, "complete" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xbe277c8f, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_spi");


MODULE_INFO(srcversion, "9D1B45C788157309435E7D3");
