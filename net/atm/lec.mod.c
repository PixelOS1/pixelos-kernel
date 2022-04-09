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
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xa6b25eeb, "deregister_atm_ioctl" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0x35cac49d, "register_atm_ioctl" },
	{ 0x60db5ae0, "proc_create_seq_private" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x286a8573, "dev_set_mtu" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x28f16099, "br_fdb_test_addr_hook" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x24e48d13, "skb_put" },
	{ 0x128f355, "skb_copy_expand" },
	{ 0x459f3f88, "skb_push" },
	{ 0xf91c8bc0, "skb_realloc_headroom" },
	{ 0xda59b65, "free_netdev" },
	{ 0x133536b8, "register_netdev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0x24d273d1, "add_timer" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x80d0181, "vcc_insert_socket" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdfbcf889, "module_put" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0xd349d253, "seq_printf" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x92997ed8, "_printk" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x70ae92cb, "vcc_release_async" },
	{ 0x37a0cba, "kfree" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "A54E05E9DC4C4B24A6F27A9");
