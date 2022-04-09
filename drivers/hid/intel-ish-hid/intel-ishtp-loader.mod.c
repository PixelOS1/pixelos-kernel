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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xab73e5b4, "ishtp_cl_unlink" },
	{ 0x28e4b877, "ishtp_set_connection_state" },
	{ 0xf0c16d64, "ishtp_cl_driver_register" },
	{ 0xee111615, "param_ops_int" },
	{ 0x8c503459, "ishtp_cl_flush_queues" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb5a7de83, "ishtp_put_device" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x6e135be2, "ishtp_cl_connect" },
	{ 0x89858e68, "ishtp_set_rx_ring_size" },
	{ 0xc805f93, "clflush_cache_range" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb556a76, "ishtp_cl_driver_unregister" },
	{ 0xf225c52a, "ishtp_device" },
	{ 0x6e13c7e2, "ishtp_cl_link" },
	{ 0x4feb918f, "ish_hw_reset" },
	{ 0x66f052df, "ishtp_cl_disconnect" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x5f9b0501, "ishtp_get_fw_client_id" },
	{ 0x761fe167, "ishtp_fw_cl_get_client" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x69eb3786, "device_property_read_string" },
	{ 0x9b4fc88b, "ishtp_get_pci_device" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x728c47a8, "ishtp_register_event_cb" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x3bf8a739, "ishtp_get_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfa5d1796, "ishtp_set_drvdata" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xa6702d1f, "ishtp_get_client_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xa623d00b, "ishtp_set_tx_ring_size" },
	{ 0x83b675a3, "ishtp_set_client_data" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x969b9811, "ishtp_get_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x327d8367, "ishtp_cl_set_fw_client_id" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0xafa21cc2, "ishtp_cl_free" },
	{ 0x1564421, "request_firmware" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x85d26570, "ishtp_cl_send" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x6ef002e0, "ishtp_cl_allocate" },
	{ 0x1ebe8335, "ishtp_get_ishtp_device" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x6fbe076e, "ishtp_cl_rx_get_rb" },
};

MODULE_INFO(depends, "intel-ishtp");

MODULE_ALIAS("ishtp:{C804D06A-55BD-4EA7-ADED-1E31228C76DC}");

MODULE_INFO(srcversion, "846C325A73306B8342AFD6D");
