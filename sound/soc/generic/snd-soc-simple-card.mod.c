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
	{ 0xf295d712, "devm_snd_soc_register_card" },
	{ 0x83b5befd, "asoc_simple_remove" },
	{ 0x3a2cbd36, "snd_soc_pm_ops" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x30c7c343, "asoc_simple_init_priv" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x89e4046, "devm_kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa549037d, "asoc_simple_init_jack" },
	{ 0x72af1240, "asoc_simple_dai_init" },
	{ 0x49cdb972, "asoc_simple_clean_reference" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xcec1d46a, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-simple-card-utils");

MODULE_ALIAS("of:N*T*Csimple-audio-card");
MODULE_ALIAS("of:N*T*Csimple-audio-cardC*");
MODULE_ALIAS("of:N*T*Csimple-scu-audio-card");
MODULE_ALIAS("of:N*T*Csimple-scu-audio-cardC*");

MODULE_INFO(srcversion, "B58CC6C4A071D7C5AF46197");
