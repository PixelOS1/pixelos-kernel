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
	{ 0xc8a016aa, "param_ops_string" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x49ad35e8, "configfs_unregister_subsystem" },
	{ 0x63caa65f, "unregister_console" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x22b63fdd, "configfs_register_subsystem" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1b7be489, "config_group_init" },
	{ 0x85df9b6c, "strsep" },
	{ 0xa8a62d56, "netpoll_parse_options" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xba8305fa, "config_item_init_type_name" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x96848186, "scnprintf" },
	{ 0xa07a37f0, "memchr" },
	{ 0x6888f437, "netpoll_send_udp" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x188b6bbb, "register_console" },
	{ 0x3ee68e98, "netpoll_cleanup" },
	{ 0x84bfc6fe, "netpoll_setup" },
	{ 0x923a95b6, "netpoll_print_options" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x4841bdee, "strnchr" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x754d539c, "strlen" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x652032cb, "mac_pton" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x9015d2c, "__netpoll_cleanup" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xec01f426, "config_item_put" },
	{ 0x24f6dc43, "config_item_get" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "configfs");


MODULE_INFO(srcversion, "6331C152F59CB4C88694F34");
