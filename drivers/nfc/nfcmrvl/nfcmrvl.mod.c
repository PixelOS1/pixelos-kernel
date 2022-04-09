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
	{ 0x1cca1cfd, "nfc_send_to_raw_sock" },
	{ 0x93aa3ecf, "nci_send_cmd" },
	{ 0x754d539c, "strlen" },
	{ 0x78db2022, "nci_recv_frame" },
	{ 0x88786b87, "gpio_to_desc" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x276a4510, "nci_send_frame" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3e762546, "nci_set_config" },
	{ 0x82ff58aa, "nci_unregister_device" },
	{ 0x459f3f88, "skb_push" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfe990052, "gpio_free" },
	{ 0x550b738c, "nfc_fw_download_done" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa6b4a11f, "gpiod_set_raw_value" },
	{ 0x1564421, "request_firmware" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x24e48d13, "skb_put" },
	{ 0x6845ccba, "nci_register_device" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x81d767db, "nci_allocate_device" },
	{ 0xe47129dc, "nci_free_device" },
};

MODULE_INFO(depends, "nfc,nci");


MODULE_INFO(srcversion, "1EA907EA6C321E1B1BBD2C4");
