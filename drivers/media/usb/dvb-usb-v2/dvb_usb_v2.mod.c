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
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x88f2d039, "rc_unregister_device" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xee111615, "param_ops_int" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0xa8d65c10, "dvb_unregister_adapter" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x1c370a01, "dvb_create_media_graph" },
	{ 0x8c79cc62, "dvb_frontend_suspend" },
	{ 0x9e573434, "dvb_register_frontend" },
	{ 0x459ac6a8, "dvb_frontend_resume" },
	{ 0x31d760f9, "__media_device_usb_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x5d8cc662, "dvb_unregister_frontend" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc410588, "rc_allocate_device" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x5c8bb90c, "i2c_add_adapter" },
	{ 0xdf5f3197, "dvb_frontend_detach" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xa4235824, "dvb_dmx_swfilter_raw" },
	{ 0x550c12a1, "rc_free_device" },
	{ 0x360e621, "dvb_dmxdev_release" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x538003d4, "rc_register_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x6a9f708a, "dvb_dmx_swfilter_204" },
	{ 0x3acc2dd6, "media_device_cleanup" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9e9bf1ab, "dvb_register_adapter" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb95c6dda, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x1564421, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x71095639, "media_device_unregister" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xe5462348, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "rc-core,dvb-core,mc,i2c-core");


MODULE_INFO(srcversion, "A3219B7B33EB0CE87B87D03");
