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
	{ 0xf9a482f9, "msleep" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0x1dcd0985, "snd_pcm_hw_constraint_step" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfe520adf, "snd_devm_card_new" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0x8329f23e, "snd_pcm_hw_constraint_integer" },
	{ 0x15ba50a6, "jiffies" },
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
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbde712af, "snd_sgbuf_get_chunk_size" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x87634b54, "snd_sgbuf_get_addr" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd31061a9, "snd_devm_alloc_dir_pages" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0x12566df4, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "snd-pcm,snd");

MODULE_ALIAS("pci:v00001369d00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "11874A22593F32671871DAA");
