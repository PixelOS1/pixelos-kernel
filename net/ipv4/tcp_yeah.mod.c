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
	{ 0xa8b4b69, "tcp_vegas_get_info" },
	{ 0xc611758f, "tcp_reno_undo_cwnd" },
	{ 0xfa2d9a63, "tcp_vegas_pkts_acked" },
	{ 0xbaf0994a, "tcp_vegas_cwnd_event" },
	{ 0xb41aaf3e, "tcp_vegas_state" },
	{ 0xb3766b3c, "tcp_unregister_congestion_control" },
	{ 0xfd992637, "tcp_register_congestion_control" },
	{ 0x4dbfdf8, "tcp_slow_start" },
	{ 0x5d7743bd, "tcp_cong_avoid_ai" },
	{ 0x33cf8022, "tcp_vegas_init" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tcp_vegas");


MODULE_INFO(srcversion, "C8A664255915BB2C337F1DA");
