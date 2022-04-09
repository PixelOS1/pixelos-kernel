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
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xee111615, "param_ops_int" },
	{ 0x5e7f4920, "snd_pcm_format_set_silence" },
	{ 0x7b2c562b, "snd_card_file_remove" },
	{ 0x6fddd826, "snd_pcm_release_substream" },
	{ 0x5f6c730b, "snd_pcm_notify" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0x6ea00aa2, "snd_info_create_card_entry" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xd349d253, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x28a5c1e2, "snd_pcm_hw_refine" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x8371509, "nonseekable_open" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x52e3e4a5, "snd_pcm_hw_param_value" },
	{ 0xfb578fc5, "memset" },
	{ 0xc23477d, "current_task" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9fb2bd3f, "snd_pcm_hw_param_last" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf968d185, "snd_pcm_mmap_data" },
	{ 0x6ef8fcd8, "snd_pcm_format_linear" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x56aedb29, "snd_mixer_oss_ioctl_card" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xdfbcf889, "module_put" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x1402b66d, "snd_card_file_add" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7064729d, "snd_pcm_stream_lock_irq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x91e1c380, "snd_pcm_stream_unlock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x904014c1, "snd_register_oss_device" },
	{ 0xaf8244fe, "snd_pcm_open_substream" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x650f8603, "snd_pcm_format_silence_64" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb7744d3a, "snd_unregister_oss_device" },
	{ 0x3796bdcc, "snd_pcm_format_little_endian" },
	{ 0xbafd3907, "__snd_pcm_lib_xfer" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0x37a0cba, "kfree" },
	{ 0x283dfe3, "_snd_pcm_hw_params_any" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0xf88cc0fc, "snd_info_free_entry" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x15f4c16a, "snd_pcm_kernel_ioctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xea4af12b, "snd_info_register" },
	{ 0x9a5d488c, "snd_pcm_hw_param_first" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf32ea3d5, "try_module_get" },
};

MODULE_INFO(depends, "snd-pcm,snd,snd-mixer-oss");


MODULE_INFO(srcversion, "4A64C5FC2B181821170D993");
