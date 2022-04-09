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
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x81457992, "snd_ac97_read" },
	{ 0x75b454b8, "snd_pcm_hw_rule_noresample" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x9adc8c44, "__snd_util_memblk_new" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0xed9661a7, "snd_device_free" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x6ea00aa2, "snd_info_create_card_entry" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x914f3491, "snd_util_memhdr_free" },
	{ 0xd349d253, "seq_printf" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfe520adf, "snd_devm_card_new" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xe31a0690, "snd_pcm_lib_preallocate_pages" },
	{ 0xd7ad819, "snd_rawmidi_set_ops" },
	{ 0x6517719f, "__snd_util_mem_free" },
	{ 0xdd64e639, "strscpy" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8329f23e, "snd_pcm_hw_constraint_integer" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x66d0ccc1, "snd_rawmidi_new" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0xc3d43fff, "snd_ac97_update" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x28b94e4, "snd_pcm_hw_constraint_list" },
	{ 0x3fb8f9e4, "snd_timer_new" },
	{ 0xf4771ee3, "snd_pcm_set_managed_buffer" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0x8ef4044f, "snd_ctl_notify" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6721d0f8, "snd_hwdep_new" },
	{ 0x63e379c1, "snd_pcm_lib_free_pages" },
	{ 0xce807a25, "up_write" },
	{ 0xeda33fa, "snd_util_memhdr_new" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0xd28dc0da, "__snd_util_mem_alloc" },
	{ 0x3d6b287e, "snd_pcm_lib_malloc_pages" },
	{ 0x1bcd733a, "snd_ac97_suspend" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0xe6da47e1, "iommu_get_domain_for_dev" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x3c16c99a, "iommu_present" },
	{ 0xa916b694, "strnlen" },
	{ 0xedc0f37f, "snd_ctl_remove_id" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4b321c90, "snd_dma_free_pages" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xb0f49d57, "snd_ctl_find_id" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc495e259, "snd_ac97_bus" },
	{ 0xb297c272, "snd_ctl_remove" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x87634b54, "snd_sgbuf_get_addr" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5af3b706, "snd_ac97_mixer" },
	{ 0xd921ce70, "snd_ac97_update_bits" },
	{ 0x7108062d, "snd_card_rw_proc_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xfe0c2458, "snd_timer_interrupt" },
	{ 0x7c3bda2b, "snd_pcm_hw_constraint_minmax" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd31061a9, "snd_devm_alloc_dir_pages" },
	{ 0x1564421, "request_firmware" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0x4e9e641c, "snd_seq_device_new" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0xb3165232, "snd_ac97_resume" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0xb8d009b4, "snd_ac97_write_cache" },
	{ 0xc5929162, "snd_rawmidi_transmit" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x9e737fc4, "snd_dma_alloc_dir_pages" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xfd95b68d, "snd_rawmidi_receive" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-pcm,snd-ac97-codec,snd-util-mem,snd,snd-rawmidi,snd-timer,snd-hwdep,snd-seq-device");

MODULE_ALIAS("pci:v00001102d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000008sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C7B6513B41D9EAC944DAE71");
