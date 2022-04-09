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
	{ 0xa295f2cc, "pnp_unregister_driver" },
	{ 0xeaa7e4ea, "pnp_register_driver" },
	{ 0x1344d7e6, "acpi_enable_gpe" },
	{ 0x88fd45c, "vga_switcheroo_register_handler" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xdf918de4, "bus_for_each_dev" },
	{ 0x73c98c2d, "pci_bus_type" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xdab0f892, "apple_bl_unregister" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8868fc02, "backlight_device_register" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x85bd1608, "__request_region" },
	{ 0x3b26e6a5, "pnp_get_resource" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xa6257a2f, "complete" },
	{ 0x2c63e051, "apple_bl_register" },
	{ 0x8826c13b, "acpi_video_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xbed6a279, "backlight_device_unregister" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xa4faf62a, "acpi_disable_gpe" },
	{ 0x8eaf2a5f, "vga_switcheroo_unregister_handler" },
	{ 0x92997ed8, "_printk" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "apple_bl,video,backlight");

MODULE_ALIAS("pnp:dAPP000B*");
MODULE_ALIAS("acpi*:APP000B:*");

MODULE_INFO(srcversion, "F7A4BF540D78333189417F8");
