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
	{ 0x204c5067, "scsi_dev_info_add_list" },
	{ 0x763bb5d5, "transport_class_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xfb0dca2a, "scsi_get_device_flags_keyed" },
	{ 0xe6ef30d2, "scsi_target_resume" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xb677fe8d, "anon_transport_class_register" },
	{ 0x7de9a0a1, "attribute_container_unregister" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x97bdfa60, "scsi_dev_info_remove_list" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7723bc20, "scsi_autopm_get_device" },
	{ 0x3662733d, "scsi_device_quiesce" },
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0x2ebc17e6, "sysfs_chmod_file" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9f37056, "__scsi_execute" },
	{ 0x5a921311, "strncmp" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0xef6fa3c, "attribute_container_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xff2022d, "transport_class_unregister" },
	{ 0xf52ebe9b, "sysfs_update_group" },
	{ 0x7b178afe, "unlock_system_sleep" },
	{ 0xebc9a09f, "lock_system_sleep" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x2733eaf7, "scsi_dev_info_list_add_keyed" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x354d23d1, "scsi_device_set_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xbd508a26, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0xdf2a1681, "scsi_target_quiesce" },
	{ 0xe0f7ecb7, "scsi_is_target_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5ac4b094, "scsi_device_get" },
	{ 0x445356d5, "scsi_autopm_put_device" },
	{ 0x32de13e4, "anon_transport_class_unregister" },
	{ 0xe71d5f00, "scsi_is_sdev_device" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F0B6FFDE42499A307BC16AC");
