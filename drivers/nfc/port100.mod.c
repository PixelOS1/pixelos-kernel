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
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x6d265f53, "nfc_digital_register_device" },
	{ 0xafb4b180, "nfc_digital_allocate_device" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x459f3f88, "skb_push" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x24e48d13, "skb_put" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xa6257a2f, "complete" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x470af718, "usb_put_dev" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0xc602dd5a, "nfc_digital_free_device" },
	{ 0xbc08d850, "nfc_digital_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfc_digital");

MODULE_ALIAS("usb:v054Cp06C1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp06C3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8ABEA48D27209C1F71527BC");
