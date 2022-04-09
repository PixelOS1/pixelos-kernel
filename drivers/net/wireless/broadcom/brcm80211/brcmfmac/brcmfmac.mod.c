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
	{ 0x829ec15f, "sdio_writeb" },
	{ 0x984e4952, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xff80ab3, "skb_queue_head" },
	{ 0xd6217d91, "brcmu_d11_attach" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe0a1731f, "cfg80211_cqm_rssi_notify" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x753b52ed, "wiphy_free" },
	{ 0x7410aba2, "strreplace" },
	{ 0xb1e54e7c, "cfg80211_connect_done" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0xee111615, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x21752e, "device_release_driver" },
	{ 0xea124bd1, "gcd" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xfda27c91, "cfg80211_inform_bss_data" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x3f1f9b5c, "send_sig" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa11aa524, "sdio_enable_func" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x68514fe5, "cfg80211_report_wowlan_wakeup" },
	{ 0x8543f41c, "sdio_claim_irq" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x9e6303c2, "sdio_retune_release" },
	{ 0x2e4e567c, "mmc_hw_reset" },
	{ 0x14559ce6, "brcmu_pkt_buf_get_skb" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc310b981, "strnstr" },
	{ 0xfa6ca004, "driver_for_each_device" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x286b6740, "brcmu_pktq_pdeq_tail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa81f9c12, "usb_autopm_get_interface" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc0fceb2f, "__platform_driver_probe" },
	{ 0x999e8297, "vfree" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x6c665b9b, "brcmu_pktq_penq" },
	{ 0x873e0964, "pci_pme_capable" },
	{ 0xd94be29, "cfg80211_unregister_wdev" },
	{ 0x83e95cad, "brcmu_pktq_mdeq" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xc5d9d883, "pm_runtime_forbid" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x788c697a, "sdio_get_host_pm_caps" },
	{ 0xcd34d80, "skb_unlink" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1ac99c01, "cfg80211_mgmt_tx_status" },
	{ 0xc8a016aa, "param_ops_string" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd5e6175f, "mmc_wait_for_req" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xea82d402, "sdio_writel" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb27334e7, "cfg80211_vendor_cmd_reply" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x9e997e08, "brcmu_pktq_pdeq_match" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xe1c1701c, "netif_rx_ni" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xb19b445, "ioread8" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x73e1410d, "efivar_entry_size" },
	{ 0xda59b65, "free_netdev" },
	{ 0x42f1cc7d, "wiphy_unregister" },
	{ 0x9166fada, "strncpy" },
	{ 0x133536b8, "register_netdev" },
	{ 0x7d11271e, "nla_put" },
	{ 0xa0119d08, "mmc_set_data_timeout" },
	{ 0x7d95aac8, "sdio_readl" },
	{ 0x9126fd2c, "cfg80211_del_sta_sinfo" },
	{ 0x5a921311, "strncmp" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x9acc3f34, "brcmu_pktq_peek_tail" },
	{ 0x9e540271, "brcmu_pktq_flush" },
	{ 0x98143993, "sdio_retune_crc_enable" },
	{ 0x66ea9177, "cfg80211_rx_mgmt_khz" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xb8071df2, "cfg80211_michael_mic_failure" },
	{ 0x2ce7e85e, "wiphy_apply_custom_regulatory" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x22749e72, "simple_open" },
	{ 0x868319dd, "request_firmware_nowait" },
	{ 0xe30194b1, "cfg80211_ibss_joined" },
	{ 0xfa227d2f, "device_wakeup_enable" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x81a1f34b, "sdio_readsb" },
	{ 0xd52865d, "sdio_unregister_driver" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x694112a8, "sdio_f0_writeb" },
	{ 0x218eee0d, "sdio_set_host_pm_flags" },
	{ 0x7f36f086, "cfg80211_check_combinations" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb34750fb, "ieee80211_get_channel_khz" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x9f984513, "strrchr" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x4e4a20e6, "cfg80211_roamed" },
	{ 0xce1fb33, "cfg80211_put_bss" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xa916b694, "strnlen" },
	{ 0x44c6e434, "__cfg80211_alloc_reply_skb" },
	{ 0xdfc12431, "wiphy_register" },
	{ 0x46b1099, "cfg80211_crit_proto_stopped" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xdcc5d240, "sdio_release_irq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x56419ed8, "cfg80211_classify8021d" },
	{ 0xbb2a8f11, "efivar_entry_get" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x848d372e, "iowrite8" },
	{ 0x38a4178c, "cfg80211_ready_on_channel" },
	{ 0x92997ed8, "_printk" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x5d180d08, "wiphy_new_nm" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0x53d96169, "sdio_f0_readb" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x86814848, "ether_setup" },
	{ 0xfd11e320, "cfg80211_disconnected" },
	{ 0xa17c0ccf, "brcmu_dotrev_str" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x527bd5c8, "cfg80211_new_sta" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x6b69f578, "sdio_memcpy_toio" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2159b5f, "brcmu_pktq_penq_head" },
	{ 0xf10d4373, "brcmu_pktq_init" },
	{ 0xa14eafce, "cfg80211_port_authorized" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x96848186, "scnprintf" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x1564421, "request_firmware" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x7fd7e3f3, "cfg80211_register_netdevice" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x4ed779a7, "cfg80211_remain_on_channel_expired" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x37db8a39, "sdio_register_driver" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x8fff1d41, "sdio_memcpy_fromio" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x5527aa4f, "cfg80211_sched_scan_stopped" },
	{ 0x47fce9c2, "sdio_claim_host" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x4c681602, "firmware_request_nowarn" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xaf0effb6, "cfg80211_scan_done" },
	{ 0xa8b19b5e, "sdio_retune_crc_disable" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x6d6a470d, "brcmu_pkt_buf_free_skb" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x42c8fe04, "sdio_set_block_size" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe9cc535d, "usb_autopm_put_interface" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0x86097c08, "sdio_disable_func" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x91ef55e7, "sdio_release_host" },
	{ 0xa4387dae, "sdio_retune_hold_now" },
	{ 0xbf098f7d, "cfg80211_sched_scan_results" },
	{ 0x71bc7aa4, "brcmu_pktq_mlen" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "mmc_core,brcmutil,cfg80211");

MODULE_ALIAS("sdio:c*v02D0dA887*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0dA94C*");
MODULE_ALIAS("sdio:c*v02D0dA94D*");
MODULE_ALIAS("sdio:c*v02D0dA962*");
MODULE_ALIAS("sdio:c*v02D0dA9A4*");
MODULE_ALIAS("sdio:c*v02D0d4335*");
MODULE_ALIAS("sdio:c*v02D0d4339*");
MODULE_ALIAS("sdio:c*v02D0dA9A6*");
MODULE_ALIAS("sdio:c*v02D0d4345*");
MODULE_ALIAS("sdio:c*v02D0dA9BF*");
MODULE_ALIAS("sdio:c*v02D0d4354*");
MODULE_ALIAS("sdio:c*v02D0d4356*");
MODULE_ALIAS("sdio:c*v02D0d4359*");
MODULE_ALIAS("sdio:c*v02D0d4373*");
MODULE_ALIAS("sdio:c*v02D0dA804*");
MODULE_ALIAS("sdio:c*v02D0dAAE8*");
MODULE_ALIAS("sdio:c*v02D0d4355*");
MODULE_ALIAS("pci:v000014E4d000043A3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004355sv000014E4sd00004355bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004354sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043ECsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043D3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043D9sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043E9sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043EFsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BAsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BBsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BCsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d0000AA52sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004464sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CAsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CBsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CCsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004365sv000014E4sd00004365bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C4sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C5sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d0000440Dsv*sd*bc02sc80i*");
MODULE_ALIAS("usb:v0A5CpBD1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD1Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4pBD29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp0BDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p0BDCd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CD5F6D0C871BA2B8C841140");
