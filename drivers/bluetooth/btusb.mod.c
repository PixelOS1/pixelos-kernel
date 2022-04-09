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
	{ 0x22749e72, "simple_open" },
	{ 0x86632d5a, "default_llseek" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x718b8b7, "bt_info" },
	{ 0x1564421, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0xd23eab6e, "btbcm_setup_apple" },
	{ 0x15f4f10f, "usb_ifnum_to_if" },
	{ 0xf7037635, "btbcm_set_bdaddr" },
	{ 0x4cf5a809, "btbcm_setup_patchram" },
	{ 0x948bf788, "btintel_configure_setup" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xe1e9debf, "hci_register_dev" },
	{ 0x761ae28f, "usb_driver_claim_interface" },
	{ 0xe29d2fd1, "btrtl_shutdown_realtek" },
	{ 0x90565ce2, "btrtl_setup_realtek" },
	{ 0xd6656561, "gpiod_get_optional" },
	{ 0xd00cee59, "hci_alloc_dev_priv" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd1f2a25a, "usb_match_id" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5ca65702, "usb_get_from_anchor" },
	{ 0x8fde019c, "hci_recv_diag" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x24e48d13, "skb_put" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xd8f06747, "btintel_bootup" },
	{ 0x4f5094d, "btintel_secure_send_result" },
	{ 0x54a2d145, "hci_recv_frame" },
	{ 0xe9cc535d, "usb_autopm_put_interface" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0xcb761840, "usb_queue_reset_device" },
	{ 0xa81f9c12, "usb_autopm_get_interface" },
	{ 0x81d66d02, "__hci_cmd_sync_ev" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0x19b483b9, "usb_enable_autosuspend" },
	{ 0x8e0ecc69, "device_set_wakeup_capable" },
	{ 0xc5d9d883, "pm_runtime_forbid" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0x214e4265, "bt_warn" },
	{ 0x49843e91, "__hci_cmd_sync" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0xd6f46ea2, "usb_driver_release_interface" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0xc93577bc, "hci_free_dev" },
	{ 0xb2922cca, "gpiod_put" },
	{ 0x582cd715, "hci_unregister_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x37a0cba, "kfree" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x43d337ee, "hci_cmd_sync_cancel" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0x921a7980, "usb_unanchor_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xdeebbef5, "usb_anchor_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bluetooth,btbcm,btintel,btrtl");

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("of:N*T*Cusbcf3,e300");
MODULE_ALIAS("of:N*T*Cusbcf3,e300C*");
MODULE_ALIAS("of:N*T*Cusb4ca,301a");
MODULE_ALIAS("of:N*T*Cusb4ca,301aC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CC32DA36C971A79240725A3");
