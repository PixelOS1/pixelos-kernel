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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0xd93a9c2c, "release_sock" },
	{ 0x8c795089, "udp6_set_csum" },
	{ 0x3b596575, "sock_bindtoindex" },
	{ 0x7650c19b, "sock_release" },
	{ 0xd65e4b2a, "sock_create_kern" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x4e5a73af, "kernel_connect" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x82b24054, "kernel_sock_shutdown" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x39b8db9, "kernel_bind" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x49269236, "ip6_local_out" },
	{ 0xf229424a, "preempt_count_add" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9F50A9632EDFF8B1C88BAE3");
