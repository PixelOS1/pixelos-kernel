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
	{ 0x92997ed8, "_printk" },
	{ 0xf2cc05f4, "devfreq_remove_governor" },
	{ 0xf0ca6395, "devfreq_add_governor" },
	{ 0xf7b007a4, "devfreq_monitor_start" },
	{ 0xf965aee8, "devfreq_monitor_suspend" },
	{ 0x948a1334, "devfreq_update_interval" },
	{ 0x44037bf3, "devfreq_monitor_stop" },
	{ 0xc76f71fd, "devfreq_monitor_resume" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AFCF84046B7A27262F497C5");
