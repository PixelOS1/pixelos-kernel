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
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xee111615, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x60158612, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x98de8de4, "ieee80211_scan_completed" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x8ee68c68, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x22749e72, "simple_open" },
	{ 0x3a6a0e57, "debugfs_create_bool" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0xc50f2e3b, "ieee80211_find_sta" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9381a653, "ieee80211_wake_queue" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3952e149, "__ieee80211_get_radio_led_name" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3e1c74bb, "__ieee80211_create_tpt_led_trigger" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc2b8df30, "ieee80211_chswitch_done" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x358bd703, "pcie_capability_read_word" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
};

MODULE_INFO(depends, "cfg80211,mac80211");


MODULE_INFO(srcversion, "C9D478EB7B4E491A876841D");
