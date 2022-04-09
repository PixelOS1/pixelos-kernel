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
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x94216657, "seq_read" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0x78bbcb4b, "xt_unregister_target" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc3e25ad2, "xt_register_target" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x79037e4d, "proc_create_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd9843f58, "nf_register_net_hook" },
	{ 0xa916b694, "strnlen" },
	{ 0x858f43ff, "nf_ct_netns_get" },
	{ 0x993d18e7, "nf_unregister_net_hook" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe78b431, "nf_ct_netns_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5e06bc5c, "refcount_dec_and_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7da295e7, "seq_release" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa6b9a850, "seq_open" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x92997ed8, "_printk" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3c08c820, "proc_mkdir" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0xd349d253, "seq_printf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x37a0cba, "kfree" },
	{ 0xd69e4840, "dev_get_by_name" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbc208b44, "proc_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe0bec3ba, "dev_mc_add" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xfcda5886, "dev_mc_del" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "815ED0986C727050296B17D");
