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
	{ 0xd4f58ba1, "regmap_raw_write" },
	{ 0x903c8903, "devm_sigmadsp_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd63347d5, "regmap_raw_read" },
};

MODULE_INFO(depends, "snd-soc-sigmadsp");


MODULE_INFO(srcversion, "D9D61E4BDB6B9EDC06FAE77");
