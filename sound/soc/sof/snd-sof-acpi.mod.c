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
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0xee111615, "param_ops_int" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x26b5d790, "snd_sof_suspend" },
	{ 0x1901e94f, "snd_sof_device_probe" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0x43919256, "snd_sof_resume" },
	{ 0x222d0631, "snd_sof_runtime_suspend" },
	{ 0x2a741368, "snd_sof_device_remove" },
	{ 0x6626d0, "snd_sof_runtime_resume" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x169a88b3, "snd_sof_runtime_idle" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0xcec1d46a, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-sof");


MODULE_INFO(srcversion, "23767F2F66E6ED5ED777DD7");
