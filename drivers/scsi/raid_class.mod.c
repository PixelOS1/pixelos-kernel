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
	{ 0x8e96202e, "attribute_container_classdev_to_container" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0x7de9a0a1, "attribute_container_unregister" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xef6fa3c, "attribute_container_register" },
	{ 0xf5c5e04e, "device_add" },
	{ 0xff2022d, "transport_class_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160443, "attribute_container_find_class_device" },
	{ 0x761527a1, "put_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x16e6d67f, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0x776c87fd, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0xe71d5f00, "scsi_is_sdev_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6EDEED1D99649BFAD4562FE");
