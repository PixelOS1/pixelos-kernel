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
	{ 0xc1462aae, "virtio_transport_shutdown" },
	{ 0x9cb82b80, "virtio_transport_notify_buffer_size" },
	{ 0x68a2fa3, "virtio_transport_notify_send_post_enqueue" },
	{ 0xcf55679c, "virtio_transport_notify_send_pre_enqueue" },
	{ 0x9407d9f, "virtio_transport_notify_send_pre_block" },
	{ 0x9306bfd8, "virtio_transport_notify_send_init" },
	{ 0xdeccda6e, "virtio_transport_notify_recv_post_dequeue" },
	{ 0x5ed9254, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0xaf37ad10, "virtio_transport_notify_recv_pre_block" },
	{ 0x370b4bfe, "virtio_transport_notify_recv_init" },
	{ 0xd5e50635, "virtio_transport_notify_poll_out" },
	{ 0x9f739683, "virtio_transport_notify_poll_in" },
	{ 0x7371192, "virtio_transport_seqpacket_has_data" },
	{ 0xeeff5c86, "virtio_transport_seqpacket_enqueue" },
	{ 0x3b52e25b, "virtio_transport_seqpacket_dequeue" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0x5887743, "virtio_transport_stream_is_active" },
	{ 0xcc2d5d1d, "virtio_transport_stream_rcvhiwat" },
	{ 0x1ca4df19, "virtio_transport_stream_has_space" },
	{ 0x42fd72b5, "virtio_transport_stream_has_data" },
	{ 0xa979df62, "virtio_transport_stream_enqueue" },
	{ 0x62458e38, "virtio_transport_stream_dequeue" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0xb1e5e175, "virtio_transport_dgram_enqueue" },
	{ 0xf9630038, "virtio_transport_dgram_dequeue" },
	{ 0x8546a637, "virtio_transport_dgram_bind" },
	{ 0xaf09616f, "virtio_transport_connect" },
	{ 0x66e4944, "virtio_transport_release" },
	{ 0xa712dce0, "virtio_transport_destruct" },
	{ 0xb4faeabc, "virtio_transport_do_socket_init" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x1f774cdb, "vsock_core_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5ca25fbf, "vsock_core_register" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xe9d3a965, "virtio_transport_free_pkt" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa85f307b, "virtio_transport_recv_pkt" },
	{ 0xb6943066, "virtio_transport_deliver_tap_pkt" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "vmw_vsock_virtio_transport_common,vsock");


MODULE_INFO(srcversion, "41A01488BD9B33EB91C6BC9");
