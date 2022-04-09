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
	{ 0xe0b7b8ff, "ib_set_device_ops" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x2ebb19fd, "execute_in_process_context" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4a2b435b, "ipv4_dst_check" },
	{ 0xc9ede2c1, "crypto_alloc_shash" },
	{ 0x349cba85, "strchr" },
	{ 0x744cc79f, "ib_device_put" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x3fe7a141, "dev_get_flags" },
	{ 0x7bbd139b, "remap_vmalloc_range" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xaffb0b75, "ib_get_eth_speed" },
	{ 0xa05726b4, "rdma_get_gid_attr" },
	{ 0xdfa6106a, "ip_local_out" },
	{ 0xa5f2b1f7, "vlan_dev_vlan_id" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x7650c19b, "sock_release" },
	{ 0x28674aa3, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6ece8090, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x8917f00c, "rdma_link_register" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd65e4b2a, "sock_create_kern" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4806828e, "rdma_link_unregister" },
	{ 0x85269c10, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4094f035, "udp_sock_create6" },
	{ 0x45ef50b6, "setup_udp_tunnel_sock" },
	{ 0x2b283c36, "ib_dealloc_device" },
	{ 0xe0bec3ba, "dev_mc_add" },
	{ 0xf617dd4c, "ib_unregister_device_queued" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2c309f61, "udp_tunnel_sock_release" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x3caad30b, "crypto_shash_update" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xfcda5886, "dev_mc_del" },
	{ 0x4925daa7, "ib_query_port" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x7c9ca58f, "__sg_page_iter_next" },
	{ 0x82b24054, "kernel_sock_shutdown" },
	{ 0x4845be4e, "ib_umem_get" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x71a330d6, "ib_device_set_netdev" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x32f0f57c, "rdma_put_gid_attr" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xcfbc053b, "ib_unregister_driver" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xd90ad6b3, "ipv6_stub" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x47b47c05, "vlan_dev_real_dev" },
	{ 0xf0506269, "ib_dispatch_event" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x41ce123c, "ib_device_get_by_netdev" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d6e31a2, "ib_register_device" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5bd92059, "rdma_read_gid_attr_ndev_rcu" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x86f86292, "_ib_alloc_device" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xd3354a6, "rdma_alloc_hw_stats_struct" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x965bfe42, "ib_sg_to_pages" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x73baf9a2, "ib_modify_qp_is_ok" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xd071739c, "udp_sock_create4" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x49269236, "ip6_local_out" },
	{ 0x451c7db0, "rdma_find_gid_by_port" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x24e48d13, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xaab4ecdb, "ib_umem_release" },
	{ 0x6658a4f9, "ip6_dst_check" },
	{ 0x8ddc6a19, "__ip_select_ident" },
};

MODULE_INFO(depends, "ib_core,ip6_udp_tunnel,udp_tunnel,ib_uverbs");


MODULE_INFO(srcversion, "42D51A4BFB0F362D7F6ECE6");
