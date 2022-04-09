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
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x23192af3, "unload_nls" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0x9b35eb73, "__set_page_dirty_nobuffers" },
	{ 0x1ff516aa, "filemap_fault" },
	{ 0xee111615, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x7facc0a6, "filemap_write_and_wait_range" },
	{ 0xad74a67, "kill_anon_super" },
	{ 0xb8b043f2, "kfree_link" },
	{ 0x44c1375c, "__fs_parse" },
	{ 0x75cc6914, "generic_file_open" },
	{ 0x1151052, "dput" },
	{ 0xb92259bf, "vbg_hgcm_call" },
	{ 0x6a6b3428, "invalidate_inode_pages2" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0x3096be16, "names_cachep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfed436c5, "generic_read_dir" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa5e51661, "vbg_put_gdev" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9c072aa8, "vbg_status_code_to_errno" },
	{ 0xd99e3f8d, "make_kgid" },
	{ 0x260590c0, "vbg_err" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcd339405, "finish_no_open" },
	{ 0xc23477d, "current_task" },
	{ 0x5d3e2888, "simple_write_begin" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xffb7c514, "ida_free" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x80fa0e04, "vbg_hgcm_disconnect" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x56ad5ca7, "set_nlink" },
	{ 0x954f099c, "idr_preload" },
	{ 0xf90f3a43, "dentry_path_raw" },
	{ 0xa77e12cb, "unlock_page" },
	{ 0xccb23c4, "generic_file_read_iter" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4f239b25, "generic_parse_monolithic" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x94bf03ca, "utf8_to_utf32" },
	{ 0xcf94769e, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x3942151b, "generic_file_mmap" },
	{ 0xd485a00a, "make_kuid" },
	{ 0x7056aa31, "vbg_hgcm_connect" },
	{ 0x32d5a63e, "load_nls" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x534f8724, "unlock_new_inode" },
	{ 0x901cb0ac, "fs_param_is_u32" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x101fe88b, "get_tree_nodev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0x7bca3057, "generic_file_write_iter" },
	{ 0xb732c3f4, "iput" },
	{ 0x5f234dc3, "finish_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4cee1ae4, "load_nls_default" },
	{ 0x6233a5fd, "d_splice_alias" },
	{ 0xd811a9cf, "d_make_root" },
	{ 0xe5c19031, "vbg_get_gdev" },
	{ 0x2875a315, "utf32_to_utf8" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xc25db9fa, "unregister_filesystem" },
	{ 0xa3db4c4, "dump_page" },
	{ 0x1852308, "filemap_map_pages" },
	{ 0x27cb619b, "new_inode" },
	{ 0xb0e602eb, "memmove" },
	{ 0xd9061a2, "generic_file_splice_read" },
	{ 0x431ef4e3, "fs_param_is_string" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xecae0443, "noop_fsync" },
	{ 0x548c6580, "d_instantiate" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x8260986, "iget_locked" },
	{ 0x70cdcbfd, "vbg_warn" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc885951d, "generic_fillattr" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x8876548, "super_setup_bdi_name" },
};

MODULE_INFO(depends, "vboxguest");


MODULE_INFO(srcversion, "9123F2DC5554C5C5443EFB2");
