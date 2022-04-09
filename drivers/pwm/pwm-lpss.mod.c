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
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xee09ed35, "devm_ioremap_resource" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xaf6c8764, "devm_pwmchip_add" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0FBC4D0FA1A3090B8564E87");
