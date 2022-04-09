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
	{ 0x898940c7, "__SCK__tp_func_xdp_exception" },
	{ 0x638464eb, "__SCK__tp_func_xdp_bulk_tx" },
	{ 0x492698f8, "ethtool_op_get_ts_info" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x6d5ae3e7, "passthru_features_check" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0xb9681621, "xdp_do_flush" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xe976686e, "bpf_redirect_info" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x8fa9d9e8, "__SCT__tp_func_xdp_exception" },
	{ 0xa4b78250, "__tracepoint_xdp_exception" },
	{ 0xbdb80958, "bpf_warn_invalid_xdp_action" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x8f8fabb5, "xdp_master_redirect" },
	{ 0xcfab2e53, "xdp_do_redirect" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x146cc88f, "bpf_master_redirect_enabled_key" },
	{ 0x6f8f674a, "bpf_dispatcher_xdp_func" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x2d25afef, "skb_headers_offset_update" },
	{ 0xdb5721fe, "skb_copy_header" },
	{ 0x24e48d13, "skb_put" },
	{ 0x920e2463, "build_skb" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xda59b65, "free_netdev" },
	{ 0x928aab17, "__put_net" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x666fb8d9, "rtnl_configure_link" },
	{ 0xc97322ad, "register_netdevice" },
	{ 0x18c091fd, "rtnl_create_link" },
	{ 0xb2be6ed2, "rtnl_link_get_net" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x84c03e9a, "rtnl_nla_parse_ifla" },
	{ 0xbb7195a5, "xdp_warn" },
	{ 0xfd59037c, "xdp_convert_zc_to_xdp_frame" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x872d4f7c, "__SCT__tp_func_xdp_bulk_tx" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4d7a4acf, "__tracepoint_xdp_bulk_tx" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xa64a5b60, "skb_tstamp_tx" },
	{ 0x2d9e887e, "sock_wfree" },
	{ 0xdd4ccfbb, "__dev_forward_skb" },
	{ 0xd0bb7cfa, "skb_clone_tx_timestamp" },
	{ 0x5a0b3dfd, "dev_lstats_read" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x8ce7e22e, "netdev_update_features" },
	{ 0x755869f2, "bpf_prog_put" },
	{ 0xd51624c7, "xdp_rxq_info_is_reg" },
	{ 0x92997ed8, "_printk" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x42a6f0, "netif_set_real_num_tx_queues" },
	{ 0x1da2875e, "netif_set_real_num_rx_queues" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x2ecbb06b, "netdev_features_change" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xa055cec3, "__xdp_build_skb_from_frame" },
	{ 0xe23272fa, "napi_gro_receive" },
	{ 0xd91dbd1f, "xdp_alloc_skb_bulk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5338184f, "ethtool_sprintf" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0xf3086ff4, "xdp_rxq_info_unreg" },
	{ 0xca41538, "xdp_rxq_info_reg" },
	{ 0xf9d27eeb, "xdp_rxq_info_reg_mem_model" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x26859bbb, "xdp_return_frame" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0x86814848, "ether_setup" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8079064088C411E46ADE967");
