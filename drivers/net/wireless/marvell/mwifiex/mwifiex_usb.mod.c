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
	{ 0x2b68bd2f, "del_timer" },
	{ 0xae723064, "mwifiex_cancel_hs" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xee3d0010, "mwifiex_write_data_complete" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x870f2c44, "mwifiex_process_sleep_confirm_resp" },
	{ 0xa731f83e, "mwifiex_queue_main_work" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x239607ff, "_mwifiex_dbg" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb9d5bb0b, "mwifiex_add_card" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x459f3f88, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78ed0655, "usb_reset_device" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x470af718, "usb_put_dev" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xed291753, "mwifiex_process_hs_config" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a9187e0, "mwifiex_multi_chan_resync" },
	{ 0x69acdf38, "memcpy" },
	{ 0x29095ba6, "mwifiex_fw_dump_event" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x87c0ad2c, "mwifiex_deauthenticate_all" },
	{ 0xf0f23d05, "mwifiex_remove_card" },
	{ 0xc5aa6521, "mwifiex_enable_hs" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xf693803b, "mwifiex_init_shutdown_fw" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x51ec4d55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("usb:v1286p2041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2042d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2044d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2049d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ed*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "0C6C0A857E4518BEA86C995");
