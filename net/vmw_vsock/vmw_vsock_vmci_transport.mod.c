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
	{ 0x2d3385d3, "system_wq" },
	{ 0xd93a9c2c, "release_sock" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x56837fb, "vmci_get_context_id" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0x6c2bbb7, "vsock_assign_transport" },
	{ 0xe11895c1, "vmci_event_unsubscribe" },
	{ 0x24924f89, "vsock_create_connected" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x5af45a14, "vmci_qpair_enquev" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8188569b, "vsock_add_pending" },
	{ 0x61f5966b, "vmci_qpair_dequev" },
	{ 0x801ba6fd, "skb_recv_datagram" },
	{ 0x612df9ae, "vmci_qpair_detach" },
	{ 0x1c814915, "vsock_stream_has_space" },
	{ 0x78e30751, "vsock_find_connected_socket" },
	{ 0x787f0fe8, "vmci_register_vsock_callback" },
	{ 0xe0cc9c92, "vmci_qpair_alloc" },
	{ 0x5ca25fbf, "vsock_core_register" },
	{ 0xa0bf779a, "skb_copy_datagram_iter" },
	{ 0xdefa79a1, "vsock_stream_has_data" },
	{ 0x46dd187, "vmci_datagram_create_handle" },
	{ 0xc403cafe, "vmci_is_context_owner" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0xae831f4f, "vmci_qpair_peekv" },
	{ 0x1f774cdb, "vsock_core_unregister" },
	{ 0x676bd843, "vmci_qpair_consume_free_space" },
	{ 0xaf2674b5, "vsock_addr_equals_addr" },
	{ 0x87f244b9, "sk_free" },
	{ 0xc04c7e84, "vmci_qpair_get_consume_indexes" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa341a1d0, "__sk_receive_skb" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4b99648c, "vsock_addr_bound" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x28644082, "vsock_remove_pending" },
	{ 0x3d4b0fca, "vsock_addr_init" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x24d14bc, "vmci_qpair_produce_free_space" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c870f12, "vsock_find_bound_socket" },
	{ 0x85b4afa9, "vsock_remove_connected" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x9fa69b02, "sk_error_report" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xea143610, "vmci_datagram_send" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x2449459d, "vmci_event_subscribe" },
	{ 0x37a0cba, "kfree" },
	{ 0xea61eefe, "vmci_qpair_produce_buf_ready" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdc226e93, "vsock_remove_sock" },
	{ 0x3a22fa8a, "vmci_datagram_destroy_handle" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x84b30535, "vsock_for_each_connected_socket" },
	{ 0x24e48d13, "skb_put" },
	{ 0x7c74d7a6, "vmci_qpair_consume_buf_ready" },
	{ 0x1fd4782d, "vmci_qpair_get_produce_indexes" },
	{ 0x3df57158, "vsock_insert_connected" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x5591b58e, "vmci_context_get_priv_flags" },
	{ 0xde3abc2e, "vmci_datagram_create_handle_priv" },
	{ 0xfd6c3908, "skb_free_datagram" },
	{ 0xf8f63bed, "vsock_enqueue_accept" },
};

MODULE_INFO(depends, "vmw_vmci,vsock");


MODULE_INFO(srcversion, "89DB33F611DB20AB01684D7");
