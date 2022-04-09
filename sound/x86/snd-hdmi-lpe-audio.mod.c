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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xee111615, "param_ops_int" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x1dcd0985, "snd_pcm_hw_constraint_step" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x8505272c, "snd_pcm_hw_constraint_msbits" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xcb64725, "snd_pcm_stop_xrun" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfe520adf, "snd_devm_card_new" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xdd64e639, "strscpy" },
	{ 0x8329f23e, "snd_pcm_hw_constraint_integer" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x7aba1fee, "snd_jack_new" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x4faa9e16, "remap_pfn_range" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0x836b943d, "snd_pcm_add_chmap_ctls" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8ff64688, "snd_jack_report" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xa78af5f3, "ioread32" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "EFB67D8F5188326DB1E9943");
