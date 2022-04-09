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
	{ 0x54d80dad, "cxgbi_ppm_ppods_reserve" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd931638b, "__kfree_skb" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa2df3cd, "iscsi_host_remove" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0x33cf3513, "iscsi_tcp_set_max_r2t" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x451d9cad, "cxgbi_ppm_ppod_release" },
	{ 0xd0ea4f86, "iscsi_tcp_recv_skb" },
	{ 0x28674aa3, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe2e1d20f, "pci_dev_get" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x4b5a413, "iscsi_unregister_transport" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0xf660caf5, "iscsi_session_teardown" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8ef0abf1, "neigh_destroy" },
	{ 0x9753f9e6, "iscsi_host_add" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8736dbba, "iscsi_host_alloc" },
	{ 0x4087f8dd, "iscsi_lookup_endpoint" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6f9a7716, "iscsi_tcp_r2tpool_free" },
	{ 0x96aae811, "iscsi_itt_to_ctask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc23477d, "current_task" },
	{ 0xaf46a337, "cxgbi_ppm_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xba121ed4, "iscsi_tcp_r2tpool_alloc" },
	{ 0xb5ecec2, "iscsi_host_set_param" },
	{ 0xbe6021ec, "iscsi_host_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xa998ae7d, "iscsi_destroy_endpoint" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x81533963, "sysfs_format_mac" },
	{ 0x726ce6ec, "iscsi_tcp_conn_setup" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x47b47c05, "vlan_dev_real_dev" },
	{ 0x478c66d5, "ipv6_dev_get_saddr" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x33e668f4, "iscsi_set_param" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdfbcf889, "module_put" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x7ec60e66, "ip6_route_output_flags" },
	{ 0xd485a00a, "make_kuid" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xcb6b92d7, "iscsi_register_transport" },
	{ 0x642dc039, "iscsi_tcp_cleanup_task" },
	{ 0x92997ed8, "_printk" },
	{ 0xc0820b4d, "iscsi_conn_queue_work" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbc96e96c, "iscsi_tcp_hdr_recv_prep" },
	{ 0x54f3371, "cxgbi_ppm_release" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x78eafc1a, "iscsi_conn_failure" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xc09f0993, "iscsi_create_endpoint" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3dce5d9, "__ip_dev_find" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x4036c508, "iscsi_session_setup" },
	{ 0x45c25bc7, "iscsi_host_get_param" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcf1fda2a, "iscsi_conn_bind" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xdbb1f354, "iscsi_put_endpoint" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xa3db4c4, "dump_page" },
	{ 0x224657d7, "iscsi_tcp_recv_segment_is_hdr" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x24e48d13, "skb_put" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x2e8b190, "cxgbi_ppm_make_ppod_hdr" },
};

MODULE_INFO(depends, "libcxgb,libiscsi,libiscsi_tcp,scsi_transport_iscsi");


MODULE_INFO(srcversion, "92D3742A305594C6993BC92");
