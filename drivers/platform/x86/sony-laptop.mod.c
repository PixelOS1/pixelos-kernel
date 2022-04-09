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
	{ 0x71dfc095, "acpi_walk_resources" },
	{ 0xafe29401, "acpi_bus_register_driver" },
	{ 0xfc4152fc, "ec_read" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0x85bd1608, "__request_region" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xee111615, "param_ops_int" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x8868fc02, "backlight_device_register" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x72f14ff7, "acpi_get_object_info" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x49d74de6, "acpi_bus_unregister_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xff282521, "rfkill_register" },
	{ 0x4f55166f, "acpi_set_current_resources" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x5012a70, "pv_ops" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x331337dc, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa164df89, "misc_register" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xb598f6be, "acpi_bus_get_status" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xcdce87c, "rfkill_set_hw_state_reason" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x46e6e457, "rfkill_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0x7dd49bd0, "fasync_helper" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x5a921311, "strncmp" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x45a41106, "noop_llseek" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0x2af975fa, "device_create_file" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x85b5e625, "rfkill_set_states" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x4de1b089, "current_time" },
	{ 0x96848186, "scnprintf" },
	{ 0x76abb595, "kill_fasync" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xbed6a279, "backlight_device_unregister" },
	{ 0x60a293d7, "param_ops_ulong" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2c499467, "platform_device_put" },
	{ 0xefc7653c, "input_allocate_device" },
};

MODULE_INFO(depends, "backlight,rfkill,video");

MODULE_ALIAS("acpi*:SNY5001:*");
MODULE_ALIAS("acpi*:SNY6001:*");

MODULE_INFO(srcversion, "EE85D847486AD0A9594FF4B");
