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
	{ 0xcea92252, "nft_unregister_expr" },
	{ 0xc61194c7, "nft_unregister_obj" },
	{ 0x6b87fa26, "nft_register_obj" },
	{ 0xc0cdaba2, "nft_register_expr" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9166fada, "strncpy" },
	{ 0x7daf5909, "nf_ct_get_id" },
	{ 0x7799899b, "nf_connlabels_replace" },
	{ 0xf88cf3ce, "init_net" },
	{ 0xa08543a1, "nf_connlabels_get" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0x8b4398ac, "nf_connlabels_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe95e3586, "nf_ct_tmpl_alloc" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6078f9c9, "nf_ct_l4proto_find" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x5320de4f, "nft_parse_register_store" },
	{ 0xdbfc5847, "nft_dump_register" },
	{ 0xd2b2a781, "nf_conntrack_helper_try_module_get" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xc2e5ced6, "nf_conntrack_helper_put" },
	{ 0x97c3271b, "nf_ct_expect_related_report" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe0745ac2, "nf_ct_expect_init" },
	{ 0x6221585b, "nf_ct_expect_alloc" },
	{ 0x142a9428, "nf_ct_helper_ext_add" },
	{ 0x13e8ed47, "__nf_ct_refresh_acct" },
	{ 0x1f9b499f, "nf_ct_ext_add" },
	{ 0x858f43ff, "nf_ct_netns_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ff8aa6d, "nf_ct_untimeout" },
	{ 0xe78b431, "nf_ct_netns_put" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7d11271e, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack");


MODULE_INFO(srcversion, "8B3CD5FCFB5D701F3AB4CD1");
