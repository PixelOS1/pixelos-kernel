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
	{ 0xb3153dca, "driver_unregister" },
	{ 0xa41ee6e0, "class_interface_unregister" },
	{ 0x139d4a49, "scsi_register_driver" },
	{ 0xf0b79c4d, "scsi_register_interface" },
	{ 0xcee7670f, "enclosure_for_each_device" },
	{ 0x8811b08c, "sas_get_address" },
	{ 0x6515ced3, "scsi_is_sas_rphy" },
	{ 0x1a632a59, "__scsi_iterate_devices" },
	{ 0xf7b7bf13, "enclosure_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5387cc3d, "enclosure_component_alloc" },
	{ 0x3b8fbb0f, "enclosure_component_register" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xfb578fc5, "memset" },
	{ 0x9316b04c, "kobject_uevent" },
	{ 0xc817ae35, "enclosure_add_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x9f37056, "__scsi_execute" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x448168f0, "enclosure_remove_device" },
	{ 0xf65e8d3d, "enclosure_unregister" },
	{ 0x761527a1, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x75c51fc7, "enclosure_find" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "enclosure,scsi_transport_sas");


MODULE_INFO(srcversion, "5F96A66949F5E83EC6A7FE0");
