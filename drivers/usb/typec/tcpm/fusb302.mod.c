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
	{ 0x9b02585d, "single_release" },
	{ 0x94216657, "seq_read" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x9e0bd753, "tcpm_pd_hard_reset" },
	{ 0xceb50012, "tcpm_vbus_change" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x56470118, "__warn_printk" },
	{ 0xef2f45f3, "i2c_smbus_write_i2c_block_data" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xc37b9769, "tcpm_cc_change" },
	{ 0x3b84657b, "tcpm_pd_transmit_complete" },
	{ 0xb655342c, "tcpm_pd_receive" },
	{ 0x731cb5d4, "i2c_smbus_read_i2c_block_data" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x96848186, "scnprintf" },
	{ 0x148653, "vsnprintf" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x6ac34c66, "fwnode_create_software_node" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0x28b2ea29, "devm_gpiod_get" },
	{ 0xc5e7e150, "extcon_get_extcon_dev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe5cf4641, "tcpm_register_port" },
	{ 0x1598fb9d, "device_get_named_child_node" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0x69eb3786, "device_property_read_string" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd349d253, "seq_printf" },
	{ 0xe4345174, "single_open" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x6e936613, "usb_debug_root" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbd5a1957, "extcon_get_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0x76eeda4b, "tcpm_unregister_port" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,tcpm");

MODULE_ALIAS("i2c:typec_fusb302");
MODULE_ALIAS("of:N*T*Cfcs,fusb302");
MODULE_ALIAS("of:N*T*Cfcs,fusb302C*");

MODULE_INFO(srcversion, "2A085BB33943842E81CBD3C");
