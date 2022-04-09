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
	{ 0xf9a482f9, "msleep" },
	{ 0xee111615, "param_ops_int" },
	{ 0x6f26a144, "_dev_crit" },
	{ 0xd349d253, "seq_printf" },
	{ 0x3b42ed0c, "oxygen_read16" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xba69ebb6, "oxygen_write8_masked" },
	{ 0x591c0306, "_dev_notice" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0x5bf6d2b, "oxygen_write16_masked" },
	{ 0x2bc52d8d, "oxygen_write_ac97_masked" },
	{ 0x8ef4044f, "snd_ctl_notify" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x16d33d8f, "oxygen_write_spi" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4a5031c8, "oxygen_pci_probe" },
	{ 0x7aba1fee, "snd_jack_new" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0x2d11fe2a, "oxygen_write16" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x667d3e9e, "snd_component_add" },
	{ 0x6f556a4b, "oxygen_read8" },
	{ 0xe9c3c83, "oxygen_reset_uart" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0x606f34ae, "oxygen_write_uart" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x938dda9a, "oxygen_write_i2c" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x3c008e69, "oxygen_pci_pm" },
	{ 0x9a5e2ee1, "oxygen_pci_shutdown" },
	{ 0x8ff64688, "snd_jack_report" },
	{ 0xb74b614, "snd_ctl_add" },
};

MODULE_INFO(depends, "snd-oxygen-lib,snd");

MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008269bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008275bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd000082B7bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008314bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008327bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000834Fbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Cbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Dbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Ebc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000838Ebc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008428bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008522bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd000085F4bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000013F6sd00008788bc*sc*i*");

MODULE_INFO(srcversion, "18319A54CC19B71D8901C5B");
