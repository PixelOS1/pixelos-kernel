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
	{ 0x763bb5d5, "transport_class_register" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xba6c657e, "scsi_remove_target" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0x658000c8, "transport_destroy_device" },
	{ 0x7de9a0a1, "attribute_container_unregister" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x353e65c2, "scsi_scan_target" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x339c0a66, "device_del" },
	{ 0x6373128a, "transport_add_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x1d57e1b, "transport_configure_device" },
	{ 0x5a921311, "strncmp" },
	{ 0xef6fa3c, "attribute_container_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbb99e571, "sysfs_remove_link" },
	{ 0xf5c5e04e, "device_add" },
	{ 0xff2022d, "transport_class_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfa2a4fda, "sysfs_create_link" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x687c6ac4, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x16e6d67f, "get_device" },
	{ 0xbd508a26, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0x1259bddc, "scsi_get_vpd_page" },
	{ 0x53782a5d, "transport_remove_device" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x96e91be1, "bsg_job_done" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x1d371342, "bsg_remove_queue" },
	{ 0x4f0c5982, "bsg_setup_queue" },
	{ 0x94b38714, "scsi_mode_sense" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E83F2E0F962F9576D1B84AD");
