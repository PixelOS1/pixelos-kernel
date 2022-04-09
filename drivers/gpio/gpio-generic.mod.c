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
	{ 0x26f8f0b8, "iowrite16be" },
	{ 0x9bb4e317, "ioread32be" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa71d2e2c, "ioread16be" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "621D6BC43DE251BDD4A167C");
