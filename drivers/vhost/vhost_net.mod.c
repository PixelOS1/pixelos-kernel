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
	{ 0xc0ad100, "vhost_vq_avail_empty" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x68523297, "sockfd_lookup" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xee111615, "param_ops_int" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xf854f80f, "vhost_dev_check_owner" },
	{ 0x256b5bb7, "vq_meta_prefetch" },
	{ 0xe4d70be4, "vhost_poll_start" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xfff34659, "vhost_chr_poll" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe712a89b, "vhost_dev_cleanup" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xce9df4e0, "vhost_log_access_ok" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4d276695, "__page_frag_cache_drain" },
	{ 0xc02262f4, "copy_page_from_iter" },
	{ 0xd5d4d1ed, "vhost_enable_notify" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x31ca7c28, "vhost_set_backend_features" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe53663c, "vhost_dev_has_owner" },
	{ 0xc7bb0b31, "vhost_poll_flush" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x45fb579b, "vhost_disable_notify" },
	{ 0xa164df89, "misc_register" },
	{ 0xcefabccc, "vhost_dev_ioctl" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x8051b67d, "vhost_log_write" },
	{ 0x9b9e8001, "vhost_chr_read_iter" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf8b741b8, "vhost_get_vq_desc" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x8151603c, "vhost_chr_write_iter" },
	{ 0x7cfeb799, "vhost_dev_set_owner" },
	{ 0x87817c8e, "vhost_add_used_and_signal_n" },
	{ 0xfd2b3e45, "vhost_dev_reset_owner_prepare" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf0785fc6, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeeb527d2, "vhost_add_used_and_signal" },
	{ 0x726e09cb, "vhost_discard_vq_desc" },
	{ 0x7cd13307, "tun_get_socket" },
	{ 0x59f11578, "vhost_poll_queue" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3a549b7c, "vhost_exceeds_weight" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xddf2e22a, "tun_get_tx_ring" },
	{ 0x50085e9a, "vhost_poll_stop" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x870030b2, "vhost_vq_init_access" },
	{ 0x351d0340, "vhost_poll_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc7c967a, "iov_iter_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x31f6c259, "vhost_dev_reset_owner" },
	{ 0xc2154b69, "vhost_has_work" },
	{ 0x6b29fde9, "vhost_dev_init" },
	{ 0x6f3b0bf5, "fget" },
	{ 0xc98cc2f, "iov_iter_advance" },
	{ 0xb543774d, "tap_get_socket" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x194d4c53, "vhost_dev_stop" },
	{ 0xde23cec2, "vhost_vq_access_ok" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xa3db4c4, "dump_page" },
	{ 0x4099f919, "tun_ptr_free" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x81ffa2a8, "tap_get_ptr_ring" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88607e96, "vhost_vring_ioctl" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0x3e5b6f64, "_copy_to_iter" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x573bd52a, "vhost_init_device_iotlb" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "vhost,tun,tap");


MODULE_INFO(srcversion, "866AAFBD3D2275DA7DD8809");
