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
	{ 0x9c54faf3, "xt_unregister_match" },
	{ 0x222c7940, "xt_register_match" },
	{ 0x6a41f109, "l3mdev_master_ifindex_rcu" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf784432b, "__fib_lookup" },
	{ 0xd6c5418c, "fib_info_nh_uses_dev" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x57390fa0, "fib_table_lookup" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FD1FD8911BD151855A0EDD6");
