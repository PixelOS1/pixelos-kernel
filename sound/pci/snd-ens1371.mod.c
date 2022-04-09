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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x85bd1608, "__request_region" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0x6518ac93, "snd_pcm_hw_constraint_ratnums" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xd349d253, "seq_printf" },
	{ 0x7f42571f, "snd_pci_quirk_lookup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfe520adf, "snd_devm_card_new" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd7ad819, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x66d0ccc1, "snd_rawmidi_new" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb1f9e033, "__gameport_register_port" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0x1bcd733a, "snd_ac97_suspend" },
	{ 0x4f39df51, "snd_pcm_hw_constraint_ratdens" },
	{ 0x4e1b99f, "snd_pcm_std_chmaps" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0xcfdc00b6, "gameport_unregister_port" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x817d2986, "snd_pcm_set_sync" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc495e259, "snd_ac97_bus" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5af3b706, "snd_ac97_mixer" },
	{ 0x7108062d, "snd_card_rw_proc_new" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0x836b943d, "snd_pcm_add_chmap_ctls" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0xb3165232, "snd_ac97_resume" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0xc5929162, "snd_rawmidi_transmit" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xfd95b68d, "snd_rawmidi_receive" },
	{ 0x3789f55c, "gameport_set_phys" },
};

MODULE_INFO(depends, "snd-pcm,snd,snd-rawmidi,gameport,snd-ac97-codec");

MODULE_ALIAS("pci:v00001274d00001371sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001274d00005880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00008938sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BBAAC156419B048CEABB8AB");
