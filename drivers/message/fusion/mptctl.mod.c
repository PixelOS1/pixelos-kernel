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
	{ 0xa73cda8f, "no_llseek" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x74a0134a, "mpt_device_driver_deregister" },
	{ 0x72b80cb0, "mpt_event_register" },
	{ 0x40cdc00f, "mpt_reset_register" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0x7398cade, "mpt_register" },
	{ 0xa164df89, "misc_register" },
	{ 0x487512fd, "mpt_device_driver_register" },
	{ 0x4796b7b2, "mpt_HardResetHandler" },
	{ 0x9166fada, "strncpy" },
	{ 0x560478fa, "mpt_alloc_fw_memory" },
	{ 0x7531abf8, "mpt_free_fw_memory" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x81ec9fb5, "mpt_verify_adapter" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x1a632a59, "__scsi_iterate_devices" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x754d539c, "strlen" },
	{ 0xac59b783, "mpt_put_msg_frame" },
	{ 0x60e23b90, "mpt_GetIocState" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4842fe32, "mpt_config" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xd4a6ce7, "mpt_halt_firmware" },
	{ 0x234e0ea9, "mpt_Soft_Hard_ResetHandler" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x502108d0, "mpt_fwfault_debug" },
	{ 0x80d77140, "mpt_put_msg_frame_hi_pri" },
	{ 0x2b9752ed, "mpt_free_msg_frame" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x6c4b80e0, "mpt_send_handshake_request" },
	{ 0x6408bb3e, "mpt_get_msg_frame" },
	{ 0x48b36153, "mpt_set_taskmgmt_in_progress_flag" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7dd49bd0, "fasync_helper" },
	{ 0xdd805159, "ioc_list" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xa6257a2f, "complete" },
	{ 0xa2817a80, "mpt_clear_taskmgmt_in_progress_flag" },
	{ 0x92997ed8, "_printk" },
	{ 0x76abb595, "kill_fasync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptbase");


MODULE_INFO(srcversion, "ACA05DBEDF08307EC217DF9");
