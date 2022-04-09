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
	{ 0xc97322ad, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xe4345174, "single_open" },
	{ 0x9b02585d, "single_release" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xd349d253, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x94216657, "seq_read" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x459f3f88, "skb_push" },
	{ 0xe283cb34, "simple_attr_release" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x6d5cd7ee, "debugfs_attr_read" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x942df076, "addrconf_prefix_rcv_add_addr" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x69acdf38, "memcpy" },
	{ 0x47fc0e90, "addrconf_add_linklocal" },
	{ 0xff2a036, "__ndisc_fill_addr_option" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x246cd242, "debugfs_attr_write" },
	{ 0x45db6081, "simple_attr_open" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AAC1501E99B785934BF651B");
