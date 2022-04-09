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
	{ 0x2d3385d3, "system_wq" },
	{ 0xff80ab3, "skb_queue_head" },
	{ 0xc81adb, "nfc_register_device" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x324dd836, "nfc_driver_failure" },
	{ 0x7250d4e, "nfc_targets_found" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xedca57ce, "skb_dequeue_tail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x99655b18, "nfc_alloc_recv_skb" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xc6654982, "nfc_allocate_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcd853c4f, "nfc_unregister_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x24e48d13, "skb_put" },
};

MODULE_INFO(depends, "nfc");


MODULE_INFO(srcversion, "B1723B0AF01D44A4E39D55E");
