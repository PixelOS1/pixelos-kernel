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
	{ 0xcb6fa2cc, "sock_diag_unregister" },
	{ 0xbdf950e3, "sock_diag_register" },
	{ 0x3d028d9a, "tipc_sk_fill_sock_diag" },
	{ 0x7955f561, "__nlmsg_put" },
	{ 0xb7fa52bc, "__netlink_dump_start" },
	{ 0xadd999cc, "tipc_dump_done" },
	{ 0xebdb4b4b, "tipc_dump_start" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x76ea5cb, "sock_diag_save_cookie" },
	{ 0xc3087ee5, "tipc_nl_sk_walk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tipc");


MODULE_INFO(srcversion, "EC86637D3E2FCE21FA28F78");
