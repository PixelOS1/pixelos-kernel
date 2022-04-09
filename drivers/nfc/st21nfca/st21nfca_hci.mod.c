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
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf5965a7, "nfc_hci_disconnect_gate" },
	{ 0xea7b004a, "nfc_hci_disconnect_all_gates" },
	{ 0xe1363409, "nfc_hci_send_event" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb8ad7a9d, "nfc_dep_link_is_up" },
	{ 0xe357fe1f, "nfc_hci_set_param" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x19446ff6, "nfc_vendor_cmd_reply" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd240a502, "nfc_se_connectivity" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7329706f, "nfc_hci_allocate_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd9963c86, "nfc_tm_activated" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe4abd4f1, "nfc_hci_get_clientdata" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xf589447f, "nfc_hci_send_cmd" },
	{ 0x7d11271e, "nla_put" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd3dd3fce, "nfc_set_remote_general_bytes" },
	{ 0xda367748, "nfc_hci_register_device" },
	{ 0x3fa6ee9f, "nfc_get_local_general_bytes" },
	{ 0x6771914c, "nfc_se_transaction" },
	{ 0x11d4d96a, "nfc_hci_free_device" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe9ec028c, "nfc_llc_start" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xdd231c55, "nfc_hci_sak_to_protocol" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8fc60be8, "nfc_hci_unregister_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xadea4993, "nfc_remove_se" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x45b177ae, "nfc_tm_data_received" },
	{ 0xfb73747, "nfc_hci_connect_gate" },
	{ 0x906ea8dd, "nfc_llc_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x96848186, "scnprintf" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x5802d141, "nfc_add_se" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0xa27d0855, "nfc_hci_send_cmd_async" },
	{ 0x26f324fd, "nfc_hci_get_param" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x24e48d13, "skb_put" },
	{ 0x1e2795f0, "__nfc_alloc_vendor_cmd_reply_skb" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x1dca56fd, "nfc_hci_set_clientdata" },
};

MODULE_INFO(depends, "hci,nfc");


MODULE_INFO(srcversion, "D1009045E82B26EA860A0DA");
