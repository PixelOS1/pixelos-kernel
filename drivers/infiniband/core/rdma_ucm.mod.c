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
	{ 0xd5596d10, "device_remove_file" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9432eea4, "rdma_get_service_id" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xa0a0cb18, "stream_open" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x5b3e282f, "xa_store" },
	{ 0xf4e68372, "rdma_join_multicast" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x63057f4b, "ib_copy_path_rec_to_user" },
	{ 0x62b5e03d, "rdma_read_gids" },
	{ 0x5c1e5554, "rdma_destroy_id" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdc86b290, "rdma_connect_ece" },
	{ 0x5f2e4e21, "ib_copy_ah_attr_to_user" },
	{ 0xc6dda23a, "rdma_init_qp_attr" },
	{ 0xa0ebc08, "__xa_cmpxchg" },
	{ 0xae347e8f, "rdma_set_reuseaddr" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xc6a83350, "rdma_set_ib_path" },
	{ 0xb36e4148, "ib_sa_pack_path" },
	{ 0xa164df89, "misc_register" },
	{ 0xc23477d, "current_task" },
	{ 0x20f1f476, "rdma_accept_ece" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x6856baf3, "rdma_listen" },
	{ 0xdb00caed, "rdma_unlock_handler" },
	{ 0xe295f9b4, "ib_copy_qp_attr_to_user" },
	{ 0x85d38b3b, "rdma_set_afonly" },
	{ 0x7aad950, "rdma_notify" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xf88cf3ce, "init_net" },
	{ 0xf0785fc6, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0x1a9ba1, "__task_pid_nr_ns" },
	{ 0x2af975fa, "device_create_file" },
	{ 0xd1a7a58, "ib_register_client" },
	{ 0xdf6289e4, "rdma_bind_addr" },
	{ 0x100d252d, "rdma_resolve_route" },
	{ 0xa0b21e2d, "rdma_create_user_id" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0xfda9f5b0, "rdma_lock_handler" },
	{ 0xd6636ca6, "rdma_addr_size_in6" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3556af86, "rdma_disconnect" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb297eda6, "rdma_reject" },
	{ 0x86cef180, "rdma_addr_size" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x84f9a746, "rdma_set_service_type" },
	{ 0x95fe8ecc, "rdma_set_ack_timeout" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0x728e56d1, "rdma_resolve_addr" },
	{ 0x305e5701, "rdma_addr_size_kss" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0xe5a78c1e, "ib_sa_unpack_path" },
	{ 0x5a1fdf3a, "register_net_sysctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0xc906ef7d, "ib_unregister_client" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x77f5ccc6, "rdma_leave_multicast" },
};

MODULE_INFO(depends, "rdma_cm,ib_uverbs,ib_core");


MODULE_INFO(srcversion, "66EC85176E677852BE718F3");
