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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0x8505272c, "snd_pcm_hw_constraint_msbits" },
	{ 0xd349d253, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x39bf9301, "_snd_pcm_hw_param_setempty" },
	{ 0xfe520adf, "snd_devm_card_new" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd7ad819, "snd_rawmidi_set_ops" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x66d0ccc1, "snd_rawmidi_new" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x28b94e4, "snd_pcm_hw_constraint_list" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0x8ef4044f, "snd_ctl_notify" },
	{ 0x335873c6, "snd_pcm_hw_constraint_pow2" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x6721d0f8, "snd_hwdep_new" },
	{ 0x63e379c1, "snd_pcm_lib_free_pages" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe93dfa5b, "snd_pcm_lib_ioctl" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x94098ff8, "snd_interval_list" },
	{ 0x441bc021, "snd_card_set_id" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0x3d6b287e, "snd_pcm_lib_malloc_pages" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x967336a7, "snd_pcm_hw_rule_add" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x817d2986, "snd_pcm_set_sync" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x87634b54, "snd_sgbuf_get_addr" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x7108062d, "snd_card_rw_proc_new" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x7c3bda2b, "snd_pcm_hw_constraint_minmax" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xf711d198, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0xc5929162, "snd_rawmidi_transmit" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x51ffb1fc, "snd_rawmidi_transmit_empty" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xfd95b68d, "snd_rawmidi_receive" },
};

MODULE_INFO(depends, "snd-pcm,snd,snd-rawmidi,snd-hwdep");

MODULE_ALIAS("pci:v000010EEd00003FC6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F37CE51BC6530F83557FEAE");
