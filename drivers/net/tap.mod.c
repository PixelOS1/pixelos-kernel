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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0xf5fa5da, "cdev_del" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdf150c04, "sock_init_data" },
	{ 0xacb32f2d, "cdev_init" },
	{ 0x21365d60, "iov_iter_npages" },
	{ 0x7a875fb5, "__skb_gso_segment" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0xa70fb761, "flow_keys_basic_dissector" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x18e7429a, "__skb_flow_dissect" },
	{ 0x7296e792, "skb_copy_datagram_from_iter" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x92934a19, "sock_alloc_send_pskb" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xfe6d4d6, "skb_partial_csum_set" },
	{ 0xc4f1f918, "kfree_skb_list" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xca1dc550, "sk_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xa0bf779a, "skb_copy_datagram_iter" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x459f3f88, "skb_push" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x87f244b9, "sk_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x678735a9, "__skb_get_hash" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x920e2463, "build_skb" },
	{ 0x3b09f2ee, "cdev_add" },
	{ 0x50c84acd, "dev_set_mac_address_user" },
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3ebb99e8, "skb_checksum_help" },
	{ 0x1000e51, "schedule" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf18ae653, "dev_get_mac_address" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xc98cc2f, "iov_iter_advance" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x24e48d13, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x20978fb9, "idr_find" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xf925f7ed, "zerocopy_sg_from_iter" },
	{ 0x3e5b6f64, "_copy_to_iter" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7C4AEC0DB0BD2DCEBBCB0DD");
