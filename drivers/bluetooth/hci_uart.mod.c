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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xff80ab3, "skb_queue_head" },
	{ 0x8fde019c, "hci_recv_diag" },
	{ 0xdc6699cb, "acpi_dev_free_resource_list" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x1537b21c, "debugfs_create_u8" },
	{ 0x49843e91, "__hci_cmd_sync" },
	{ 0xee111615, "param_ops_int" },
	{ 0x161b843f, "btintel_enter_mfg" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x214e4265, "bt_warn" },
	{ 0xa6873fa1, "qca_set_bdaddr" },
	{ 0xe1e9debf, "hci_register_dev" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0xbca6b6c1, "qca_set_bdaddr_rome" },
	{ 0xb25a454e, "acpi_dev_get_property" },
	{ 0x59e2d635, "rcuwait_wake_up" },
	{ 0x55f8d054, "btbcm_check_bdaddr" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x81c19d61, "hci_reset_dev" },
	{ 0xf2746719, "tty_unthrottle" },
	{ 0xf7037635, "btbcm_set_bdaddr" },
	{ 0x3915dab4, "btbcm_write_pcm_int_params" },
	{ 0xae45b671, "__percpu_down_read" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x28b2ea29, "devm_gpiod_get" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3b716f55, "serdev_device_close" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x707cf558, "qca_read_soc_version" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x54a2d145, "hci_recv_frame" },
	{ 0x4edb97c5, "desc_to_gpio" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x582cd715, "hci_unregister_dev" },
	{ 0x81d66d02, "__hci_cmd_sync_ev" },
	{ 0x6631a567, "devm_clk_get_optional" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x48554d91, "tty_unregister_ldisc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xce356d74, "serdev_device_write_buf" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x82a53f27, "btintel_read_boot_params" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x401e43c5, "devm_regulator_bulk_get" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x718b8b7, "bt_info" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3e51a3c4, "serdev_device_set_tiocm" },
	{ 0xf752e98c, "acpi_match_device" },
	{ 0x6604ef93, "debugfs_create_u32" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xbc26a324, "qca_uart_setup" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbc294c30, "__serdev_device_driver_register" },
	{ 0x257bee8f, "serdev_device_wait_until_sent" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xca14219, "dev_coredumpv" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc5181456, "__percpu_init_rwsem" },
	{ 0x7b302f33, "tty_ldisc_flush" },
	{ 0x2d4f4124, "btintel_set_event_mask_mfg" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x3ffb9822, "debugfs_create_u64" },
	{ 0x24ed49d8, "n_tty_ioctl_helper" },
	{ 0x405042c7, "btintel_load_ddc_config" },
	{ 0x459f3f88, "skb_push" },
	{ 0xee8d0aa5, "btrtl_set_quirks" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x69eb3786, "device_property_read_string" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb150ea3a, "serdev_device_get_tiocm" },
	{ 0x515610c, "serdev_device_write_flush" },
	{ 0xac4c0711, "devm_clk_put" },
	{ 0x9866dd4e, "device_property_read_u8_array" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0x3a6a0e57, "debugfs_create_bool" },
	{ 0xfa227d2f, "device_wakeup_enable" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf8db5365, "devm_acpi_dev_add_driver_gpios" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf05e2bdb, "regulator_set_load" },
	{ 0x6bc34978, "percpu_up_write" },
	{ 0x7de49b08, "btbcm_read_pcm_int_params" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x232b032c, "device_wakeup_disable" },
	{ 0x99f018c4, "nvmem_cell_read" },
	{ 0xdfbcf889, "module_put" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8b149c36, "clk_is_match" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x6758619e, "btintel_set_diag" },
	{ 0x891ae470, "btintel_exit_mfg" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xea6e215, "tty_driver_flush_buffer" },
	{ 0xcbb3c845, "devm_free_irq" },
	{ 0x761527a1, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x36f1e2cd, "btrtl_get_uart_settings" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd2493fc1, "device_reprobe" },
	{ 0xaf78f260, "btrtl_free" },
	{ 0x7decbec8, "acpi_dev_get_resources" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x99261972, "devm_clk_get" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x35f4c32e, "serdev_device_set_parity" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9924539c, "btintel_set_bdaddr" },
	{ 0x16e6d67f, "get_device" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xaa253ef8, "btintel_version_info" },
	{ 0x556cca46, "x86_apple_machine" },
	{ 0x2d62c5a5, "serdev_device_open" },
	{ 0x545b62f7, "qca_send_pre_shutdown_cmd" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ad7e5de, "btintel_read_version" },
	{ 0xd00cee59, "hci_alloc_dev_priv" },
	{ 0x69acdf38, "memcpy" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0x5e12504b, "btrtl_initialize" },
	{ 0x18738f05, "serdev_device_set_flow_control" },
	{ 0x23598300, "btbcm_initialize" },
	{ 0x3335684a, "btintel_download_firmware" },
	{ 0x1564421, "request_firmware" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0xb76204, "nvmem_cell_get" },
	{ 0xb15f851c, "btintel_send_intel_reset" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x8c5afa49, "btrtl_download_firmware" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1b424de3, "btbcm_finalize" },
	{ 0x32f99271, "btintel_check_bdaddr" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0xc93577bc, "hci_free_dev" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x651ff016, "serdev_device_set_baudrate" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x23dc2750, "tty_register_ldisc" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x34340150, "gpiod_set_value" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x67944331, "percpu_down_write" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8e0ecc69, "device_set_wakeup_capable" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x175f066d, "tty_set_termios" },
	{ 0x7ce0d551, "gpiod_get_value_cansleep" },
	{ 0x9f1241c8, "percpu_free_rwsem" },
};

