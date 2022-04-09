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
	{ 0xa85f307b, "virtio_transport_recv_pkt" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa712dce0, "virtio_transport_destruct" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x9cb82b80, "virtio_transport_notify_buffer_size" },
	{ 0xf854f80f, "vhost_dev_check_owner" },
	{ 0x256b5bb7, "vq_meta_prefetch" },
	{ 0x9407d9f, "virtio_transport_notify_send_pre_block" },
	{ 0x1ca4df19, "virtio_transport_stream_has_space" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x9f739683, "virtio_transport_notify_poll_in" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xfff34659, "vhost_chr_poll" },
	{ 0xb4faeabc, "virtio_transport_do_socket_init" },
	{ 0x5887743, "virtio_transport_stream_is_active" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe712a89b, "vhost_dev_cleanup" },
	{ 0xce9df4e0, "vhost_log_access_ok" },
	{ 0xb6943066, "virtio_transport_deliver_tap_pkt" },
	{ 0xd5d4d1ed, "vhost_enable_notify" },
	{ 0xaff799cf, "vhost_work_dev_flush" },
	{ 0x31ca7c28, "vhost_set_backend_features" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0xdeccda6e, "virtio_transport_notify_recv_post_dequeue" },
	{ 0xd5e50635, "virtio_transport_notify_poll_out" },
	{ 0xc7bb0b31, "vhost_poll_flush" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x45fb579b, "vhost_disable_notify" },
	{ 0xa164df89, "misc_register" },
	{ 0x1959e748, "vhost_signal" },
	{ 0xcefabccc, "vhost_dev_ioctl" },
	{ 0x5ca25fbf, "vsock_core_register" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x1f774cdb, "vsock_core_unregister" },
	{ 0x62458e38, "virtio_transport_stream_dequeue" },
	{ 0x9b9e8001, "vhost_chr_read_iter" },
	{ 0xa979df62, "virtio_transport_stream_enqueue" },
	{ 0x5ed9254, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0x7371192, "virtio_transport_seqpacket_has_data" },
	{ 0xeeff5c86, "virtio_transport_seqpacket_enqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf8b741b8, "vhost_get_vq_desc" },
	{ 0x3b52e25b, "virtio_transport_seqpacket_dequeue" },
	{ 0xcf55679c, "virtio_transport_notify_send_pre_enqueue" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x8151603c, "vhost_chr_write_iter" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3e55c05d, "vhost_work_queue" },
	{ 0x9306bfd8, "virtio_transport_notify_send_init" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0x59f11578, "vhost_poll_queue" },
	{ 0xf9630038, "virtio_transport_dgram_dequeue" },
	{ 0x68a2fa3, "virtio_transport_notify_send_post_enqueue" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3a549b7c, "vhost_exceeds_weight" },
	{ 0xc1462aae, "virtio_transport_shutdown" },
	{ 0xb1e5e175, "virtio_transport_dgram_enqueue" },
	{ 0xa909cfc5, "vhost_work_init" },
	{ 0x870030b2, "vhost_vq_init_access" },
	{ 0xaf37ad10, "virtio_transport_notify_recv_pre_block" },
	{ 0x9fa69b02, "sk_error_report" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xe9d3a965, "virtio_transport_free_pkt" },
	{ 0x8546a637, "virtio_transport_dgram_bind" },
	{ 0xc7c967a, "iov_iter_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc2d5d1d, "virtio_transport_stream_rcvhiwat" },
	{ 0x6b29fde9, "vhost_dev_init" },
	{ 0x194d4c53, "vhost_dev_stop" },
	{ 0xde23cec2, "vhost_vq_access_ok" },
	{ 0x42fd72b5, "virtio_transport_stream_has_data" },
	{ 0xaf09616f, "virtio_transport_connect" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x84b30535, "vsock_for_each_connected_socket" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88607e96, "vhost_vring_ioctl" },
	{ 0x90aa8549, "vsock_find_cid" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0x3e5b6f64, "_copy_to_iter" },
	{ 0x66e4944, "virtio_transport_release" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x573bd52a, "vhost_init_device_iotlb" },
	{ 0x370b4bfe, "virtio_transport_notify_recv_init" },
	{ 0xfe76b5e9, "vhost_add_used" },
};

MODULE_INFO(depends, "vmw_vsock_virtio_transport_common,vhost,vsock");


MODULE_INFO(srcversion, "F195FFCF4B96939B09D112C");
