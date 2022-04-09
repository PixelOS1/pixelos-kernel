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
	{ 0x93953aac, "wl12xx_cmd_build_probe_req" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0xc3c7a3bd, "wlcore_set_key" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xfd22074b, "wlcore_event_beacon_loss" },
	{ 0xee111615, "param_ops_int" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x85a990aa, "wlcore_event_dummy_packet" },
	{ 0xc003eb5f, "wlcore_event_inactive_sta" },
	{ 0xce385e23, "wlcore_event_ba_rx_constraint" },
	{ 0xd3b657ab, "ieee80211_radar_detected" },
	{ 0xc3124fef, "wlcore_event_fw_logger" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xd93e5bce, "wlcore_event_rssi_trigger" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xe70ad0ac, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0xd06fc41, "wlcore_probe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc62ed872, "wlcore_alloc_hw" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x20351125, "wlcore_get_native_channel_type" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe72b2bf4, "wl1271_cmd_configure" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x86632d5a, "default_llseek" },
	{ 0xd2431468, "wlcore_event_sched_scan_completed" },
	{ 0x524873b, "wlcore_boot_upload_firmware" },
	{ 0xae13c636, "wlcore_set_partition" },
	{ 0x9166fada, "strncpy" },
	{ 0xb13a5a47, "wlcore_enable_interrupts" },
	{ 0x7d11271e, "nla_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x22749e72, "simple_open" },
	{ 0x92c8c8c1, "ieee80211_queue_delayed_work" },
	{ 0xd93389c9, "__cfg80211_send_event_skb" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0xf71d8253, "wlcore_event_channel_switch" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xeb473e18, "__cfg80211_alloc_event_skb" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x358ec756, "wlcore_disable_interrupts" },
	{ 0xe6f29456, "wlcore_remove" },
	{ 0x92997ed8, "_printk" },
	{ 0xc50f2e3b, "ieee80211_find_sta" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0x91a94b02, "wlcore_event_max_tx_failure" },
	{ 0xb6ea36ea, "wl1271_free_tx_id" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x7d66791f, "ieee80211_stop_rx_ba_session" },
	{ 0xecf3bfe4, "wlcore_scan_sched_scan_results" },
	{ 0x5d3c4d7a, "ieee80211_get_hdrlen_from_skb" },
	{ 0x41a7073a, "wlcore_free_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x85498cd1, "wl1271_format_buffer" },
	{ 0x69acdf38, "memcpy" },
	{ 0x412986bd, "wl1271_debugfs_update_stats" },
	{ 0xb273a7d9, "wlcore_set_scan_chan_params" },
	{ 0x1564421, "request_firmware" },
	{ 0x4af36986, "wlcore_boot_run_firmware" },
	{ 0x370aa1e7, "wlcore_translate_addr" },
	{ 0xce605ad7, "wlcore_scan_sched_scan_ssid_list" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4b7cf97d, "wlcore_event_roc_complete" },
	{ 0xb0e602eb, "memmove" },
	{ 0xa84a9f52, "wl12xx_is_dummy_packet" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xccafbbe8, "wl1271_cmd_send" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xbaa89437, "ieee80211_connection_loss" },
};

MODULE_INFO(depends, "wlcore,mac80211,cfg80211");

MODULE_ALIAS("platform:wl18xx");

MODULE_INFO(srcversion, "6B559F0E0CBCB199A382F5B");
