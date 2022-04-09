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
	{ 0x122a7975, "team_mode_unregister" },
	{ 0xf79a7178, "team_mode_register" },
	{ 0x652cb397, "netpoll_send_skb" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x5012a70, "pv_ops" },
	{ 0xe65ff8af, "team_option_inst_set_change" },
	{ 0x62721d60, "team_options_register" },
	{ 0xb361d2e2, "team_options_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "team");


MODULE_INFO(srcversion, "AE8329CFED5E18B3CA5E4E6");
