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
	{ 0x984c5e73, "p9_fcall_fini" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xfa84377d, "p9_client_cb" },
	{ 0xcfec5524, "v9fs_unregister_trans" },
	{ 0xf6f7fd3a, "ib_dealloc_pd_user" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x44e9a829, "match_token" },
	{ 0x6cad1e5c, "v9fs_register_trans" },
	{ 0x5c1e5554, "rdma_destroy_id" },
	{ 0xc48a80ce, "ib_free_cq" },
	{ 0x85df9b6c, "strsep" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xb79f25fd, "p9_parse_header" },
	{ 0xbc188059, "p9_tag_lookup" },
	{ 0x1a055842, "rdma_connect" },
	{ 0xfba04b08, "ib_destroy_qp_user" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x4e3567f7, "match_int" },
	{ 0x17f18ec4, "__ib_alloc_cq_any" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x713b4db1, "rdma_create_qp" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdf6289e4, "rdma_bind_addr" },
	{ 0x100d252d, "rdma_resolve_route" },
	{ 0x7d4bb616, "__rdma_create_kernel_id" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3556af86, "rdma_disconnect" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf2a6966, "up" },
	{ 0x728e56d1, "rdma_resolve_addr" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x16fb069e, "__ib_alloc_pd" },
	{ 0xa6257a2f, "complete" },
	{ 0x1430723c, "p9_req_put" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
};

MODULE_INFO(depends, "9pnet,ib_core,rdma_cm");


MODULE_INFO(srcversion, "F945FCCEE053BBA7042BA5F");
