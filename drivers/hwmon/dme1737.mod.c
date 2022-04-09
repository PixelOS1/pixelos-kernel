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
	{ 0xcd9dd851, "param_ops_ushort" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x2c499467, "platform_device_put" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0xf1858ff3, "platform_device_add_resources" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xc85cb619, "i2c_match_id" },
	{ 0x231a9a8f, "hwmon_device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0x2921e434, "sysfs_create_file_ns" },
	{ 0x2ebc17e6, "sysfs_chmod_file" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x92997ed8, "_printk" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe734c844, "hwmon_device_unregister" },
	{ 0x7408f66e, "sysfs_remove_file_ns" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,hwmon-vid");

MODULE_ALIAS("i2c:dme1737");
MODULE_ALIAS("i2c:sch5027");

MODULE_INFO(srcversion, "7BBBC0C796FE8CA3F8639CA");
