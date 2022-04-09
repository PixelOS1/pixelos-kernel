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
	{ 0xb2fcc7e9, "pnfs_unregister_layoutdriver" },
	{ 0x7d0795c3, "nfs4_schedule_session_recovery" },
	{ 0x41ef09b, "nfs_request_add_commit_list" },
	{ 0xe08c0a45, "pnfs_nfs_generic_sync" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x441f9e9c, "pnfs_alloc_commit_array" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xbbe19b44, "nfs4_pnfs_ds_connect" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x2468f7de, "pnfs_generic_clear_request_commit" },
	{ 0xd97e93df, "nfs4_setup_sequence" },
	{ 0x8ca20956, "nfs_initiate_commit" },
	{ 0xcb9d2dbd, "pnfs_error_mark_layout_for_return" },
	{ 0x34ead93e, "nfs4_pnfs_ds_put" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x24b5fccb, "nfs4_mark_deviceid_unavailable" },
	{ 0xa076b97a, "__tracepoint_nfs4_pnfs_commit_ds" },
	{ 0xf280a027, "nfs4_decode_mp_ds_addr" },
	{ 0x4e88e276, "nfs_initiate_pgio" },
	{ 0x6c4d950f, "nfs4_set_rw_stateid" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1e695dcb, "pnfs_generic_commit_pagelist" },
	{ 0x4cb5740a, "__SCK__tp_func_nfs4_pnfs_write" },
	{ 0xb33aa2f7, "pnfs_generic_recover_commit_reqs" },
	{ 0x35e57753, "pnfs_generic_search_commit_reqs" },
	{ 0x2529ef26, "pnfs_generic_pg_test" },
	{ 0x1d1b6aa7, "pnfs_update_layout" },
	{ 0x94473287, "__SCK__tp_func_nfs4_pnfs_read" },
	{ 0xdf1b2458, "rpc_exit" },
	{ 0x6ee2cb19, "pnfs_generic_pg_cleanup" },
	{ 0x37893feb, "pnfs_generic_write_commit_done" },
	{ 0x86afdd9c, "rpc_delay" },
	{ 0x46732a7, "xdr_init_decode_pages" },
	{ 0xadeca730, "__SCT__tp_func_nfs4_pnfs_write" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xe75b00e1, "nfs4_find_get_deviceid" },
	{ 0xa7822464, "__SCK__tp_func_nfs4_pnfs_commit_ds" },
	{ 0x49733dc1, "nfs4_find_or_create_ds_client" },
	{ 0x1c1ada13, "nfs_pageio_reset_write_mds" },
	{ 0x7def60b3, "pnfs_layout_mark_request_commit" },
	{ 0x8dde6a41, "pnfs_destroy_layout" },
	{ 0x6785fb2c, "nfs4_pnfs_ds_add" },
	{ 0xf5adf10a, "pnfs_put_lseg" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfa7c2137, "nfs4_put_deviceid_node" },
	{ 0xed15fb41, "nfs4_print_deviceid" },
	{ 0x5a9097f8, "pnfs_set_layoutcommit" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xbe047b5, "pnfs_generic_scan_commit_lists" },
	{ 0x69d3558d, "pnfs_generic_rw_release" },
	{ 0x21075824, "__free_pages" },
	{ 0x7ad661f2, "nfs41_sequence_done" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x288c88a8, "nfs4_test_deviceid_unavailable" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf999267e, "pnfs_generic_commit_release" },
	{ 0xecd8994d, "pnfs_generic_pg_readpages" },
	{ 0x81c89e7f, "pnfs_add_commit_array" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4d0ea17b, "pnfs_read_done_resend_to_mds" },
	{ 0xabb9325c, "rpc_count_iostats" },
	{ 0x63826d35, "__SCT__tp_func_nfs4_pnfs_read" },
	{ 0x50ac7ed2, "rpc_restart_call_prepare" },
	{ 0x2b16e909, "__SCT__tp_func_nfs4_pnfs_commit_ds" },
	{ 0x686b7839, "pnfs_generic_pg_writepages" },
	{ 0xc637031e, "pnfs_generic_prepare_to_resend_writes" },
	{ 0x37a0cba, "kfree" },
	{ 0xa119311, "pnfs_generic_pg_check_layout" },
	{ 0x69acdf38, "memcpy" },
	{ 0xccbdd2bd, "pnfs_free_commit_array" },
	{ 0xe4e87749, "__tracepoint_nfs4_pnfs_read" },
	{ 0x1f201792, "pnfs_write_done_resend_to_mds" },
	{ 0x71bc40e3, "rpc_wake_up" },
	{ 0xa88de58b, "xdr_inline_decode" },
	{ 0x301934f8, "__tracepoint_nfs4_pnfs_write" },
	{ 0xc5a8c61a, "pnfs_generic_ds_cinfo_destroy" },
	{ 0x6d1054ff, "nfs_pageio_reset_read_mds" },
	{ 0xd7e0d561, "nfs4_init_deviceid_node" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0xc30ea138, "pnfs_set_lo_fail" },
	{ 0xd556c839, "nfs_writeback_update_inode" },
	{ 0x3cc01565, "pnfs_generic_ds_cinfo_release_lseg" },
	{ 0x9fda7823, "pnfs_register_layoutdriver" },
};

MODULE_INFO(depends, "nfsv4,nfs,sunrpc");


MODULE_INFO(srcversion, "BA3C155AF9C94A90490800D");
