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
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xd349d253, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7108062d, "snd_card_rw_proc_new" },
	{ 0xb74b614, "snd_ctl_add" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "E76CD87BB9DC0C4FB775C6A");
