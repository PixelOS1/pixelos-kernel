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
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x658000c8, "transport_destroy_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7de9a0a1, "attribute_container_unregister" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x339c0a66, "device_del" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x6373128a, "transport_add_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1d57e1b, "transport_configure_device" },
	{ 0xef6fa3c, "attribute_container_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xf5c5e04e, "device_add" },
	{ 0xff2022d, "transport_class_unregister" },
	{ 0x338bb812, "scsi_target_unblock" },
	{ 0x761527a1, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x687c6ac4, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x16e6d67f, "get_device" },
	{ 0x1a632a59, "__scsi_iterate_devices" },
	{ 0xbd508a26, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0x53782a5d, "transport_remove_device" },
	{ 0x9f7f8a8a, "scsi_target_block" },
	{ 0xf53c7135, "dev_set_name" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0D37EE6663C10F5A747AFCC");
