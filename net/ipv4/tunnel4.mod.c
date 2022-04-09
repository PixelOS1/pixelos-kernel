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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8c0042bc, "inet_del_protocol" },
	{ 0x865d360, "__icmp_send" },
	{ 0xeed41d9d, "xfrm_input_register_afinfo" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xe8d92e70, "inet_add_protocol" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbabb6666, "xfrm_input_unregister_afinfo" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "32170CA64B000CA5E9607B0");
