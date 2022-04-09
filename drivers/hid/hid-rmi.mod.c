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
	{ 0x229d0e87, "hid_unregister_driver" },
	{ 0x357c7c39, "__hid_register_driver" },
	{ 0xcb2cb33d, "hid_hw_start" },
	{ 0x83af720c, "irq_create_mapping_affinity" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x56c97f17, "__irq_domain_add" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8d97594e, "hid_open_report" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6626afca, "down" },
	{ 0x9ffa2f66, "rmi_register_transport_device" },
	{ 0xcf2a6966, "up" },
	{ 0x66d065e8, "hid_hw_output_report" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x29b7c46d, "hid_hw_close" },
	{ 0xd11d9e60, "rmi_driver_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x64acaa9d, "hid_hw_raw_request" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xa8b52982, "hid_hw_open" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x216f1f14, "rmi_set_attn_data" },
	{ 0x5012a70, "pv_ops" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1730f2e8, "irq_set_chip_and_handler_name" },
	{ 0xc864501b, "dummy_irq_chip" },
	{ 0xf8049ecb, "handle_simple_irq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfbafd50b, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x854dcea, "__irq_resolve_mapping" },
	{ 0x9973a57, "rmi_unregister_transport_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x42ad8fea, "hid_hw_stop" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x331337dc, "input_event" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xdc55ffcf, "rmi_driver_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rmi_core");

MODULE_ALIAS("hid:b0003g*v00001532p0000011D");
MODULE_ALIAS("hid:b0003g*v000017EFp00006085");
MODULE_ALIAS("hid:b0003g*v00000461p00004E72");
MODULE_ALIAS("hid:b0003g*v000006CBp000081A7");
MODULE_ALIAS("hid:b*g0100v*p*");

MODULE_INFO(srcversion, "E91928F8E6BE7F56AA22E67");
