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
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0x2af975fa, "device_create_file" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xff282521, "rfkill_register" },
	{ 0x46e6e457, "rfkill_alloc" },
	{ 0x8868fc02, "backlight_device_register" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xbed6a279, "backlight_device_unregister" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x331337dc, "input_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rfkill,backlight");

MODULE_ALIAS("acpi*:ACCE0000:*");
MODULE_ALIAS("acpi*:ACCE0001:*");
MODULE_ALIAS("acpi*:TBLT0000:*");
MODULE_ALIAS("acpi*:IPML200:*");
MODULE_ALIAS("acpi*:FNBT0000:*");

MODULE_INFO(srcversion, "A045BA03AE8D10CB90AE5B8");
