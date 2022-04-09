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
	{ 0xc611758f, "tcp_reno_undo_cwnd" },
	{ 0xb3766b3c, "tcp_unregister_congestion_control" },
	{ 0xfd992637, "tcp_register_congestion_control" },
	{ 0x522f327c, "__cgroup_bpf_run_filter_sock_ops" },
	{ 0xc0afb5d7, "cgroup_bpf_enabled_key" },
	{ 0x4dbfdf8, "tcp_slow_start" },
	{ 0x5d7743bd, "tcp_cong_avoid_ai" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "040FA43F0107CC23BEBE7DA");
