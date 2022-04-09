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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0x2752ed0a, "snd_i2c_device_create" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x8505272c, "snd_pcm_hw_constraint_msbits" },
	{ 0x75fd0eb0, "snd_mpu401_uart_new" },
	{ 0xfa6e475d, "snd_ice1712_akm4xxx_build_controls" },
	{ 0xd349d253, "seq_printf" },
	{ 0x7cb508fc, "snd_i2c_sendbytes" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbd5b6eac, "snd_card_disconnect" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xc0fec227, "snd_mpu401_uart_interrupt" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xbb3e2b5d, "snd_cs8427_reg_write" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x28b94e4, "snd_pcm_hw_constraint_list" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0xbc9c1981, "snd_ctl_boolean_stereo_info" },
	{ 0x8ef4044f, "snd_ctl_notify" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x55eacf7c, "snd_akm4xxx_reset" },
	{ 0xa4c91812, "snd_cs8427_iec958_build" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0x1bcd733a, "snd_ac97_suspend" },
	{ 0x6a971edd, "snd_card_new" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0xe891d152, "snd_cs8427_create" },
	{ 0xee0bd1ee, "snd_ice1712_akm4xxx_free" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xe5261eb4, "snd_i2c_bus_create" },
	{ 0xfa6a638f, "snd_cs8427_init" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x72ce7921, "snd_i2c_readbytes" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xa3067791, "snd_cs8427_iec958_pcm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x817d2986, "snd_pcm_set_sync" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc495e259, "snd_ac97_bus" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5af3b706, "snd_ac97_mixer" },
	{ 0x7108062d, "snd_card_rw_proc_new" },
	{ 0x61591ac1, "snd_ac97_set_rate" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x9d977d9f, "snd_cs8427_iec958_active" },
	{ 0xb534368d, "snd_akm4xxx_write" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb3165232, "snd_ac97_resume" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0x7604f46f, "snd_ice1712_akm4xxx_init" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xc4905c8d, "snd_akm4xxx_init" },
};

MODULE_INFO(depends, "snd-pcm,snd-i2c,snd-mpu401-uart,snd-ice17xx-ak4xxx,snd,snd-cs8427,snd-ak4xxx-adda,snd-ac97-codec");

MODULE_ALIAS("pci:v00001412d00001712sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AC5C85C4C9CA3729334711E");
