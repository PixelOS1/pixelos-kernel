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
	{ 0x1d77b0f8, "unix_socket_table" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x914e1fac, "sock_diag_put_meminfo" },
	{ 0xb6e5ea4e, "from_kuid_munged" },
	{ 0xcb6fa2cc, "sock_diag_unregister" },
	{ 0xc68fb0a5, "sock_i_ino" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xbdf950e3, "sock_diag_register" },
	{ 0x7d11271e, "nla_put" },
	{ 0xd8504009, "unix_peer_get" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x87f244b9, "sk_free" },
	{ 0x7d1b2c3a, "netlink_unicast" },
	{ 0xae581fa8, "unix_table_locks" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x80fc6fff, "unix_inq_len" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x24a2473, "sock_diag_check_cookie" },
	{ 0xbc6c0c5f, "unix_outq_len" },
	{ 0x76ea5cb, "sock_diag_save_cookie" },
	{ 0xcfbb8700, "nla_reserve" },
	{ 0x7955f561, "__nlmsg_put" },
	{ 0x3a9f0715, "sock_i_uid" },
	{ 0xb7fa52bc, "__netlink_dump_start" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D4B27CEE48978A9B3885A43");
