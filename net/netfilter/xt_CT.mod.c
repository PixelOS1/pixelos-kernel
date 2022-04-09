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
	{ 0x768db380, "xt_unregister_targets" },
	{ 0x78bbcb4b, "xt_unregister_target" },
	{ 0x6bb5996e, "xt_register_targets" },
	{ 0xc3e25ad2, "xt_register_target" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc8c68c9, "nf_ct_set_timeout" },
	{ 0x6078f9c9, "nf_ct_l4proto_find" },
	{ 0x142a9428, "nf_ct_helper_ext_add" },
	{ 0xd2b2a781, "nf_conntrack_helper_try_module_get" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa916b694, "strnlen" },
	{ 0x1f9b499f, "nf_ct_ext_add" },
	{ 0xf8803f63, "nf_ct_tmpl_free" },
	{ 0xe95e3586, "nf_ct_tmpl_alloc" },
	{ 0x858f43ff, "nf_ct_netns_get" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd06249ec, "nf_ct_destroy_timeout" },
	{ 0xe78b431, "nf_ct_netns_put" },
	{ 0xc2e5ced6, "nf_conntrack_helper_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "C013D983E5ACFDD4EEF3CFF");
