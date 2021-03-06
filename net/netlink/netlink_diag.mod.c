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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0x914e1fac, "sock_diag_put_meminfo" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0xcb6fa2cc, "sock_diag_unregister" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xc68fb0a5, "sock_i_ino" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xbdf950e3, "sock_diag_register" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x7d11271e, "nla_put" },
	{ 0x6f406399, "nl_table" },
	{ 0xa731f387, "nl_table_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0x37a0cba, "kfree" },
	{ 0x76ea5cb, "sock_diag_save_cookie" },
	{ 0x7955f561, "__nlmsg_put" },
	{ 0xb7fa52bc, "__netlink_dump_start" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3B4F6D51AC00C115A4E10B5");
