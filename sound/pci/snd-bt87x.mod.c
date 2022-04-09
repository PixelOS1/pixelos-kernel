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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0x6518ac93, "snd_pcm_hw_constraint_ratnums" },
	{ 0x8adca48b, "pci_match_id" },
	{ 0xfe520adf, "snd_devm_card_new" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8329f23e, "snd_pcm_hw_constraint_integer" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xcdd0eff2, "pci_status_get_and_clear_errors" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0x4b321c90, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x87634b54, "snd_sgbuf_get_addr" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x9e737fc4, "snd_dma_alloc_dir_pages" },
};

MODULE_INFO(depends, "snd-pcm,snd");

MODULE_ALIAS("pci:v0000109Ed00000878sv00000070sd000013EBbc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000879sv00000070sd000013EBbc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00000070sd0000FF01bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00000070sd0000FF07bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001002sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv0000107Dsd00006606bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000011BDsd00000012bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv0000121Asd00003000bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv0000144Fsd00003000bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001461sd00000003bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001554sd00004011bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv0000BD11sd00001200bc*sc*i*");

MODULE_INFO(srcversion, "64B345F7876823301A49F04");
