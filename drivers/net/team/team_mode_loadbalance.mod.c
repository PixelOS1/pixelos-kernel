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
	{ 0x122a7975, "team_mode_unregister" },
	{ 0xf79a7178, "team_mode_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x652cb397, "netpoll_send_skb" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x5012a70, "pv_ops" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf6f4b529, "bpf_prog_create" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x62721d60, "team_options_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x1f63e366, "bpf_prog_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb361d2e2, "team_options_unregister" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x730ccff, "team_options_change_check" },
	{ 0xe65ff8af, "team_option_inst_set_change" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "team");


MODULE_INFO(srcversion, "88C93B99D0E7E923E959ADC");
