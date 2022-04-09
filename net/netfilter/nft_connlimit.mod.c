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
	{ 0xc0cdaba2, "nft_register_expr" },
	{ 0x6b87fa26, "nft_register_obj" },
	{ 0xe78b431, "nf_ct_netns_put" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xcad2408e, "nf_ct_get_tuplepr" },
	{ 0xe59174e0, "nf_conncount_add" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7d11271e, "nla_put" },
	{ 0x858f43ff, "nf_ct_netns_get" },
	{ 0x8c4cb9c3, "nf_conncount_list_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ff55ad3, "nf_conncount_cache_free" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb5a00f45, "nf_conncount_gc_list" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack,nf_conncount");


MODULE_INFO(srcversion, "1E5581A30CA12AD01462FF1");
