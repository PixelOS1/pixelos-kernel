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
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x692b909c, "acpi_kobj" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbc556315, "sysfs_notify" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3C25CD1CC5B3A38765B4865");
