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
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x89e4046, "devm_kfree" },
	{ 0x2c499467, "platform_device_put" },
	{ 0x69612d7a, "platform_device_add_data" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0xb2922cca, "gpiod_put" },
	{ 0x4edb97c5, "desc_to_gpio" },
	{ 0x411f7cad, "gpiod_get_index" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x9ff4aa3f, "gpiod_count" },
	{ 0x5a921311, "strncmp" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("acpi*:MSHW0028:*");

MODULE_INFO(srcversion, "3D355A7E3EB48C366961A03");
