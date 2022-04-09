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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7549c36, "driver_register" },
	{ 0xee111615, "param_ops_int" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0xa8d65c10, "dvb_unregister_adapter" },
	{ 0x6dc50487, "fw_csr_string" },
	{ 0x9e573434, "dvb_register_frontend" },
	{ 0xede1ae3d, "dvb_register_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3ff92c06, "fw_bus_type" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5d8cc662, "dvb_unregister_frontend" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x93d4aa26, "fw_iso_context_start" },
	{ 0xf62b47d, "fw_iso_context_queue_flush" },
	{ 0x331337dc, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x37a8cd8c, "param_ops_short" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x360e621, "dvb_dmxdev_release" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x724fd43, "dvb_generic_release" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x7d18b4af, "fw_iso_buffer_destroy" },
	{ 0xbabb113d, "dvb_unregister_device" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x289445f2, "fw_iso_context_queue" },
	{ 0xa916b694, "strnlen" },
	{ 0x743badfa, "dvb_generic_ioctl" },
	{ 0x18acd31f, "dvb_dmx_swfilter_packets" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xca03d3df, "dvb_generic_open" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd4f4bf56, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9e9bf1ab, "dvb_register_adapter" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x589aa2ed, "fw_iso_context_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xda6af6f7, "fw_core_remove_address_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0x82fde540, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x4df02057, "crc32_be" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb9610d34, "fw_iso_buffer_init" },
	{ 0x962c98ce, "fw_run_transaction" },
	{ 0x6b2a837a, "fw_iso_context_destroy" },
	{ 0xe5462348, "dvb_dmxdev_init" },
	{ 0xefc7653c, "input_allocate_device" },
};

MODULE_INFO(depends, "dvb-core,firewire-core");

MODULE_ALIAS("ieee1394:ven00001287mo00000024sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000025sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000026sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000034sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000035sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000036sp0000A02Dver00010001*");

MODULE_INFO(srcversion, "7311A8DA5B92442E250C5BD");
