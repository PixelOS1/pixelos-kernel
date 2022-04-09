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
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf9a482f9, "msleep" },
	{ 0xefff6cf9, "mt7615_init_device" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xb939a9fd, "mt76_dma_attach" },
	{ 0x9c82e173, "mt7615_mac_set_rates" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x8d85ed3, "__mt76_poll" },
	{ 0x1dc848cf, "mt7615_mcu_exit" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xef76720e, "mt7615_init_debugfs" },
	{ 0x32e84752, "ieee80211_queue_work" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xd5b93a2, "mt7615_unregister_ext_phy" },
	{ 0xe7a0646, "mt76_connac_mcu_set_hif_suspend" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x74857c6c, "mt7615_update_channel" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc39e7c06, "mt7615_mac_write_txwi" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xe4ce2d7a, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6468b1b, "pci_enable_wake" },
	{ 0xe45628cb, "__SCT__tp_func_dev_irq" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x17f568e9, "mt76_rates" },
	{ 0x95e96985, "__tracepoint_dev_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x14feedc1, "ieee80211_stop_queues" },
	{ 0xa7e8f991, "mt7615_queue_rx_skb" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xa8f7a6b3, "mt7615_ops" },
	{ 0x5d5a0c24, "mt7615_register_ext_phy" },
	{ 0x8b8b1b39, "mt7622_trigger_hif_int" },
	{ 0x76b24b22, "mt76_set_irq_mask" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x55971ffa, "mt76_unregister_device" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa7fc11d6, "ieee80211_wake_queues" },
	{ 0x47804ad6, "mt76_mmio_init" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xb6dd8ad7, "__mt76_poll_msec" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x955ae7ea, "mt7615_thermal_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5462a344, "__SCK__tp_func_dev_irq" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x47081865, "mt76_register_device" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x19adc909, "mt7615_init_work" },
	{ 0x92f71b5a, "devm_kmemdup" },
	{ 0x92c8c8c1, "ieee80211_queue_delayed_work" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0xe955d663, "mt7615_mac_sta_remove" },
	{ 0x53d9a0e2, "mt76_init_queue" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xde0bd76, "mt7615_wait_for_mcu_init" },
	{ 0x1ba3c76d, "kthread_unpark" },
	{ 0x44d7c8c6, "mt76_free_device" },
	{ 0x73445322, "mt7615_mcu_init" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x650680e2, "mt76_pci_disable_aspm" },
	{ 0xe40b66ef, "mt76_wcid_alloc" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0xcbb3c845, "devm_free_irq" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3071db79, "mt7615_tx_token_put" },
	{ 0x2cbb52b1, "mt76_connac_power_save_sched" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0x5ad685f6, "mt76_tx_status_check" },
	{ 0x3c87c1bf, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5112a389, "mt7615_init_txpower" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x9b0993d0, "mt76_dma_cleanup" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x844d65c7, "kthread_park" },
	{ 0x7ab77e9, "mt7615_mac_sta_add" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xcce3aad0, "__mt76_tx_complete_skb" },
	{ 0x15a44afd, "mt76_connac_pm_wake" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x9721127a, "mt76_tx_status_skb_add" },
	{ 0xf16aae4c, "mt7615_eeprom_init" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd46727d8, "pci_choose_state" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x859b7c57, "ieee80211_iterate_interfaces" },
	{ 0x983b852f, "mt76_dma_rx_poll" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xd849a8f6, "mt7615_sta_ps" },
};

MODULE_INFO(depends, "mt7615-common,mt76,mac80211,mt76-connac-lib");

MODULE_ALIAS("pci:v000014C3d00007615sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007663sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007611sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DA00A0BF4CE36153BBE8CF4");
