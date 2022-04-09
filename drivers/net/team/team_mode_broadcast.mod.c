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
	{ 0x85ae6230, "team_modeop_port_change_dev_addr" },
	{ 0x6f17017a, "team_modeop_port_enter" },
	{ 0x122a7975, "team_mode_unregister" },
	{ 0xf79a7178, "team_mode_register" },
	{ 0x652cb397, "netpoll_send_skb" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x5012a70, "pv_ops" },
	{ 0x6ece8090, "skb_clone" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "team");


MODULE_INFO(srcversion, "92CCB13B374D9E575910D1C");
