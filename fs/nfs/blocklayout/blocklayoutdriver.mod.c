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
	{ 0x2d3385d3, "system_wq" },
	{ 0xc8197240, "pnfs_generic_pg_init_write" },
	{ 0xc7dae385, "fs_bio_set" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x911b1f9e, "bio_alloc_bioset" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7c9722ba, "nfs_dreq_bytes_left" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xe88988e8, "rpc_unlink" },
	{ 0xad41443e, "pnfs_ld_write_done" },
	{ 0xcb9d2dbd, "pnfs_error_mark_layout_for_return" },
	{ 0x1151052, "dput" },
	{ 0x15c55800, "nfs4_delete_deviceid" },
	{ 0xc3a2be67, "nfs_net_id" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x24b5fccb, "nfs4_mark_deviceid_unavailable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xa281883e, "rpc_mkpipe_data" },
	{ 0xefed99fa, "rpc_mkpipe_dentry" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2529ef26, "pnfs_generic_pg_test" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xece784c2, "rb_first" },
	{ 0xdaee8e3b, "rpc_get_sb_net" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6ee2cb19, "pnfs_generic_pg_cleanup" },
	{ 0xa39475b3, "pnfs_generic_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x46732a7, "xdr_init_decode_pages" },
	{ 0xaee19e50, "rpc_queue_upcall" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xbfa52de8, "bio_add_page" },
	{ 0xe75b00e1, "nfs4_find_get_deviceid" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x68d2307b, "blkdev_get_by_path" },
	{ 0x1c1ada13, "nfs_pageio_reset_write_mds" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x79f503ed, "rpc_d_lookup_sb" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x29014389, "blkdev_get_by_dev" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xee4271b9, "bio_put" },
	{ 0xfa7c2137, "nfs4_put_deviceid_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdfbcf889, "module_put" },
	{ 0x72619b12, "rpc_pipe_generic_upcall" },
	{ 0xd68133b, "submit_bio" },
	{ 0x3f91d0e, "blk_finish_plug" },
	{ 0x387e1639, "rpc_pipefs_notifier_register" },
	{ 0x21075824, "__free_pages" },
	{ 0x9abc9283, "rpc_destroy_pipe_data" },
	{ 0xff90868c, "blkdev_put" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0xab433414, "rpc_put_sb_net" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xecd8994d, "pnfs_generic_pg_readpages" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa5b4feb6, "page_cache_next_miss" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x686b7839, "pnfs_generic_pg_writepages" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa31c51c3, "pnfs_generic_pg_init_read" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb51a3724, "rpc_pipefs_notifier_unregister" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa88de58b, "xdr_inline_decode" },
	{ 0xd5c12924, "vmalloc_to_page" },
	{ 0x6d1054ff, "nfs_pageio_reset_read_mds" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd7e0d561, "nfs4_init_deviceid_node" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc30ea138, "pnfs_set_lo_fail" },
	{ 0x2a687471, "blk_start_plug" },
	{ 0x900698da, "pnfs_ld_read_done" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0x9fda7823, "pnfs_register_layoutdriver" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x5d2b0351, "bio_associate_blkg" },
};

MODULE_INFO(depends, "nfsv4,sunrpc,nfs");


MODULE_INFO(srcversion, "7CA44D54B29494C5CEED5FA");
