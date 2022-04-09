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
	{ 0xfa225959, "sock_no_sendpage" },
	{ 0xd0458486, "sock_no_mmap" },
	{ 0xd68a37d4, "sock_no_sendmsg" },
	{ 0x25cd7fc1, "sock_no_shutdown" },
	{ 0x23112f0a, "sock_no_listen" },
	{ 0x418dba4d, "sock_no_ioctl" },
	{ 0xce489e24, "sock_no_getname" },
	{ 0x27a82dae, "sock_no_accept" },
	{ 0x6a551a05, "sock_no_socketpair" },
	{ 0x9dd8badf, "sock_no_connect" },
	{ 0x595bcc8b, "sock_no_bind" },
	{ 0xe38d5953, "af_alg_release" },
	{ 0x22369e58, "af_alg_unregister_type" },
	{ 0x763f7f8e, "af_alg_register_type" },
	{ 0x37a0cba, "kfree" },
	{ 0x7470d684, "crypto_alloc_rng" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3e5b6f64, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb3356d1d, "crypto_stats_rng_generate" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb6f1d859, "crypto_stats_get" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0xc85451, "crypto_rng_reset" },
	{ 0xe5c8101b, "af_alg_release_parent" },
	{ 0xd11efa91, "sock_kfree_s" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xdabfa915, "sock_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C2EE585A86B2D95CD64DC74");
