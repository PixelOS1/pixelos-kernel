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
	{ 0x2ec97348, "kobject_put" },
	{ 0xa39f67e5, "cdev_alloc" },
	{ 0xf5fa5da, "cdev_del" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x9316b04c, "kobject_uevent" },
	{ 0xaffe8c3a, "kobject_set_name" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa2c56cf2, "kobject_create_and_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6452f583, "generic_access_phys" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x339c0a66, "device_del" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x52d91e96, "class_unregister" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7dd49bd0, "fasync_helper" },
	{ 0x16720bc7, "__devres_alloc_node" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xf5c5e04e, "device_add" },
	{ 0xcbbf89a9, "kobject_add" },
	{ 0x97ac8144, "__class_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x3b09f2ee, "cdev_add" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdfbcf889, "module_put" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa4faa6c8, "devres_add" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x16e6d67f, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4faa9e16, "remap_pfn_range" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0x751b1796, "kobject_init" },
	{ 0x76abb595, "kill_fasync" },
	{ 0x776c87fd, "device_unregister" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xd5c12924, "vmalloc_to_page" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x20978fb9, "idr_find" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8053400DED8163E5F106571");
