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
	{ 0xd5b32fe9, "nfs_unlink" },
	{ 0xf7402915, "nfs_symlink" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x31181759, "nfs_refresh_inode" },
	{ 0x38cc6472, "nfs_close_context" },
	{ 0xe27c7d65, "nfs_free_client" },
	{ 0xb6e5ea4e, "from_kuid_munged" },
	{ 0xb11238d1, "nfs_permission" },
	{ 0x5cdd44b4, "nfs_link" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0xa25207c4, "nfs_instantiate" },
	{ 0x6724e493, "nfs_sops" },
	{ 0x512d2150, "nfs_setattr_update_inode" },
	{ 0xda568ced, "unregister_nfs_version" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x61c2beef, "nfs_rmdir" },
	{ 0x236b3d01, "xdr_reserve_space" },
	{ 0x832e8f0b, "nfs_alloc_fattr" },
	{ 0xbf7b33e4, "from_kgid_munged" },
	{ 0xd99e3f8d, "make_kgid" },
	{ 0xa05ca625, "nfs_fattr_init" },
	{ 0x2c5062b3, "xdr_terminate_string" },
	{ 0x988d2b29, "nfs_setattr" },
	{ 0x928a26d4, "nfs_fs_type" },
	{ 0x5e9a477c, "rpc_prepare_reply_pages" },
	{ 0xbf2b6eca, "rpc_call_sync" },
	{ 0x561bcf1b, "rpc_call_start" },
	{ 0x52a95bfe, "register_nfs_version" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x9aed46c7, "nfs_getattr" },
	{ 0x88a69e5b, "nfs_invalidate_atime" },
	{ 0xd79893e3, "__SCK__tp_func_nfs_xdr_status" },
	{ 0x26884ff7, "nfs_alloc_fhandle" },
	{ 0xaecdc8bf, "nfs_lookup" },
	{ 0x5697a4f4, "nfs_rename" },
	{ 0x1b2a4eb0, "nfs_file_operations" },
	{ 0xfeb42418, "__SCT__tp_func_nfs_xdr_status" },
	{ 0xd485a00a, "make_kuid" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8b13677b, "nfs_try_get_tree" },
	{ 0x92997ed8, "_printk" },
	{ 0xdc824049, "nfs_mkdir" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6f6e9b2, "nfs_create" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa11cfa62, "xdr_read_pages" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa3cdf9c, "nfs_init_client" },
	{ 0xd62cc5b7, "nfs_create_server" },
	{ 0x31101a2d, "nfs_mknod" },
	{ 0x3c54890, "__tracepoint_nfs_xdr_status" },
	{ 0xf3df45f2, "nfs_submount" },
	{ 0xa88de58b, "xdr_inline_decode" },
	{ 0xb51c5085, "xdr_write_pages" },
	{ 0x165ea3e3, "nfs_dentry_operations" },
	{ 0x17fcccd1, "nfs_alloc_client" },
	{ 0xd556c839, "nfs_writeback_update_inode" },
	{ 0x52f6b868, "nlmclnt_proc" },
	{ 0x370098e5, "nfs_clone_server" },
};

MODULE_INFO(depends, "nfs,sunrpc,lockd");


MODULE_INFO(srcversion, "67CF2362BD3E5931E09E6F5");
