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
	{ 0x49d74de6, "acpi_bus_unregister_driver" },
	{ 0xafe29401, "acpi_bus_register_driver" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x5a921311, "strncmp" },
	{ 0xda096e40, "acpi_device_hid" },
	{ 0x37a0cba, "kfree" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x331337dc, "input_event" },
	{ 0xb7214e95, "pm_wakeup_dev_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:MSHW0028:*");
MODULE_ALIAS("acpi*:MSHW0040:*");

MODULE_INFO(srcversion, "CBE429B236B4C808CEE77D1");
