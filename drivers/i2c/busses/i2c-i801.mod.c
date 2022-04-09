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
	{ 0x73fec674, "param_ops_uint" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0x2a303d4d, "check_signature" },
	{ 0xde80cd09, "ioremap" },
	{ 0x522f4659, "i2c_handle_smbus_host_notify" },
	{ 0xa6257a2f, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0xeb7f6046, "acpi_get_devices" },
	{ 0x924274ba, "i2c_register_spd" },
	{ 0x78ddb76b, "dmi_match" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0xe13cd8a7, "dmi_name_in_vendors" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x5c8bb90c, "i2c_add_adapter" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0xdbcf041a, "acpi_install_address_space_handler" },
	{ 0xb782a633, "pcim_pin_device" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa17ef8db, "set_primary_fwnode" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0x92e26bf, "acpi_remove_address_space_handler" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x827e61f8, "acpi_has_watchdog" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0xf802070c, "pci_bus_read_config_dword" },
	{ 0xba8b44f2, "pci_bus_write_config_byte" },
	{ 0x86afab43, "pci_bus_read_config_byte" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x754d539c, "strlen" },
	{ 0x60941796, "i2c_new_client_device" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x81188c30, "match_string" },
	{ 0x72f14ff7, "acpi_get_object_info" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xbe49252c, "acpi_os_write_port" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb654ef65, "acpi_os_read_port" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5012a70, "pv_ops" },
};

MODULE_INFO(depends, "i2c-core,i2c-smbus");

MODULE_ALIAS("pci:v00008086d00002413sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002423sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002443sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002483sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000266Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000269Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000283Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002930sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D71sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D72sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F3Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000023B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008CA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002292sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A123sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001BC9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AD4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A223sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A323sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DA3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000038A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DA3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AA3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054A3sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5E2A9E8AEAA22C29A118552");
