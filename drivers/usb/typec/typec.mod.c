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
	{ 0x6eb91138, "class_find_device" },
	{ 0x5b7424d5, "bus_register" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7549c36, "driver_register" },
	{ 0xffdda54f, "component_unbind_all" },
	{ 0x81188c30, "match_string" },
	{ 0x9316b04c, "kobject_uevent" },
	{ 0x3c99228e, "component_bind_all" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1598fb9d, "device_get_named_child_node" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc3a1d832, "component_match_add_release" },
	{ 0xbf9f0306, "component_master_del" },
	{ 0x34091051, "fwnode_property_present" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb83a3b96, "acpi_bus_type" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xdaf02d94, "device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3ba33f72, "device_find_child" },
	{ 0x52d91e96, "class_unregister" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd95782e8, "fwnode_property_read_u16_array" },
	{ 0xbb99e571, "sysfs_remove_link" },
	{ 0xf5c5e04e, "device_add" },
	{ 0x97ac8144, "__class_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xbb6269b0, "bus_unregister" },
	{ 0xf52ebe9b, "sysfs_update_group" },
	{ 0x1f0ca91d, "kobject_uevent_env" },
	{ 0x510783b9, "fwnode_get_name" },
	{ 0xfa2a4fda, "sysfs_create_link" },
	{ 0xdfbcf889, "module_put" },
	{ 0x485b0aa5, "fwnode_property_read_u32_array" },
	{ 0xdf918de4, "bus_for_each_dev" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3be05c4a, "device_match_fwnode" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbc556315, "sysfs_notify" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x16e6d67f, "get_device" },
	{ 0x4901bf50, "fwnode_get_next_child_node" },
	{ 0xc62df768, "fwnode_connection_find_match" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0x776c87fd, "device_unregister" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x8a96c71f, "component_master_add_with_match" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8088F7A97351B750A732C1D");
