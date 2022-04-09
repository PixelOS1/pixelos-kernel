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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0x709e8144, "HT_update_self_and_peer_setting" },
	{ 0x22eeaaf8, "rtllib_wx_set_rawtx" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x85bd1608, "__request_region" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d6cd981, "rtllib_start_scan_syncro" },
	{ 0xee111615, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xd8058ec6, "rtllib_stop_scan_syncro" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x844c2638, "rtllib_wx_set_auth" },
	{ 0xc1b25e32, "rtllib_wx_set_mlme" },
	{ 0x878ebd7, "rtllib_wx_get_essid" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x71a05a08, "rtllib_ps_tx_ack" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xd386d1ca, "rtllib_wx_set_power" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe026bd7c, "dot11d_init" },
	{ 0x5f6ad27f, "rtllib_wx_set_rate" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xca06136c, "rtllib_wx_get_encode" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe573c0b0, "rtllib_sta_ps_send_null_frame" },
	{ 0x22166084, "rt_global_debug_component" },
	{ 0x999e8297, "vfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xfee5928d, "rtllib_wx_set_wap" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xeb7daaeb, "rtllib_DisableIntelPromiscuousMode" },
	{ 0x1e8641bf, "rtllib_wx_set_scan" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x1e1b6999, "rtllib_wx_get_freq" },
	{ 0x458b94b9, "rtllib_xmit" },
	{ 0xbb28f4f0, "rtllib_wx_get_wap" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xedc657d1, "rtllib_wx_get_power" },
	{ 0xdb5149da, "rtllib_wx_get_name" },
	{ 0x30eaa97e, "rtllib_wx_set_freq" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x719b1298, "rtllib_wx_get_rate" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x36386dcc, "rtllib_wx_set_essid" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x133536b8, "register_netdev" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x15b6409c, "rtllib_wx_set_mode" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x405d9a06, "rtllib_wx_set_encode" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf6c478a6, "rtllib_act_scanning" },
	{ 0x8262c912, "rtllib_stop_send_beacons" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x75fa5db8, "rtllib_wx_set_rts" },
	{ 0x30373bc5, "rtllib_wx_get_rts" },
	{ 0x232b032c, "device_wakeup_disable" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xda9bfae5, "rtllib_legal_channel" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xa916b694, "strnlen" },
	{ 0xd025b43b, "RemovePeerTS" },
	{ 0x3b47807b, "rtllib_wx_get_mode" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x641b8f25, "rtllib_rx" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xc8990aa8, "alloc_rtllib" },
	{ 0xdf78f620, "rtllib_wlan_frequencies" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x40d0d33, "rtllib_reset_queue" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x8fdb43d3, "rtllib_MgntDisconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8275e41d, "dev_alloc_name" },
	{ 0xe246d598, "rtllib_softmac_start_protocol" },
	{ 0x10c3ed28, "rtllib_wx_set_encode_ext" },
	{ 0xdebfe91d, "rtllib_stop_scan" },
	{ 0xedc03953, "iounmap" },
	{ 0x7fd99532, "rtllib_get_beacon" },
	{ 0xbf7ad5bc, "rtllib_softmac_stop_protocol" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x1564421, "request_firmware" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xd4b1e15a, "dot11d_channel_map" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xa62ffc8b, "rtllib_wx_set_gen_ie" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x358bd703, "pcie_capability_read_word" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0xf2d53935, "notify_wx_assoc_event" },
	{ 0x30778158, "rtllib_wx_get_scan" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97630c35, "rtllib_start_send_beacons" },
	{ 0xb9246b26, "rtllib_EnableIntelPromiscuousMode" },
	{ 0x5fabcc5e, "free_rtllib" },
};

MODULE_INFO(depends, "rtllib");

MODULE_ALIAS("pci:v000010ECd00008192sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000007AAd00000044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000007AAd00000047sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6975F2DBEEB1E705005AB9C");
