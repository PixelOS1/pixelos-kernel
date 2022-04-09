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
	{ 0x6ce57c5, "tty_unregister_driver" },
	{ 0x63caa65f, "unregister_console" },
	{ 0x188b6bbb, "register_console" },
	{ 0x8398df2f, "tty_port_destroy" },
	{ 0xbffb3b71, "tty_driver_kref_put" },
	{ 0xe291bdf4, "tty_register_driver" },
	{ 0x78bb5322, "tty_port_link_device" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x6ecf2389, "tty_port_init" },
	{ 0x4cd4f721, "__tty_alloc_driver" },
	{ 0x8bce6c8, "tty_port_open" },
	{ 0xa7734ba5, "tty_port_close" },
	{ 0x520e0d1, "tty_port_hangup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "754693C39F52C5E70B7FB7E");
