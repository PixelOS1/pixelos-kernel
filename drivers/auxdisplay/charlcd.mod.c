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
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x754d539c, "strlen" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x8371509, "nonseekable_open" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa164df89, "misc_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb9ad005, "misc_deregister" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "10CC2A5C80129634D2F3849");
