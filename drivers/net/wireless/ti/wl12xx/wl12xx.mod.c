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
	{ 0x7ba254db, "wlcore_boot_upload_nvs" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0xc3c7a3bd, "wlcore_set_key" },
	{ 0x52c5c727, "wl1271_acx_init_mem_config" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xfd22074b, "wlcore_event_beacon_loss" },
	{ 0x85a990aa, "wlcore_event_dummy_packet" },
	{ 0xc003eb5f, "wlcore_event_inactive_sta" },
	{ 0xce385e23, "wlcore_event_ba_rx_constraint" },
	{ 0xe65ee1e4, "wl1271_acx_pm_config" },
	{ 0x253277ab, "wlcore_calc_packet_alignment" },
	{ 0xd93e5bce, "wlcore_event_rssi_trigger" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe70ad0ac, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0xd06fc41, "wlcore_probe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc62ed872, "wlcore_alloc_hw" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xa9e2678a, "wl1271_acx_set_ht_capabilities" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe72b2bf4, "wl1271_cmd_configure" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0x30d7929d, "wl1271_cmd_data_path" },
	{ 0xc3cbe056, "wl12xx_acx_mem_cfg" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xd2431468, "wlcore_event_sched_scan_completed" },
	{ 0x524873b, "wlcore_boot_upload_firmware" },
	{ 0x97d17e98, "wl1271_acx_sleep_auth" },
	{ 0xae13c636, "wlcore_set_partition" },
	{ 0xb13a5a47, "wlcore_enable_interrupts" },
	{ 0xaf1be89f, "wl1271_cmd_test" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x22749e72, "simple_open" },
	{ 0x92c8c8c1, "ieee80211_queue_delayed_work" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xf71d8253, "wlcore_event_channel_switch" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x358ec756, "wlcore_disable_interrupts" },
	{ 0xe6f29456, "wlcore_remove" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x91a94b02, "wlcore_event_max_tx_failure" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xecf3bfe4, "wlcore_scan_sched_scan_results" },
	{ 0x16bf6669, "wlcore_event_soft_gemini_sense" },
	{ 0x41a7073a, "wlcore_free_hw" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d73cc45, "wlcore_tx_complete" },
	{ 0x85498cd1, "wl1271_format_buffer" },
	{ 0x69acdf38, "memcpy" },
	{ 0x412986bd, "wl1271_debugfs_update_stats" },
	{ 0xb273a7d9, "wlcore_set_scan_chan_params" },
	{ 0x4af36986, "wlcore_boot_run_firmware" },
	{ 0x370aa1e7, "wlcore_translate_addr" },
	{ 0xce605ad7, "wlcore_scan_sched_scan_ssid_list" },
	{ 0x4b7cf97d, "wlcore_event_roc_complete" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xccafbbe8, "wl1271_cmd_send" },
	{ 0x174a8750, "wl1271_tx_min_rate_get" },
};

MODULE_INFO(depends, "wlcore,mac80211");

MODULE_ALIAS("platform:wl12xx");

MODULE_INFO(srcversion, "18324CE9A10B8810C163278");
