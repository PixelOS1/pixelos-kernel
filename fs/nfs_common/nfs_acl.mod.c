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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0xde908e5c, "xdr_stream_pos" },
	{ 0xeedf5aa1, "xdr_decode_word" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0x8a9dbf07, "xdr_encode_array2" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x236b3d01, "xdr_reserve_space" },
	{ 0xd99e3f8d, "make_kgid" },
	{ 0xbf59c419, "posix_acl_init" },
	{ 0xdc106e93, "xdr_encode_word" },
	{ 0x6aa99869, "from_kuid" },
	{ 0x24a578b0, "from_kgid" },
	{ 0x9b496b21, "posix_acl_alloc" },
	{ 0xb7c0f443, "sort" },
	{ 0xd485a00a, "make_kuid" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa88de58b, "xdr_inline_decode" },
	{ 0xb0e602eb, "memmove" },
	{ 0x9a34040e, "xdr_decode_array2" },
};

MODULE_INFO(depends, "sunrpc");


MODULE_INFO(srcversion, "1F1B1CE4983D855AB3967E3");
