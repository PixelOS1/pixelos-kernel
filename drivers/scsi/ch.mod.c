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
	{ 0xee111615, "param_ops_int" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x4195254f, "class_destroy" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x139d4a49, "scsi_register_driver" },
	{ 0x3be38d4c, "__register_chrdev" },
	{ 0x1aafecfe, "__class_create" },
	{ 0x92997ed8, "_printk" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x44a86bca, "scsi_device_lookup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4dce8ff3, "device_create" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0xaf40110d, "scsi_ioctl" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe345078a, "scsi_ioctl_block_when_processing_errors" },
	{ 0x90ce49bd, "device_destroy" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5ac4b094, "scsi_device_get" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x20978fb9, "idr_find" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd901397a, "scsi_print_sense_hdr" },
	{ 0x9f37056, "__scsi_execute" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "00B5330A1B53E23B1408F0F");
