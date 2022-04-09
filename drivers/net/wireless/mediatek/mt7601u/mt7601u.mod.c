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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xe4345174, "single_open" },
	{ 0x1537b21c, "debugfs_create_u8" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x754d539c, "strlen" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xe25db564, "firmware_request_cache" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x9b02585d, "single_release" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9d94b04a, "ieee80211_unregister_hw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x94216657, "seq_read" },
	{ 0x580c7919, "bpf_trace_run3" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x14feedc1, "ieee80211_stop_queues" },
	{ 0x419d6dcb, "ieee80211_stop_queue" },
	{ 0x293c1990, "ieee80211_tx_status" },
	{ 0x6604ef93, "debugfs_create_u32" },
	{ 0x4166aaa4, "__alloc_pages" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xd3ec0440, "ieee80211_rx_list" },
	{ 0x133be684, "bpf_trace_run9" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x5dac2d51, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x814d6241, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xa7fc11d6, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0xc0ab925e, "usb_poison_urb" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe283cb34, "simple_attr_release" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x667d4072, "usb_free_coherent" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x92f71b5a, "devm_kmemdup" },
	{ 0x92c8c8c1, "ieee80211_queue_delayed_work" },
	{ 0x6d5cd7ee, "debugfs_attr_read" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8e2c1520, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x21075824, "__free_pages" },
	{ 0x618911fc, "numa_node" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78ed0655, "usb_reset_device" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x470af718, "usb_put_dev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2237ae3a, "ieee80211_send_bar" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x7d6551aa, "ieee80211_get_tx_rates" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9381a653, "ieee80211_wake_queue" },
	{ 0x5d3c4d7a, "ieee80211_get_hdrlen_from_skb" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x60041f8f, "ieee80211_register_hw" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x6485cac1, "ieee80211_tx_status_ext" },
	{ 0xbae13367, "skb_add_rx_frag" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x1564421, "request_firmware" },
	{ 0x308add0e, "ieee80211_free_hw" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x6b8bf149, "netif_receive_skb_list" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xa6257a2f, "complete" },
	{ 0xb0e602eb, "memmove" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x7475a02, "usb_alloc_coherent" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x246cd242, "debugfs_attr_write" },
	{ 0xfc053949, "bpf_trace_run4" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x45db6081, "simple_attr_open" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0xd44b38f4, "__skb_pad" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "cfg80211,mac80211");

MODULE_ALIAS("usb:v0B05p17D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3431d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3434d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2717p4106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2A5Fp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7710d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DB5E761DC6C90C459A8C553");
