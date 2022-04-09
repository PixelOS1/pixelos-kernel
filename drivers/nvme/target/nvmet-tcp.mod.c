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
	{ 0x35be7868, "sock_no_linger" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x840342c6, "sgl_free" },
	{ 0x7e478053, "kernel_sendmsg" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe613a798, "inet_addr_is_any" },
	{ 0xee111615, "param_ops_int" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0x5f94d1a4, "nvmet_req_uninit" },
	{ 0xa58d1297, "nvmet_ctrl_fatal_error" },
	{ 0xa4e58fcd, "tcp_sock_set_nodelay" },
	{ 0xae6be20c, "crypto_stats_ahash_update" },
	{ 0x7650c19b, "sock_release" },
	{ 0x7199dc7d, "sock_recvmsg" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x87b8798d, "sg_next" },
	{ 0xfb0cc67c, "nvmet_sq_init" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x40f50316, "kernel_listen" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4d276695, "__page_frag_cache_drain" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x32b80943, "crypto_ahash_final" },
	{ 0x23b70b9d, "crypto_ahash_digest" },
	{ 0x9dae18e3, "sock_set_reuseaddr" },
	{ 0xf25fff2f, "tcp_stream_memory_free" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x31de1a15, "inet_pton_with_scope" },
	{ 0xffb7c514, "ida_free" },
	{ 0xfb8d6db5, "iov_iter_kvec" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x22df349f, "nvmet_register_transport" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x82b24054, "kernel_sock_shutdown" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x264ac608, "kernel_getsockname" },
	{ 0x2634450a, "kernel_getpeername" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4ee52556, "nvmet_req_init" },
	{ 0x2de125c0, "page_frag_alloc_align" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4859faf3, "nvmet_unregister_transport" },
	{ 0xa7ec6c1d, "kernel_sendpage" },
	{ 0x3a13f54a, "sgl_alloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x92997ed8, "_printk" },
	{ 0x12459cd6, "nvmet_sq_destroy" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0xc85456cd, "sock_set_priority" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x94ae41b5, "kernel_recvmsg" },
	{ 0x63aa0b54, "kernel_accept" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x3a7cac23, "sock_create" },
	{ 0x39b8db9, "kernel_bind" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x8e7b8558, "nvmet_req_complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb6f1d859, "crypto_stats_get" },
	{ 0x43a901fb, "ip_sock_set_tos" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x95ecfe41, "crypto_alloc_ahash" },
};

MODULE_INFO(depends, "nvmet");


MODULE_INFO(srcversion, "C2CA9D027356D4DC529664E");
