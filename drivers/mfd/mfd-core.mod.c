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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0xa17ef8db, "set_primary_fwnode" },
	{ 0x38d8baf3, "device_add_software_node" },
	{ 0x83af720c, "irq_create_mapping_affinity" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x3919b87b, "regulator_bulk_register_supply_alias" },
	{ 0xe7ab247a, "pm_runtime_no_callbacks" },
	{ 0x5bc8fa81, "acpi_match_device_ids" },
	{ 0x268c8090, "device_remove_software_node" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x16720bc7, "__devres_alloc_node" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xf1858ff3, "platform_device_add_resources" },
	{ 0xea85470f, "device_for_each_child_reverse" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfa174f0b, "acpi_find_child_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x69612d7a, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa4faa6c8, "devres_add" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xe41c763b, "regulator_bulk_unregister_supply_alias" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0x2c499467, "platform_device_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "83A55E3D822C5272A6D1A0B");
