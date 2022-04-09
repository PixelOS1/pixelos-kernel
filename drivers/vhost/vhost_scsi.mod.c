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
	{ 0xf888ca21, "sg_init_table" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x21365d60, "iov_iter_npages" },
	{ 0x5321d3d6, "sbitmap_get" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0x4dc1c329, "target_put_sess_cmd" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x754d539c, "strlen" },
	{ 0xea83187f, "core_tpg_register" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0x3d80fde7, "transport_generic_free_cmd" },
	{ 0xca7402b2, "target_register_template" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0x32863114, "vhost_vq_is_setup" },
	{ 0xccad7d3b, "target_queue_submission" },
	{ 0x6063c97e, "core_tpg_deregister" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe712a89b, "vhost_dev_cleanup" },
	{ 0x683a00d6, "target_init_cmd" },
	{ 0xce9df4e0, "vhost_log_access_ok" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0xd5d4d1ed, "vhost_enable_notify" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xaff799cf, "vhost_work_dev_flush" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x45fb579b, "vhost_disable_notify" },
	{ 0xa164df89, "misc_register" },
	{ 0x1959e748, "vhost_signal" },
	{ 0xcefabccc, "vhost_dev_ioctl" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x7a62becc, "iov_iter_get_pages" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0x5a921311, "strncmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf8b741b8, "vhost_get_vq_desc" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x45a41106, "noop_llseek" },
	{ 0xddb0d119, "target_remove_session" },
	{ 0x3e55c05d, "vhost_work_queue" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4785d140, "target_undepend_item" },
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0xeeb527d2, "vhost_add_used_and_signal" },
	{ 0x3b6b5425, "target_setup_session" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa916b694, "strnlen" },
	{ 0xe4824534, "target_unregister_template" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3a549b7c, "vhost_exceeds_weight" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xa909cfc5, "vhost_work_init" },
	{ 0x870030b2, "vhost_vq_init_access" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xc7c967a, "iov_iter_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdb82f71f, "sbitmap_init_node" },
	{ 0x98a3ba1c, "target_submit_prep" },
	{ 0x6b29fde9, "vhost_dev_init" },
	{ 0xc98cc2f, "iov_iter_advance" },
	{ 0x9aea1f81, "target_submit_tmr" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x194d4c53, "vhost_dev_stop" },
	{ 0xde23cec2, "vhost_vq_access_ok" },
	{ 0xb372cdf0, "target_execute_cmd" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88607e96, "vhost_vring_ioctl" },
	{ 0x90156afa, "target_depend_item" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0x3e5b6f64, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0xfe76b5e9, "vhost_add_used" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "target_core_mod,vhost");


MODULE_INFO(srcversion, "D1EF5E861DF8FE79E6273B1");
