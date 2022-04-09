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
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb8620ad8, "snd_midi_event_reset_decode" },
	{ 0xee111615, "param_ops_int" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x734e4fba, "snd_midi_event_encode_byte" },
	{ 0x9b4c85fc, "snd_seq_kernel_client_write_poll" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xd349d253, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x977b8eb5, "snd_seq_create_kernel_client" },
	{ 0xe50413d7, "snd_seq_client_ioctl_lock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd70dbf6, "snd_midi_event_decode" },
	{ 0xb70b0ca4, "__snd_seq_driver_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xe9e6c50c, "snd_midi_event_new" },
	{ 0x7b8699eb, "snd_seq_event_port_detach" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x3061c52d, "snd_use_lock_sync_helper" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x7a3e0db5, "snd_midi_event_no_status" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xdfbcf889, "module_put" },
	{ 0xdd935c83, "snd_midi_event_free" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xadb51cff, "snd_seq_client_ioctl_unlock" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0x904014c1, "snd_register_oss_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe934da1d, "snd_seq_dump_var_event" },
	{ 0xb7744d3a, "snd_unregister_oss_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x3776777c, "snd_seq_root" },
	{ 0xf88cc0fc, "snd_info_free_entry" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x22915e0, "snd_info_create_module_entry" },
	{ 0xb8e448a0, "snd_seq_set_queue_tempo" },
	{ 0xea4af12b, "snd_info_register" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0x7c62d180, "snd_seq_driver_unregister" },
	{ 0xdbb8ad12, "snd_seq_kernel_client_enqueue" },
};

MODULE_INFO(depends, "snd-seq-midi-event,snd-seq,snd-seq-device,snd");


MODULE_INFO(srcversion, "E6332574772605845A539C4");
