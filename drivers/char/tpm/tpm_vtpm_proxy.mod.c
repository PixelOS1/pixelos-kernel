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
	{ 0xa73cda8f, "no_llseek" },
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x92997ed8, "_printk" },
	{ 0xa164df89, "misc_register" },
	{ 0x53bb6402, "tpm_chip_unregister" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xf0785fc6, "fput" },
	{ 0x37a0cba, "kfree" },
	{ 0x761527a1, "put_device" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x1c4150c0, "fd_install" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6f5445fe, "anon_inode_getfile" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x79783fa4, "tpm_chip_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xc6cbbc89, "capable" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xdd221f17, "tpm_transmit_cmd" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfb578fc5, "memset" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x93bda9b5, "tpm_chip_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ADA4C17BA60992506B4557E");
