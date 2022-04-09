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
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0x4bc51a5b, "nf_log_unregister" },
	{ 0x99ab196f, "nf_log_register" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xb6e5ea4e, "from_kuid_munged" },
	{ 0xbf7b33e4, "from_kgid_munged" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x80c68137, "nf_log_buf_close" },
	{ 0xd4961de, "nf_log_buf_open" },
	{ 0x9aaeefce, "sysctl_nf_log_all_netns" },
	{ 0xf88cf3ce, "init_net" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xcd6f2dc9, "nf_log_buf_add" },
	{ 0xad6aeb61, "nf_log_set" },
	{ 0x803c026f, "nf_log_unset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2F59EA54436111778D12E6A");
