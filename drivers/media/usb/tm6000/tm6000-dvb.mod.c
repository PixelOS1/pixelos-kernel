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
	{ 0xee111615, "param_ops_int" },
	{ 0x37a8cd8c, "param_ops_short" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x132a33ac, "tm6000_unregister_extension" },
	{ 0xdbfdfd24, "tm6000_register_extension" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdff8e89d, "tm6000_tuner_callback" },
	{ 0xe5462348, "dvb_dmxdev_init" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x9e573434, "dvb_register_frontend" },
	{ 0x2309a6d6, "tm6000_xc5000_callback" },
	{ 0x9e9bf1ab, "dvb_register_adapter" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x91159164, "usb_clear_halt" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xd007703c, "tm6000_init_digital_mode" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa8d65c10, "dvb_unregister_adapter" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x360e621, "dvb_dmxdev_release" },
	{ 0xdf5f3197, "dvb_frontend_detach" },
	{ 0x5d8cc662, "dvb_unregister_frontend" },
	{ 0x3ecee33a, "usb_unlink_urb" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x89b611dd, "tm6000_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tm6000,dvb-core");


MODULE_INFO(srcversion, "53ADC1FD13167FC21E55BA7");
