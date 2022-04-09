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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x53b954a2, "up_read" },
	{ 0x349cba85, "strchr" },
	{ 0x1a6eb059, "snd_soc_dai_active" },
	{ 0x754d539c, "strlen" },
	{ 0x1dcd0985, "snd_pcm_hw_constraint_step" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0xec789624, "snd_soc_dapm_get_volsw" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x64f36507, "snd_soc_dapm_new_controls" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8329f23e, "snd_pcm_hw_constraint_integer" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xebc7281d, "snd_soc_dapm_add_routes" },
	{ 0x29e631d2, "snd_soc_poweroff" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbc85fa84, "dapm_kcontrol_get_value" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfa96e89, "snd_soc_add_component_controls" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x5a921311, "strncmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x6d18777e, "snd_soc_dapm_put_volsw" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0x1e0bfadf, "snd_soc_info_volsw" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xdfbcf889, "module_put" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xcc3f679a, "snd_soc_dapm_new_widgets" },
	{ 0x92997ed8, "_printk" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xdd6374bb, "snd_soc_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9121485, "snd_soc_new_compress" },
	{ 0xf0a51967, "snd_soc_resume" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xf32ea3d5, "try_module_get" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd");


MODULE_INFO(srcversion, "22C686FC484F5B5E46E4459");
