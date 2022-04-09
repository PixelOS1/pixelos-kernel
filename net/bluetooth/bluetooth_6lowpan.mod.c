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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x319b4a4, "l2cap_chan_set_defaults" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe4345174, "single_open" },
	{ 0x9b02585d, "single_release" },
	{ 0xcceee3d2, "l2cap_chan_del" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x307eaf37, "skb_copy" },
	{ 0x4e987546, "lowpan_header_compress" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd349d253, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb65d523f, "l2cap_chan_send" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8ef0abf1, "neigh_destroy" },
	{ 0xe17c1ed4, "l2cap_add_psm" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x94216657, "seq_read" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xb3918570, "l2cap_chan_close" },
	{ 0x718b8b7, "bt_info" },
	{ 0xe197a40a, "hci_get_route" },
	{ 0xe1c1701c, "netif_rx_ni" },
	{ 0x54032dbf, "l2cap_chan_put" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0xda59b65, "free_netdev" },
	{ 0xfb8d6db5, "iov_iter_kvec" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6aea6a51, "dev_close" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xe8a32f4e, "nd_tbl" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe283cb34, "simple_attr_release" },
	{ 0x7ac90ced, "debugfs_create_file_unsafe" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6d5cd7ee, "debugfs_attr_read" },
	{ 0x5c74cbaa, "dev_open" },
	{ 0xabd6d088, "lowpan_header_decompress" },
	{ 0xdfbcf889, "module_put" },
	{ 0x128f355, "skb_copy_expand" },
	{ 0x22b241e, "lowpan_unregister_netdev" },
	{ 0xe2d3b724, "bt_debugfs" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x43d1ae9b, "l2cap_chan_connect" },
	{ 0x94d243fc, "netdev_notify_peers" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x58b4c7, "lowpan_register_netdev" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3336bc58, "l2cap_chan_create" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x246cd242, "debugfs_attr_write" },
	{ 0x45db6081, "simple_attr_open" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf32ea3d5, "try_module_get" },
};

MODULE_INFO(depends, "bluetooth,6lowpan");


MODULE_INFO(srcversion, "CA7D3D56665FD6D3EB90CB5");
