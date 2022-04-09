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
	{ 0x255bf094, "snd_ac97_tune_hardware" },
	{ 0x1dcd0985, "snd_pcm_hw_constraint_step" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0xcb64725, "snd_pcm_stop_xrun" },
	{ 0xd349d253, "seq_printf" },
	{ 0x7f42571f, "snd_pci_quirk_lookup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfe520adf, "snd_devm_card_new" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9e913c1, "snd_pcm_alt_chmaps" },
	{ 0x8329f23e, "snd_pcm_hw_constraint_integer" },
	{ 0x5dbf13c1, "snd_ac97_pcm_assign" },
	{ 0xae552189, "snd_ac97_get_short_name" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0x1bcd733a, "snd_ac97_suspend" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4b321c90, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc495e259, "snd_ac97_bus" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5af3b706, "snd_ac97_mixer" },
	{ 0xd921ce70, "snd_ac97_update_bits" },
	{ 0x7108062d, "snd_card_rw_proc_new" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x6b53ea83, "snd_ac97_pcm_open" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0x836b943d, "snd_pcm_add_chmap_ctls" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb3165232, "snd_ac97_resume" },
	{ 0x69255f54, "snd_pcm_hw_limit_rates" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x9e737fc4, "snd_dma_alloc_dir_pages" },
	{ 0xc9db5dfe, "snd_ac97_pcm_close" },
};

MODULE_INFO(depends, "snd-ac97-codec,snd-pcm,snd");

MODULE_ALIAS("pci:v00001002d00004341sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004361sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004370sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004382sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3360C6EF4A3677A81C9C10E");
