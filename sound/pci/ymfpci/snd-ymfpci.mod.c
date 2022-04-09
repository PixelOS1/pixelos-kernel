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
	{ 0x75b454b8, "snd_pcm_hw_rule_noresample" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0xadf9689e, "snd_opl3_hwdep_new" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x75fd0eb0, "snd_mpu401_uart_new" },
	{ 0xd349d253, "seq_printf" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xc0fec227, "snd_mpu401_uart_interrupt" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x3fb8f9e4, "snd_timer_new" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0x8ef4044f, "snd_ctl_notify" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xb1f9e033, "__gameport_register_port" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0x1bcd733a, "snd_ac97_suspend" },
	{ 0x6a971edd, "snd_card_new" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0xa916b694, "strnlen" },
	{ 0x4e1b99f, "snd_pcm_std_chmaps" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0xcfdc00b6, "gameport_unregister_port" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4b321c90, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc495e259, "snd_ac97_bus" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbb1e9d80, "snd_opl3_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5af3b706, "snd_ac97_mixer" },
	{ 0xd921ce70, "snd_ac97_update_bits" },
	{ 0x7108062d, "snd_card_rw_proc_new" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xfe0c2458, "snd_timer_interrupt" },
	{ 0x5a8a2dc9, "param_ops_long" },
	{ 0x7c3bda2b, "snd_pcm_hw_constraint_minmax" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd31061a9, "snd_devm_alloc_dir_pages" },
	{ 0x1564421, "request_firmware" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0x836b943d, "snd_pcm_add_chmap_ctls" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0xb3165232, "snd_ac97_resume" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x9e737fc4, "snd_dma_alloc_dir_pages" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x3789f55c, "gameport_set_phys" },
};

MODULE_INFO(depends, "snd-pcm,snd-opl3-lib,snd-mpu401-uart,snd-timer,snd,gameport,snd-ac97-codec");

MODULE_ALIAS("pci:v00001073d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001073d0000000Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001073d0000000Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001073d0000000Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001073d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001073d00000012sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B12D98171DFA596BE815200");
