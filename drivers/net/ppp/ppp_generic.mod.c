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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xff80ab3, "skb_queue_head" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf6f4b529, "bpf_prog_create" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x215a8ec8, "slhc_init" },
	{ 0x90ce49bd, "device_destroy" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xf102033e, "slhc_remember" },
	{ 0x3be38d4c, "__register_chrdev" },
	{ 0x1f63e366, "bpf_prog_destroy" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x85fbc931, "slhc_uncompress" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x928aab17, "__put_net" },
	{ 0x85269c10, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x668b19a1, "down_read" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xc23477d, "current_task" },
	{ 0xa0bf779a, "skb_copy_datagram_iter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0x9487d3e1, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xda59b65, "free_netdev" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1a7401c8, "netdev_printk" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x4dce8ff3, "device_create" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xf0785fc6, "fput" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0xe5bc9a53, "slhc_free" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xdfbcf889, "module_put" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xb7dac8ac, "netdev_name_in_use" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xff2d96f4, "skb_pull_rcsum" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc7c967a, "iov_iter_init" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6f3b0bf5, "fget" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0x6c8f2de, "slhc_compress" },
	{ 0x4195254f, "class_destroy" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x24e48d13, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x20978fb9, "idr_find" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x1aafecfe, "__class_create" },
	{ 0x6405dcd3, "slhc_toss" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf32ea3d5, "try_module_get" },
};

MODULE_INFO(depends, "slhc");


MODULE_INFO(srcversion, "71F218A9F7E60D27282E528");
