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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc0cdaba2, "nft_register_expr" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x681485ba, "flow_offload_free" },
	{ 0x28674aa3, "dst_release" },
	{ 0xfcff544e, "flow_offload_add" },
	{ 0x3a194e94, "flow_offload_route_init" },
	{ 0xbe68efca, "flow_offload_alloc" },
	{ 0x7567cdf1, "nf_route" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8ef0abf1, "neigh_destroy" },
	{ 0xc9f54c0d, "dev_fill_forward_path" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7d11271e, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0x91302239, "nf_flow_table_cleanup" },
	{ 0x858f43ff, "nf_ct_netns_get" },
	{ 0xf837765f, "nft_flowtable_lookup" },
	{ 0x112380e5, "nf_tables_deactivate_flowtable" },
	{ 0xe78b431, "nf_ct_netns_put" },
	{ 0xae47eb8d, "nft_chain_validate_hooks" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_flow_table,nf_conntrack");


MODULE_INFO(srcversion, "F5EF2AD3B7FC1D88210556C");
