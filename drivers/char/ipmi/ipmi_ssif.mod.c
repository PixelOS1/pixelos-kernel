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
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xee111615, "param_ops_int" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x230094ac, "ipmi_smi_watchdog_pretimeout" },
	{ 0x1f65170f, "ipmi_alloc_smi_msg" },
	{ 0x591c0306, "_dev_notice" },
	{ 0xa89a1cf1, "ipmi_dmi_get_slave_addr" },
	{ 0x9df2d08a, "ipmi_add_smi" },
	{ 0x31d1e5a1, "device_add_groups" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x67369b42, "ipmi_addr_src_to_str" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x96a6e5e8, "ipmi_smi_msg_received" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x9866dd4e, "device_property_read_u8_array" },
	{ 0xcf52ce0c, "device_property_read_u16_array" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf727f0b0, "device_remove_groups" },
	{ 0xf9c18e6b, "i2c_smbus_read_block_data" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf634309c, "i2c_smbus_write_block_data" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x11089ac7, "_ctype" },
	{ 0x16e6d67f, "get_device" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xe4330a39, "ipmi_unregister_smi" },
	{ 0xa6257a2f, "complete" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,ipmi_msghandler");

MODULE_ALIAS("i2c:ipmi_ssif");
MODULE_ALIAS("acpi*:IPI0001:*");

MODULE_INFO(srcversion, "BAEA3EA013C2AE69C660F74");
