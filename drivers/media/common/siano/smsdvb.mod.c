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
	{ 0x4b5291d5, "smscore_register_hotplug" },
	{ 0x12897ec8, "smscore_get_board_id" },
	{ 0x7af34ef0, "sms_board_setup" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0xa8d65c10, "dvb_unregister_adapter" },
	{ 0x1c370a01, "dvb_create_media_graph" },
	{ 0xf252a6b1, "sms_board_event" },
	{ 0x9e573434, "dvb_register_frontend" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbbdb5c42, "smscore_unregister_client" },
	{ 0x5d8cc662, "dvb_unregister_frontend" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37a8cd8c, "param_ops_short" },
	{ 0x99a81ab3, "smsclient_sendrequest" },
	{ 0x360e621, "dvb_dmxdev_release" },
	{ 0x6153f7e6, "sms_board_lna_control" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdb58377b, "smscore_putbuffer" },
	{ 0x3acc2dd6, "media_device_cleanup" },
	{ 0x590cf27a, "smscore_unregister_hotplug" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x9e9bf1ab, "dvb_register_adapter" },
	{ 0xa73b350e, "sms_board_power" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a24c1ee, "sms_board_led_feedback" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb9813ec2, "smscore_register_client" },
	{ 0x801c70, "smscore_get_device_mode" },
	{ 0xa6257a2f, "complete" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x71095639, "media_device_unregister" },
	{ 0xe5462348, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "smsmdtv,dvb-core,mc");


MODULE_INFO(srcversion, "34C47E0A8177107A0B14B32");
