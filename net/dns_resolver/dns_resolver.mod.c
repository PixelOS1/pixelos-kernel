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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x53b954a2, "up_read" },
	{ 0x968a6465, "key_invalidate" },
	{ 0x754d539c, "strlen" },
	{ 0x2f7625b4, "prepare_kernel_cred" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xd349d253, "seq_printf" },
	{ 0x2c913f97, "generic_key_instantiate" },
	{ 0x3e0d03b7, "request_key_tag" },
	{ 0x9d848689, "user_read" },
	{ 0x777a47ff, "override_creds" },
	{ 0x668b19a1, "down_read" },
	{ 0x1deb7ad8, "key_validate" },
	{ 0x3df4f3a, "key_revoke" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xc23477d, "current_task" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0xa07a37f0, "memchr" },
	{ 0x9c90320f, "key_put" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x92997ed8, "_printk" },
	{ 0xed238617, "__put_cred" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xccd86fac, "keyring_alloc" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xca4dfe81, "register_key_type" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x46f1dcbd, "unregister_key_type" },
	{ 0x9319b3e1, "user_revoke" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x52f7dc5d, "user_destroy" },
	{ 0xf0a71b1b, "revert_creds" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7E8AC35457F8E29FE17B74B");
