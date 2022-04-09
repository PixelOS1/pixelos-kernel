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
	{ 0x27645ec9, "snd_sbdsp_create" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0x2bb74ec6, "snd_sbdsp_reset" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xadf9689e, "snd_opl3_hwdep_new" },
	{ 0x75fd0eb0, "snd_mpu401_uart_new" },
	{ 0xfe520adf, "snd_devm_card_new" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x80549c9b, "snd_sbmixer_suspend" },
	{ 0x8e081516, "snd_sbmixer_read" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xc0fec227, "snd_mpu401_uart_interrupt" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xb1f9e033, "__gameport_register_port" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0xcfdc00b6, "gameport_unregister_port" },
	{ 0x6f4ea888, "snd_sbmixer_new" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbb1e9d80, "snd_opl3_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x16c9a3dc, "snd_sbdsp_command" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0xbe0500b0, "snd_sbmixer_resume" },
	{ 0x3789f55c, "gameport_set_phys" },
	{ 0xd387b239, "snd_sbmixer_write" },
};

MODULE_INFO(depends, "snd-sb-common,snd-pcm,snd-opl3-lib,snd-mpu401-uart,snd,gameport");

MODULE_ALIAS("pci:v00004005d00004000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "39F9FA2471B88C136B359AC");
