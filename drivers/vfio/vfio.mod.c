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
	{ 0xcfb10e1b, "iommu_group_remove_device" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x73c98c2d, "pci_bus_type" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xacb32f2d, "cdev_init" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0x65cef1a2, "iommu_group_add_device" },
	{ 0x81188c30, "match_string" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0xa0ebc08, "__xa_cmpxchg" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa164df89, "misc_register" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x36075bb5, "iommu_group_register_notifier" },
	{ 0xffb7c514, "ida_free" },
	{ 0x6a1733eb, "iommu_group_unregister_notifier" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xce807a25, "up_write" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x57bc19d2, "down_write" },
	{ 0xf0785fc6, "fput" },
	{ 0x6e7943ec, "iommu_group_id" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0xdfbcf889, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x761527a1, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x1000e51, "schedule" },
	{ 0x1fdba44b, "cdev_device_add" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x62d266fc, "iommu_group_for_each_dev" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x89485687, "iommu_group_put" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8d22bb58, "iommu_group_alloc" },
	{ 0x1c4150c0, "fd_install" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0x99f7371c, "refcount_dec_and_mutex_lock" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0x4195254f, "class_destroy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x837c876c, "iommu_group_get" },
	{ 0x60805a2, "cdev_device_del" },
	{ 0xa6257a2f, "complete" },
	{ 0xbcdd5b99, "iommu_group_set_name" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1aafecfe, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x6f5445fe, "anon_inode_getfile" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0x4d6d0bbc, "iommu_group_ref_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "971FC835AC692CDB5A02E31");
