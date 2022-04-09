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
	{ 0xcaa0e48c, "ishtp_cl_io_rb_recycle" },
	{ 0x90635166, "hid_add_device" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xab73e5b4, "ishtp_cl_unlink" },
	{ 0x28e4b877, "ishtp_set_connection_state" },
	{ 0xf0c16d64, "ishtp_cl_driver_register" },
	{ 0x2d43c3f7, "hid_parse_report" },
	{ 0x8c503459, "ishtp_cl_flush_queues" },
	{ 0xf23588b3, "ishtp_dev_to_cl_device" },
	{ 0xfe193df3, "ishtp_wait_resume" },
	{ 0xb5a7de83, "ishtp_put_device" },
	{ 0x4a9bfc75, "hid_input_report" },
	{ 0x6e135be2, "ishtp_cl_connect" },
	{ 0x89858e68, "ishtp_set_rx_ring_size" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb556a76, "ishtp_cl_driver_unregister" },
	{ 0xf225c52a, "ishtp_device" },
	{ 0x6e13c7e2, "ishtp_cl_link" },
	{ 0x4feb918f, "ish_hw_reset" },
	{ 0x66f052df, "ishtp_cl_disconnect" },
	{ 0x5f9b0501, "ishtp_get_fw_client_id" },
	{ 0x761fe167, "ishtp_fw_cl_get_client" },
	{ 0x1b2d20ae, "ishtp_trace_callback" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x728c47a8, "ishtp_register_event_cb" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x3bf8a739, "ishtp_get_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfa5d1796, "ishtp_set_drvdata" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xa6702d1f, "ishtp_get_client_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe04dd75c, "hid_destroy_device" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa623d00b, "ishtp_set_tx_ring_size" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x8a16e529, "hid_allocate_device" },
	{ 0x83b675a3, "ishtp_set_client_data" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x969b9811, "ishtp_get_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x327d8367, "ishtp_cl_set_fw_client_id" },
	{ 0xafa21cc2, "ishtp_cl_free" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x85d26570, "ishtp_cl_send" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x6ef002e0, "ishtp_cl_allocate" },
	{ 0x1ebe8335, "ishtp_get_ishtp_device" },
	{ 0x6fbe076e, "ishtp_cl_rx_get_rb" },
	{ 0xf82e3846, "hid_output_report" },
};

MODULE_INFO(depends, "intel-ishtp");

MODULE_ALIAS("ishtp:{33AECD58-B679-4E54-9BD9-A04D34F0C226}");

MODULE_INFO(srcversion, "885DAD297B510D8F84BB070");
