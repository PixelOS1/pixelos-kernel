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
	{ 0xdf150c04, "sock_init_data" },
	{ 0x53b954a2, "up_read" },
	{ 0x7e478053, "kernel_sendmsg" },
	{ 0x68523297, "sockfd_lookup" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xce489e24, "sock_no_getname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x64ce6e62, "bt_sock_register" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xd0458486, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x850ab1fa, "sock_no_recvmsg" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd3cb7d10, "bt_sock_unlink" },
	{ 0xe1c1701c, "netif_rx_ni" },
	{ 0x6a551a05, "sock_no_socketpair" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xca1dc550, "sk_alloc" },
	{ 0xc23477d, "current_task" },
	{ 0x301e3193, "l2cap_is_socket" },
	{ 0x595bcc8b, "sock_no_bind" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0xda59b65, "free_netdev" },
	{ 0x133536b8, "register_netdev" },
	{ 0x23112f0a, "sock_no_listen" },
	{ 0x27a82dae, "sock_no_accept" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x87f244b9, "sk_free" },
	{ 0xc7132b2c, "__module_put_and_kthread_exit" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0xf0785fc6, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x25cd7fc1, "sock_no_shutdown" },
	{ 0xe96ebd33, "bt_sock_link" },
	{ 0xdfbcf889, "module_put" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x15950b0c, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6799d664, "proto_unregister" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x86814848, "ether_setup" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9dd8badf, "sock_no_connect" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4df02057, "crc32_be" },
	{ 0xd68a37d4, "sock_no_sendmsg" },
	{ 0x8fc84473, "set_user_nice" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xc1b58d72, "bt_procfs_init" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe81f9dc, "bt_procfs_cleanup" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "CA376B0968EFEC42152B4B9");
