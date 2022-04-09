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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x56470118, "__warn_printk" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8d522714, "__rcu_read_lock" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D2E9CC5201E10B15CF06785");
