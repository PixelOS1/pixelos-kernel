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
	{ 0x73fec674, "param_ops_uint" },
	{ 0x696d21d0, "seq_release_private" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x94216657, "seq_read" },
	{ 0xb5ae8690, "xt_unregister_matches" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0x3a940c80, "xt_register_matches" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x4841bdee, "strnchr" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1402aa5c, "proc_set_user" },
	{ 0x79037e4d, "proc_create_data" },
	{ 0xd99e3f8d, "make_kgid" },
	{ 0xd485a00a, "make_kuid" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0xa916b694, "strnlen" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe14c20e4, "__do_once_done" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3c08c820, "proc_mkdir" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0xd349d253, "seq_printf" },
	{ 0xcb6baf4e, "__seq_open_private" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7B5E4592A1EACD55A00FB6C");
