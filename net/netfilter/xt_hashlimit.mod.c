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
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0xb5ae8690, "xt_unregister_matches" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x3a940c80, "xt_register_matches" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x7f489ecf, "ipv6_skip_exthdr" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd349d253, "seq_printf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0x92997ed8, "_printk" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x60db5ae0, "proc_create_seq_private" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xfb578fc5, "memset" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x99f7371c, "refcount_dec_and_mutex_lock" },
	{ 0x999e8297, "vfree" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0x3c08c820, "proc_mkdir" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1B252D4060FF09CC633A32A");
