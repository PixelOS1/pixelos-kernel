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
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8eb10ecb, "xt_unregister_table" },
	{ 0xa7c94f1d, "xt_compat_lock" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xba7c6e9d, "xt_check_target" },
	{ 0x3a940c80, "xt_register_matches" },
	{ 0x162db70e, "xt_compat_match_offset" },
	{ 0x9c995c69, "xt_percpu_counter_alloc" },
	{ 0x431c7d7a, "xt_compat_target_to_user" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xd87ae60d, "xt_check_entry_offsets" },
	{ 0x1b520c7b, "xt_proto_fini" },
	{ 0x3820c308, "xt_table_unlock" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x93bded94, "xt_compat_target_offset" },
	{ 0xcb3e91cc, "xt_counters_alloc" },
	{ 0x999e8297, "vfree" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x9fae43fd, "xt_find_table_lock" },
	{ 0xfd8bfe38, "ipv6_find_hdr" },
	{ 0xad46bafc, "xt_replace_table" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x46b44b9e, "xt_proto_init" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf2e56a35, "xt_register_table" },
	{ 0xd9bb821b, "xt_copy_counters" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x3af04345, "xt_target_to_user" },
	{ 0xd7f5fcd, "xt_alloc_entry_offsets" },
	{ 0xa13c0dca, "xt_compat_match_to_user" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0xc23477d, "current_task" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa25fc115, "xt_compat_check_entry_offsets" },
	{ 0x56f6cc03, "nf_unregister_net_hooks" },
	{ 0x9487d3e1, "ns_capable" },
	{ 0x6bb5996e, "xt_register_targets" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf9f026af, "xt_compat_target_from_user" },
	{ 0x9166fada, "strncpy" },
	{ 0xa7384416, "nf_log_trace" },
	{ 0x4e27719, "xt_compat_flush_offsets" },
	{ 0xc7fae024, "xt_compat_calc_jump" },
	{ 0x807d2b2c, "xt_recseq" },
	{ 0x768db380, "xt_unregister_targets" },
	{ 0x50873741, "xt_compat_init_offsets" },
	{ 0xdfbcf889, "module_put" },
	{ 0x823edea5, "xt_compat_add_offset" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0x5d43f717, "nf_register_net_hooks" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe9c5af57, "nf_unregister_sockopt" },
	{ 0x92997ed8, "_printk" },
	{ 0xd3fcc511, "xt_tee_enabled" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x966f3b55, "xt_request_find_match" },
	{ 0xcef6459, "xt_request_find_table_lock" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd801a08a, "xt_find_table" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xb5ae8690, "xt_unregister_matches" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x8b182b83, "xt_request_find_target" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x57a203d4, "xt_compat_match_from_user" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7b9019dd, "xt_check_match" },
	{ 0xfef779fa, "xt_find_jump_offset" },
	{ 0x3bf9d084, "xt_check_table_hooks" },
	{ 0xbfacb837, "xt_percpu_counter_free" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x5cb584df, "nf_register_sockopt" },
	{ 0x977fd4bf, "xt_alloc_table_info" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xceb90626, "xt_match_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xe204e042, "xt_free_table_info" },
	{ 0xd1e246a2, "xt_compat_unlock" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BA2C43BA24270885DB9D1BD");
