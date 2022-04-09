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
	{ 0x60a293d7, "param_ops_ulong" },
	{ 0xb34fdfcf, "param_ops_byte" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x22749e72, "simple_open" },
	{ 0x784a8ff1, "ntb_unregister_client" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1b035bd1, "__ntb_register_client" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x92997ed8, "_printk" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xf9ca2eb4, "kstrtoint_from_user" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x49dfbff5, "ntb_clear_ctx" },
	{ 0x690330be, "ntb_default_port_number" },
	{ 0xd69f5d64, "ntb_default_peer_port_count" },
	{ 0x59432c75, "ntb_default_peer_port_number" },
	{ 0x3a6a0e57, "debugfs_create_bool" },
	{ 0x1537b21c, "debugfs_create_u8" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x332dc333, "ntb_link_event" },
	{ 0x6b72dd34, "ntb_set_ctx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa3a48714, "devm_ioremap_wc" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x28714395, "dma_unmap_resource" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xff2d37b7, "dma_map_resource" },
	{ 0xe885dd47, "__dma_request_channel" },
	{ 0xc785f106, "dma_release_channel" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb9221bf8, "dmaengine_get_unmap_data" },
	{ 0x1000e51, "schedule" },
	{ 0x574e440e, "dmaengine_unmap_put" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb");


MODULE_INFO(srcversion, "FD36108A24D9132A3B07F8A");
