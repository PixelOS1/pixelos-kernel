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
	{ 0xd0458486, "sock_no_mmap" },
	{ 0x25cd7fc1, "sock_no_shutdown" },
	{ 0x23112f0a, "sock_no_listen" },
	{ 0x418dba4d, "sock_no_ioctl" },
	{ 0x81a06a70, "af_alg_poll" },
	{ 0xce489e24, "sock_no_getname" },
	{ 0x27a82dae, "sock_no_accept" },
	{ 0x6a551a05, "sock_no_socketpair" },
	{ 0x9dd8badf, "sock_no_connect" },
	{ 0x595bcc8b, "sock_no_bind" },
	{ 0xe38d5953, "af_alg_release" },
	{ 0x22369e58, "af_alg_unregister_type" },
	{ 0x763f7f8e, "af_alg_register_type" },
	{ 0x24bf4a8c, "af_alg_sendpage" },
	{ 0xd93a9c2c, "release_sock" },
	{ 0x3c8ab167, "af_alg_wmem_wakeup" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x87f244b9, "sk_free" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x18def21a, "crypto_aead_decrypt" },
	{ 0x98552d78, "crypto_req_done" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xf86cc83a, "af_alg_count_tsgl" },
	{ 0x3b306ed5, "crypto_aead_encrypt" },
	{ 0x9d1f502e, "af_alg_async_cb" },
	{ 0x3f60fce7, "af_alg_free_resources" },
	{ 0xda0f8fc2, "af_alg_get_rsgl" },
	{ 0xccb09294, "af_alg_alloc_areq" },
	{ 0x842ded77, "af_alg_wait_for_data" },
	{ 0xb066fc1f, "crypto_get_default_null_skcipher" },
	{ 0xa3742208, "crypto_alloc_aead" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x92b1f0de, "crypto_aead_setkey" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xdabfa915, "sock_kmalloc" },
	{ 0xe5c8101b, "af_alg_release_parent" },
	{ 0xd11efa91, "sock_kfree_s" },
	{ 0xa113b342, "sock_kzfree_s" },
	{ 0x7db6d3c, "af_alg_pull_tsgl" },
	{ 0xb6fe978, "crypto_aead_setauthsize" },
	{ 0x58dcea9a, "af_alg_sendmsg" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3776072a, "crypto_skcipher_encrypt" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F7527FE3077049D41B9471A");
