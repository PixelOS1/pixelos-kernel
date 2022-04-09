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
	{ 0x23c1cf32, "kset_create_and_add" },
	{ 0x5b7424d5, "bus_register" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x4df9f4a8, "kobject_get" },
	{ 0x7549c36, "driver_register" },
	{ 0x53b954a2, "up_read" },
	{ 0xb24ed1d0, "vfio_init_group_dev" },
	{ 0xc0a7a96f, "sysfs_create_files" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb7208e8a, "kobject_del" },
	{ 0x591c0306, "_dev_notice" },
	{ 0xe928d405, "vfio_register_emulated_iommu_dev" },
	{ 0xa2c56cf2, "kobject_create_and_add" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x339c0a66, "device_del" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x748b4a2, "class_compat_create_link" },
	{ 0xa980d013, "kobject_init_and_add" },
	{ 0xe6d39810, "class_compat_remove_link" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x54aef8a7, "vfio_unregister_group_dev" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbb99e571, "sysfs_remove_link" },
	{ 0xf5c5e04e, "device_add" },
	{ 0xce807a25, "up_write" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xbb6269b0, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4ed2af6a, "vfio_uninit_group_dev" },
	{ 0x1f0ca91d, "kobject_uevent_env" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xfa2a4fda, "sysfs_create_link" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x7408f66e, "sysfs_remove_file_ns" },
	{ 0x761527a1, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x16e6d67f, "get_device" },
	{ 0x32c3cb4e, "class_compat_register" },
	{ 0x28abcbaa, "sysfs_remove_files" },
	{ 0xbd508a26, "device_for_each_child" },
	{ 0x9703bca3, "kset_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x21120fd8, "sysfs_create_groups" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0xb564d390, "sysfs_remove_groups" },
	{ 0xe5883bd9, "class_compat_unregister" },
	{ 0x8666270f, "device_driver_attach" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x2921e434, "sysfs_create_file_ns" },
	{ 0x77e241c7, "device_remove_file_self" },
	{ 0x7b4da6ff, "__init_rwsem" },
};

MODULE_INFO(depends, "vfio");


MODULE_INFO(srcversion, "7D8A7468728C26023650F3B");
