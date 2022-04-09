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
	{ 0xf1ae2f13, "ip_set_type_unregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x3d71c713, "ip_set_type_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x62215058, "ip_set_init_comment" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7d622ef8, "ip_set_match_extensions" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x92997ed8, "_printk" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xfda270a7, "ip_set_put_extensions" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc33a661c, "ip_set_extensions" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x98be4915, "ip_set_get_ip6_port" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x37a0cba, "kfree" },
	{ 0x397f6231, "ip_set_free" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x85250cef, "ip_set_elem_len" },
	{ 0xf3b4d4ae, "ip_set_alloc" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x57769591, "ip_set_get_ip4_port" },
	{ 0x7924b6de, "ip_set_hostmask_map" },
	{ 0xa293f8a6, "ip_set_get_ipaddr4" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2ea22bee, "ip_set_get_extensions" },
	{ 0x9e98722b, "ip_set_get_ipaddr6" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf0b134ec, "ip_set_put_flags" },
	{ 0x7d11271e, "nla_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "701B6041D7A85FF16F0CC7F");
