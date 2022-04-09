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
	{ 0x891e9d93, "unregister_tcf_proto_ops" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x9ecb755d, "register_tcf_proto_ops" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xcac320d3, "__dev_get_by_index" },
	{ 0x7412dc77, "tcf_exts_dump_stats" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3704c8d5, "tcf_exts_dump" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x7d11271e, "nla_put" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1e652bf1, "__dev_get_by_name" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x90b8afbe, "tcf_exts_validate_ex" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x92997ed8, "_printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xe0089ab0, "tcf_action_exec" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x928aab17, "__put_net" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0x851c40a4, "tcf_exts_destroy" },
	{ 0x187953f6, "tc_setup_cb_call" },
	{ 0x8c38d7e8, "tc_setup_cb_reoffload" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xf8adb67e, "tc_setup_cb_add" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xcae1415, "tc_setup_cb_destroy" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D085B55F13CD0016F16D6EA");
