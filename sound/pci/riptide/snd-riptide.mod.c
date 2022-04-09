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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0xadf9689e, "snd_opl3_hwdep_new" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0x75fd0eb0, "snd_mpu401_uart_new" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xd349d253, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfe520adf, "snd_devm_card_new" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x8329f23e, "snd_pcm_hw_constraint_integer" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xc0fec227, "snd_mpu401_uart_interrupt" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xb1f9e033, "__gameport_register_port" },
	{ 0x1bcd733a, "snd_ac97_suspend" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xcfdc00b6, "gameport_unregister_port" },
	{ 0x4b321c90, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc495e259, "snd_ac97_bus" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x87634b54, "snd_sgbuf_get_addr" },
	{ 0xbb1e9d80, "snd_opl3_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5af3b706, "snd_ac97_mixer" },
	{ 0x7108062d, "snd_card_rw_proc_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x1564421, "request_firmware" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb3165232, "snd_ac97_resume" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x9e737fc4, "snd_dma_alloc_dir_pages" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "snd-pcm,snd-opl3-lib,snd-mpu401-uart,snd,gameport,snd-ac97-codec");

MODULE_ALIAS("pci:v0000127Ad00004310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00004330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00004340sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CBDA704F98DB8D11246BB7E");