MODULE_INFO(depends, "bluetooth,btintel,btqca,btbcm,btrtl");

MODULE_ALIAS("acpi*:BCM2E00:*");
MODULE_ALIAS("acpi*:BCM2E01:*");
MODULE_ALIAS("acpi*:BCM2E02:*");
MODULE_ALIAS("acpi*:BCM2E03:*");
MODULE_ALIAS("acpi*:BCM2E04:*");
MODULE_ALIAS("acpi*:BCM2E05:*");
MODULE_ALIAS("acpi*:BCM2E06:*");
MODULE_ALIAS("acpi*:BCM2E07:*");
MODULE_ALIAS("acpi*:BCM2E08:*");
MODULE_ALIAS("acpi*:BCM2E09:*");
MODULE_ALIAS("acpi*:BCM2E0A:*");
MODULE_ALIAS("acpi*:BCM2E0B:*");
MODULE_ALIAS("acpi*:BCM2E0C:*");
MODULE_ALIAS("acpi*:BCM2E0D:*");
MODULE_ALIAS("acpi*:BCM2E0E:*");
MODULE_ALIAS("acpi*:BCM2E0F:*");
MODULE_ALIAS("acpi*:BCM2E10:*");
MODULE_ALIAS("acpi*:BCM2E11:*");
MODULE_ALIAS("acpi*:BCM2E12:*");
MODULE_ALIAS("acpi*:BCM2E13:*");
MODULE_ALIAS("acpi*:BCM2E14:*");
MODULE_ALIAS("acpi*:BCM2E15:*");
MODULE_ALIAS("acpi*:BCM2E16:*");
MODULE_ALIAS("acpi*:BCM2E17:*");
MODULE_ALIAS("acpi*:BCM2E18:*");
MODULE_ALIAS("acpi*:BCM2E19:*");
MODULE_ALIAS("acpi*:BCM2E1A:*");
MODULE_ALIAS("acpi*:BCM2E1B:*");
MODULE_ALIAS("acpi*:BCM2E1C:*");
MODULE_ALIAS("acpi*:BCM2E1D:*");
MODULE_ALIAS("acpi*:BCM2E1F:*");
MODULE_ALIAS("acpi*:BCM2E20:*");
MODULE_ALIAS("acpi*:BCM2E21:*");
MODULE_ALIAS("acpi*:BCM2E22:*");
MODULE_ALIAS("acpi*:BCM2E23:*");
MODULE_ALIAS("acpi*:BCM2E24:*");
MODULE_ALIAS("acpi*:BCM2E25:*");
MODULE_ALIAS("acpi*:BCM2E26:*");
MODULE_ALIAS("acpi*:BCM2E27:*");
MODULE_ALIAS("acpi*:BCM2E28:*");
MODULE_ALIAS("acpi*:BCM2E29:*");
MODULE_ALIAS("acpi*:BCM2E2A:*");
MODULE_ALIAS("acpi*:BCM2E2B:*");
MODULE_ALIAS("acpi*:BCM2E2C:*");
MODULE_ALIAS("acpi*:BCM2E2D:*");
MODULE_ALIAS("acpi*:BCM2E2E:*");
MODULE_ALIAS("acpi*:BCM2E2F:*");
MODULE_ALIAS("acpi*:BCM2E30:*");
MODULE_ALIAS("acpi*:BCM2E31:*");
MODULE_ALIAS("acpi*:BCM2E32:*");
MODULE_ALIAS("acpi*:BCM2E33:*");
MODULE_ALIAS("acpi*:BCM2E34:*");
MODULE_ALIAS("acpi*:BCM2E35:*");
MODULE_ALIAS("acpi*:BCM2E36:*");
MODULE_ALIAS("acpi*:BCM2E37:*");
MODULE_ALIAS("acpi*:BCM2E38:*");
MODULE_ALIAS("acpi*:BCM2E39:*");
MODULE_ALIAS("acpi*:BCM2E3A:*");
MODULE_ALIAS("acpi*:BCM2E3B:*");
MODULE_ALIAS("acpi*:BCM2E3C:*");
MODULE_ALIAS("acpi*:BCM2E3D:*");
MODULE_ALIAS("acpi*:BCM2E3E:*");
MODULE_ALIAS("acpi*:BCM2E3F:*");
MODULE_ALIAS("acpi*:BCM2E40:*");
MODULE_ALIAS("acpi*:BCM2E41:*");
MODULE_ALIAS("acpi*:BCM2E42:*");
MODULE_ALIAS("acpi*:BCM2E43:*");
MODULE_ALIAS("acpi*:BCM2E44:*");
MODULE_ALIAS("acpi*:BCM2E45:*");
MODULE_ALIAS("acpi*:BCM2E46:*");
MODULE_ALIAS("acpi*:BCM2E47:*");
MODULE_ALIAS("acpi*:BCM2E48:*");
MODULE_ALIAS("acpi*:BCM2E49:*");
MODULE_ALIAS("acpi*:BCM2E4A:*");
MODULE_ALIAS("acpi*:BCM2E4B:*");
MODULE_ALIAS("acpi*:BCM2E4C:*");
MODULE_ALIAS("acpi*:BCM2E4D:*");
MODULE_ALIAS("acpi*:BCM2E4E:*");
MODULE_ALIAS("acpi*:BCM2E4F:*");
MODULE_ALIAS("acpi*:BCM2E50:*");
MODULE_ALIAS("acpi*:BCM2E51:*");
MODULE_ALIAS("acpi*:BCM2E52:*");
MODULE_ALIAS("acpi*:BCM2E53:*");
MODULE_ALIAS("acpi*:BCM2E54:*");
MODULE_ALIAS("acpi*:BCM2E55:*");
MODULE_ALIAS("acpi*:BCM2E56:*");
MODULE_ALIAS("acpi*:BCM2E57:*");
MODULE_ALIAS("acpi*:BCM2E58:*");
MODULE_ALIAS("acpi*:BCM2E59:*");
MODULE_ALIAS("acpi*:BCM2E5A:*");
MODULE_ALIAS("acpi*:BCM2E5B:*");
MODULE_ALIAS("acpi*:BCM2E5C:*");
MODULE_ALIAS("acpi*:BCM2E5D:*");
MODULE_ALIAS("acpi*:BCM2E5E:*");
MODULE_ALIAS("acpi*:BCM2E5F:*");
MODULE_ALIAS("acpi*:BCM2E60:*");
MODULE_ALIAS("acpi*:BCM2E61:*");
MODULE_ALIAS("acpi*:BCM2E62:*");
MODULE_ALIAS("acpi*:BCM2E63:*");
MODULE_ALIAS("acpi*:BCM2E64:*");
MODULE_ALIAS("acpi*:BCM2E65:*");
MODULE_ALIAS("acpi*:BCM2E66:*");
MODULE_ALIAS("acpi*:BCM2E67:*");
MODULE_ALIAS("acpi*:BCM2E68:*");
MODULE_ALIAS("acpi*:BCM2E69:*");
MODULE_ALIAS("acpi*:BCM2E6B:*");
MODULE_ALIAS("acpi*:BCM2E6D:*");
MODULE_ALIAS("acpi*:BCM2E6E:*");
MODULE_ALIAS("acpi*:BCM2E6F:*");
MODULE_ALIAS("acpi*:BCM2E70:*");
MODULE_ALIAS("acpi*:BCM2E71:*");
MODULE_ALIAS("acpi*:BCM2E72:*");
MODULE_ALIAS("acpi*:BCM2E73:*");
MODULE_ALIAS("acpi*:BCM2E74:*");
MODULE_ALIAS("acpi*:BCM2E75:*");
MODULE_ALIAS("acpi*:BCM2E76:*");
MODULE_ALIAS("acpi*:BCM2E77:*");
MODULE_ALIAS("acpi*:BCM2E78:*");
MODULE_ALIAS("acpi*:BCM2E79:*");
MODULE_ALIAS("acpi*:BCM2E7A:*");
MODULE_ALIAS("acpi*:BCM2E7B:*");
MODULE_ALIAS("acpi*:BCM2E7C:*");
MODULE_ALIAS("acpi*:BCM2E7D:*");
MODULE_ALIAS("acpi*:BCM2E7E:*");
MODULE_ALIAS("acpi*:BCM2E7F:*");
MODULE_ALIAS("acpi*:BCM2E80:*");
MODULE_ALIAS("acpi*:BCM2E81:*");
MODULE_ALIAS("acpi*:BCM2E82:*");
MODULE_ALIAS("acpi*:BCM2E83:*");
MODULE_ALIAS("acpi*:BCM2E84:*");
MODULE_ALIAS("acpi*:BCM2E85:*");
MODULE_ALIAS("acpi*:BCM2E86:*");
MODULE_ALIAS("acpi*:BCM2E87:*");
MODULE_ALIAS("acpi*:BCM2E88:*");
MODULE_ALIAS("acpi*:BCM2E89:*");
MODULE_ALIAS("acpi*:BCM2E8A:*");
MODULE_ALIAS("acpi*:BCM2E8B:*");
MODULE_ALIAS("acpi*:BCM2E8C:*");
MODULE_ALIAS("acpi*:BCM2E8D:*");
MODULE_ALIAS("acpi*:BCM2E8E:*");
MODULE_ALIAS("acpi*:BCM2E90:*");
MODULE_ALIAS("acpi*:BCM2E92:*");
MODULE_ALIAS("acpi*:BCM2E93:*");
MODULE_ALIAS("acpi*:BCM2E94:*");
MODULE_ALIAS("acpi*:BCM2E95:*");
MODULE_ALIAS("acpi*:BCM2E96:*");
MODULE_ALIAS("acpi*:BCM2E97:*");
MODULE_ALIAS("acpi*:BCM2E98:*");
MODULE_ALIAS("acpi*:BCM2E99:*");
MODULE_ALIAS("acpi*:BCM2E9A:*");
MODULE_ALIAS("acpi*:BCM2E9B:*");
MODULE_ALIAS("acpi*:BCM2E9C:*");
MODULE_ALIAS("acpi*:BCM2E9D:*");
MODULE_ALIAS("acpi*:BCM2EA0:*");
MODULE_ALIAS("acpi*:BCM2EA1:*");
MODULE_ALIAS("acpi*:BCM2EA2:*");
MODULE_ALIAS("acpi*:BCM2EA3:*");
MODULE_ALIAS("acpi*:BCM2EA4:*");
MODULE_ALIAS("acpi*:BCM2EA5:*");
MODULE_ALIAS("acpi*:BCM2EA6:*");
MODULE_ALIAS("acpi*:BCM2EA7:*");
MODULE_ALIAS("acpi*:BCM2EA8:*");
MODULE_ALIAS("acpi*:BCM2EA9:*");
MODULE_ALIAS("acpi*:BCM2EAA:*");
MODULE_ALIAS("acpi*:BCM2EAB:*");
MODULE_ALIAS("acpi*:BCM2EAC:*");
MODULE_ALIAS("of:N*T*Crealtek,rtl8822cs-bt");
MODULE_ALIAS("of:N*T*Crealtek,rtl8822cs-btC*");
MODULE_ALIAS("of:N*T*Crealtek,rtl8723bs-bt");
MODULE_ALIAS("of:N*T*Crealtek,rtl8723bs-btC*");
MODULE_ALIAS("of:N*T*Crealtek,rtl8723ds-bt");
MODULE_ALIAS("of:N*T*Crealtek,rtl8723ds-btC*");
MODULE_ALIAS("acpi*:INT33E1:*");
MODULE_ALIAS("acpi*:INT33E3:*");
MODULE_ALIAS("acpi*:OBDA0623:*");
MODULE_ALIAS("acpi*:OBDA8723:*");
MODULE_ALIAS("of:N*T*Cti,cc2560");
MODULE_ALIAS("of:N*T*Cti,cc2560C*");
MODULE_ALIAS("of:N*T*Cti,wl1271-st");
MODULE_ALIAS("of:N*T*Cti,wl1271-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1273-st");
MODULE_ALIAS("of:N*T*Cti,wl1273-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1281-st");
MODULE_ALIAS("of:N*T*Cti,wl1281-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1283-st");
MODULE_ALIAS("of:N*T*Cti,wl1283-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1285-st");
MODULE_ALIAS("of:N*T*Cti,wl1285-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1801-st");
MODULE_ALIAS("of:N*T*Cti,wl1801-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1805-st");
MODULE_ALIAS("of:N*T*Cti,wl1805-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1807-st");
MODULE_ALIAS("of:N*T*Cti,wl1807-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1831-st");
MODULE_ALIAS("of:N*T*Cti,wl1831-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1835-st");
MODULE_ALIAS("of:N*T*Cti,wl1835-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1837-st");
MODULE_ALIAS("of:N*T*Cti,wl1837-stC*");
MODULE_ALIAS("acpi*:QCOM6390:*");
MODULE_ALIAS("acpi*:DLA16390:*");
MODULE_ALIAS("acpi*:DLB16390:*");
MODULE_ALIAS("acpi*:DLB26390:*");

MODULE_INFO(srcversion, "006D213F41446E2F4EDCCEF");
