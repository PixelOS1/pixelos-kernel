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
	{ 0x5b7424d5, "bus_register" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7549c36, "driver_register" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xdbcf041a, "acpi_install_address_space_handler" },
	{ 0x92e26bf, "acpi_remove_address_space_handler" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x72f14ff7, "acpi_get_object_info" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x8371509, "nonseekable_open" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa164df89, "misc_register" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x52d91e96, "class_unregister" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x4dce8ff3, "device_create" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xf5c5e04e, "device_add" },
	{ 0x97ac8144, "__class_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xbb6269b0, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0xdfbcf889, "module_put" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0x776c87fd, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0xc708f1fe, "ec_write" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:PNP0C14:*");
MODULE_ALIAS("acpi*:pnp0c14:*");

MODULE_INFO(srcversion, "EA4C3C42551719923C8AAD4");
