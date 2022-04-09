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
	{ 0xa24f23d8, "__request_module" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x5940f56, "snd_hdac_acomp_exit" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7c04012c, "snd_hdac_display_power" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b4666c0, "device_attach" },
	{ 0xcb5ce62, "snd_hdac_device_unregister" },
	{ 0x37f7ea07, "snd_hdac_i915_init" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x2194a52, "snd_hdac_ext_bus_device_init" },
	{ 0xadce839a, "snd_hdac_codec_modalias" },
	{ 0x50bd9e02, "snd_hdac_bus_get_response" },
	{ 0xa7b2874f, "snd_hdac_bus_send_cmd" },
	{ 0xcec1d46a, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-ext-core");


MODULE_INFO(srcversion, "D59ABFE60E5B3BAF1AD2B8E");
