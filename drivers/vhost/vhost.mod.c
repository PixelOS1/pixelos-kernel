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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc577832d, "vhost_iotlb_alloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0xee111615, "param_ops_int" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x26fe7592, "kthread_unuse_mm" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xa24517eb, "vhost_iotlb_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x72b37550, "mmput" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x6230172c, "__mmdrop" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x4c98e46, "get_task_mm" },
	{ 0x65df35ca, "__put_user_nocheck_2" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd2bc5c46, "__get_user_nocheck_2" },
	{ 0x69e872f9, "vhost_iotlb_itree_first" },
	{ 0xf0785fc6, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xddb1cd7, "llist_reverse_order" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe8d0b427, "kthread_use_mm" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6bec0e66, "vhost_iotlb_del_range" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc7c967a, "iov_iter_init" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xc54801d6, "eventfd_fget" },
	{ 0xc98cc2f, "iov_iter_advance" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x2eb6cb1, "cgroup_attach_task_all" },
	{ 0x38ff875f, "vhost_iotlb_add_range" },
	{ 0xa6257a2f, "complete" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0xcd9dd851, "param_ops_ushort" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd174fd2a, "unpin_user_pages_dirty_lock" },
	{ 0x3e5b6f64, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf562eb58, "pin_user_pages_fast" },
};

MODULE_INFO(depends, "vhost_iotlb");


MODULE_INFO(srcversion, "F6E3550F46EE34A6FAE03EE");
