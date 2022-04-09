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
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xf9a482f9, "msleep" },
	{ 0x81457992, "snd_ac97_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x747fb059, "snd_ak4114_resume" },
	{ 0xee111615, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x1dcd0985, "snd_pcm_hw_constraint_step" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0x2752ed0a, "snd_i2c_device_create" },
	{ 0x8505272c, "snd_pcm_hw_constraint_msbits" },
	{ 0xfa6e475d, "snd_ice1712_akm4xxx_build_controls" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd349d253, "seq_printf" },
	{ 0xd0cdaf9, "snd_ak4113_create" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfe520adf, "snd_devm_card_new" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd7ad819, "snd_rawmidi_set_ops" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbd5b6eac, "snd_card_disconnect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x66d0ccc1, "snd_rawmidi_new" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x72a253f4, "snd_ak4113_external_rate" },
	{ 0x687636, "snd_ak4113_build" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x28b94e4, "snd_pcm_hw_constraint_list" },
	{ 0x283b28ae, "_snd_ctl_add_follower" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xaf928c0c, "snd_pt2258_build_controls" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0xbc9c1981, "snd_ctl_boolean_stereo_info" },
	{ 0x8ef4044f, "snd_ctl_notify" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x55eacf7c, "snd_akm4xxx_reset" },
	{ 0xc678a300, "snd_ak4114_build" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0x5a16f3c2, "snd_pt2258_reset" },
	{ 0x1bcd733a, "snd_ac97_suspend" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0xee0bd1ee, "snd_ice1712_akm4xxx_free" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xe5261eb4, "snd_i2c_bus_create" },
	{ 0xaf85c4be, "snd_ctl_make_virtual_master" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x817d2986, "snd_pcm_set_sync" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xb0f49d57, "snd_ctl_find_id" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc495e259, "snd_ac97_bus" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8201fc6b, "snd_ak4114_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5af3b706, "snd_ac97_mixer" },
	{ 0x7108062d, "snd_card_rw_proc_new" },
	{ 0xbaf822f1, "snd_ak4114_suspend" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x6c09da28, "snd_ak4114_external_rate" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xafdd0809, "snd_ak4114_reinit" },
	{ 0xb534368d, "snd_akm4xxx_write" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0xb3165232, "snd_ac97_resume" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0xb8d009b4, "snd_ac97_write_cache" },
	{ 0xc5929162, "snd_rawmidi_transmit" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x51ffb1fc, "snd_rawmidi_transmit_empty" },
	{ 0x7604f46f, "snd_ice1712_akm4xxx_init" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xfd95b68d, "snd_rawmidi_receive" },
};

MODULE_INFO(depends, "snd,snd-ac97-codec,snd-ak4114,snd-pcm,snd-i2c,snd-ice17xx-ak4xxx,snd-ak4113,snd-rawmidi,snd-pt2258,snd-ak4xxx-adda");

MODULE_ALIAS("pci:v00001412d00001724sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A509F22B3CE5401FB944104");
