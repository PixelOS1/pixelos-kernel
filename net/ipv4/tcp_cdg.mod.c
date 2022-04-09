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
	{ 0xee111615, "param_ops_int" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc611758f, "tcp_reno_undo_cwnd" },
	{ 0xb3766b3c, "tcp_unregister_congestion_control" },
	{ 0xfd992637, "tcp_register_congestion_control" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb917c393, "tcp_enter_cwr" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x4304a8d9, "tcp_reno_cong_avoid" },
	{ 0xfb578fc5, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3014C48B4010368132F2891");
