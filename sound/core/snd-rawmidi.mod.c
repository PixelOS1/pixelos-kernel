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
	{ 0xf9a482f9, "msleep" },
	{ 0x59ceb925, "put_pid" },
	{ 0xd45009df, "snd_register_device" },
	{ 0xe2c004c0, "snd_device_register" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xee111615, "param_ops_int" },
	{ 0x7b2c562b, "snd_card_file_remove" },
	{ 0xd490e571, "pid_vnr" },
	{ 0xa0a0cb18, "stream_open" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x60e5c53e, "snd_device_initialize" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x6ea00aa2, "snd_info_create_card_entry" },
	{ 0xa267eb70, "snd_ctl_register_ioctl_compat" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xd349d253, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe20a0229, "snd_ctl_unregister_ioctl" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x6fc0cfdf, "snd_device_new" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x643cb3f, "snd_unregister_device" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xdfbcf889, "module_put" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa916b694, "strnlen" },
	{ 0x1402b66d, "snd_card_file_add" },
	{ 0xd2a7c1a0, "snd_ctl_register_ioctl" },
	{ 0x761527a1, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x904014c1, "snd_register_oss_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb7744d3a, "snd_unregister_oss_device" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf88cc0fc, "snd_info_free_entry" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x67f8d0e7, "snd_ctl_get_preferred_subdevice" },
	{ 0x4e9e641c, "snd_seq_device_new" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x50098bcd, "snd_ctl_unregister_ioctl_compat" },
	{ 0xea4af12b, "snd_info_register" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf32ea3d5, "try_module_get" },
};

MODULE_INFO(depends, "snd,snd-seq-device");


MODULE_INFO(srcversion, "A50824ED0FDF7C86896B5AD");
