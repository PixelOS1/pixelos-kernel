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
	{ 0x64141d04, "nf_ct_unexpect_related" },
	{ 0x45124ee4, "nf_conntrack_helper_register" },
	{ 0x248a5d91, "nf_ct_gre_keymap_add" },
	{ 0x80c74fe5, "nf_conntrack_helper_unregister" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe0745ac2, "nf_ct_expect_init" },
	{ 0x8cdbdc97, "nf_ct_delete" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0x1b6f3cc7, "nf_ct_expect_find_get" },
	{ 0x863b730a, "nf_ct_expect_put" },
	{ 0x6221585b, "nf_ct_expect_alloc" },
	{ 0x97c3271b, "nf_ct_expect_related_report" },
	{ 0xf57f6e76, "nf_ct_gre_keymap_destroy" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xb4cc190b, "nf_conntrack_find_get" },
	{ 0x1f9b499f, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "7A068D945736463742415AE");
