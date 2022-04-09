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
	{ 0xd76c28e3, "inet_diag_unregister" },
	{ 0x1e9a6473, "inet_diag_register" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfb578fc5, "memset" },
	{ 0xcfbb8700, "nla_reserve" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xa916b694, "strnlen" },
	{ 0x7d11271e, "nla_put" },
	{ 0x7fc7b9b7, "inet_diag_dump_icsk" },
	{ 0xd16cf197, "inet_diag_dump_one_icsk" },
	{ 0x73e4b0ad, "tcp_get_info" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd2ee7396, "sock_gen_put" },
	{ 0x6b39dd44, "sock_diag_destroy" },
	{ 0xb774753, "inet_diag_find_one_icsk" },
	{ 0x463219fb, "tcp_hashinfo" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "inet_diag");


MODULE_INFO(srcversion, "99724035650F8E1CF79510D");
