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
	{ 0xa24f23d8, "__request_module" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf9a482f9, "msleep" },
	{ 0x53b954a2, "up_read" },
	{ 0xee111615, "param_ops_int" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x58d87417, "pci_set_cacheline_size" },
	{ 0x2f27916d, "pci_stop_and_remove_bus_device" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xecef2ad8, "pci_fixup_cardbus" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x45c5725f, "pci_bus_assign_resources" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x668b19a1, "down_read" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xdaf02d94, "device_register" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x9604dda, "freezing_slow_path" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x52d91e96, "class_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfe576e48, "pci_bus_add_devices" },
	{ 0xce807a25, "up_write" },
	{ 0x97ac8144, "__class_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x5e2fd52f, "pci_scan_slot" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd8d1d060, "pci_scan_bridge" },
	{ 0x1000e51, "schedule" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0x16e6d67f, "get_device" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x776c87fd, "device_unregister" },
	{ 0xa6257a2f, "complete" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x20e5405b, "pci_bus_size_bridges" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "62AE3B549ED81340E5277E1");
