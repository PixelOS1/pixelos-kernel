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
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0xd98b2cc0, "fw_iso_resources_update" },
	{ 0x7549c36, "driver_register" },
	{ 0x89376e82, "iso_packets_buffer_init" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0xdef8a2ac, "fw_iso_resources_init" },
	{ 0xcb64725, "snd_pcm_stop_xrun" },
	{ 0x3ff92c06, "fw_bus_type" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbd5b6eac, "snd_card_disconnect" },
	{ 0x93d4aa26, "fw_iso_context_start" },
	{ 0xf62b47d, "fw_iso_context_queue_flush" },
	{ 0xfb578fc5, "memset" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x47d5b00a, "iso_packets_buffer_destroy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0x6a971edd, "snd_card_new" },
	{ 0xed0d181e, "fw_iso_resources_destroy" },
	{ 0x289445f2, "fw_iso_context_queue" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6db8a55, "fw_iso_resources_allocate" },
	{ 0x16e6d67f, "get_device" },
	{ 0x589aa2ed, "fw_iso_context_stop" },
	{ 0x82fde540, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe4161ca3, "snd_card_free" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0xffa7e5cf, "snd_fw_transaction" },
	{ 0x1a7e5100, "fw_iso_resources_free" },
	{ 0x6b2a837a, "fw_iso_context_destroy" },
};

MODULE_INFO(depends, "firewire-core,snd-firewire-lib,snd-pcm,snd");

MODULE_ALIAS("ieee1394:ven*mo*sp00000A27ver00000010*");

MODULE_INFO(srcversion, "91937543F4572DC03122665");
