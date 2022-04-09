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
	{ 0xc97322ad, "register_netdevice" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x37037400, "skb_to_sgvec" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xfefa012f, "genl_register_family" },
	{ 0x14d481bb, "dev_mc_unsync" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xe8edfbf3, "genl_unregister_family" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xe6dedd78, "dev_uc_add" },
	{ 0xcf6f7e4c, "netdev_rx_handler_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x307eaf37, "skb_copy" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x226dedf6, "dev_set_allmulti" },
	{ 0x31646171, "linkwatch_fire_event" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xff607c6c, "skb_cow_data" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x7d11271e, "nla_put" },
	{ 0x24d22fd, "netdev_upper_dev_unlink" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x70b5254c, "gro_cells_receive" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x2d7dfc73, "netif_stacked_transfer_operstate" },
	{ 0x3b306ed5, "crypto_aead_encrypt" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0xcac320d3, "__dev_get_by_index" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x92b1f0de, "crypto_aead_setkey" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x128f355, "skb_copy_expand" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa25fce3f, "netdev_rx_handler_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x21ce3ed1, "dev_fetch_sw_netstats" },
	{ 0xaaeda4d8, "netdev_upper_dev_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x86814848, "ether_setup" },
	{ 0x61b84239, "dev_uc_unsync" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0x18def21a, "crypto_aead_decrypt" },
	{ 0xb6fe978, "crypto_aead_setauthsize" },
	{ 0xe0a6df90, "gro_cells_init" },
	{ 0xa3742208, "crypto_alloc_aead" },
	{ 0x3355c055, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4ea591a4, "___pskb_trim" },
	{ 0xfc10662e, "genlmsg_put" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0xfaba4644, "dev_uc_del" },
	{ 0x89ffe9c9, "dev_uc_sync" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0xb0e602eb, "memmove" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x8ce7e22e, "netdev_update_features" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x24e48d13, "skb_put" },
	{ 0x5f54348c, "dev_mc_sync" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x286a8573, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "98A730E71C6CBA90C937F2B");
