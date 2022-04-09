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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xee111615, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x1dcd0985, "snd_pcm_hw_constraint_step" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xcb64725, "snd_pcm_stop_xrun" },
	{ 0xd349d253, "seq_printf" },
	{ 0x6cc09945, "ioread32_rep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5012a70, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xde80cd09, "ioremap" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0x335873c6, "snd_pcm_hw_constraint_pow2" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x6721d0f8, "snd_hwdep_new" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0x6a971edd, "snd_card_new" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x92997ed8, "_printk" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x817d2986, "snd_pcm_set_sync" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7108062d, "snd_card_rw_proc_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x7c3bda2b, "snd_pcm_hw_constraint_minmax" },
	{ 0xedc03953, "iounmap" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x1564421, "request_firmware" },
	{ 0xe4161ca3, "snd_card_free" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd-pcm,snd-hwdep,snd");

MODULE_ALIAS("pci:v0000104Cd0000A106sv0000175Csd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000AC60sv0000175Csd*bc*sc*i*");

MODULE_INFO(srcversion, "D52FB1364A5F07B690DC4CE");
