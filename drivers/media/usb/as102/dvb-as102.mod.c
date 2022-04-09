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
	{ 0xa24f23d8, "__request_module" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xee111615, "param_ops_int" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0xa8d65c10, "dvb_unregister_adapter" },
	{ 0x9e573434, "dvb_register_frontend" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0xad8fd9d3, "usb_deregister_dev" },
	{ 0x5d8cc662, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdf5f3197, "dvb_frontend_detach" },
	{ 0xfb578fc5, "memset" },
	{ 0x37a8cd8c, "param_ops_short" },
	{ 0x11089ac7, "_ctype" },
	{ 0x360e621, "dvb_dmxdev_release" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0xe817776c, "usb_register_dev" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x667d4072, "usb_free_coherent" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x470af718, "usb_put_dev" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x1d3dba4d, "usb_find_interface" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9e9bf1ab, "dvb_register_adapter" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x1564421, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x7475a02, "usb_alloc_coherent" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xe5462348, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("usb:v1BA6p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0246d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p002Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B89p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2137p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E1A54E9122FD60B5EBAB117");
