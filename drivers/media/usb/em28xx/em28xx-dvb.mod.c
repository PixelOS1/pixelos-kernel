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
	{ 0x7b86303e, "em28xx_unregister_extension" },
	{ 0x56c8507e, "em28xx_register_extension" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0x44fd70d3, "em28xx_init_usb_xfer" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0x1c370a01, "dvb_create_media_graph" },
	{ 0x360e621, "dvb_dmxdev_release" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0xe5462348, "dvb_dmxdev_init" },
	{ 0x5d8cc662, "dvb_unregister_frontend" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0x8aff2784, "em28xx_write_reg" },
	{ 0x8308bc1, "em28xx_gpio_set" },
	{ 0xa8d65c10, "dvb_unregister_adapter" },
	{ 0x9e573434, "dvb_register_frontend" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x9e9bf1ab, "dvb_register_adapter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0xae43e8c9, "em28xx_uninit_usb_xfer" },
	{ 0x37a0cba, "kfree" },
	{ 0x63a4eddd, "em28xx_alloc_urbs" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xdf5f3197, "dvb_frontend_detach" },
	{ 0x92997ed8, "_printk" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x7bd06389, "em28xx_setup_xc3028" },
	{ 0x8c79cc62, "dvb_frontend_suspend" },
	{ 0x459ac6a8, "dvb_frontend_resume" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x9da5a1ed, "em28xx_stop_urbs" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x55283f95, "em28xx_write_reg_bits" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6626afca, "down" },
	{ 0xcf2a6966, "up" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x937e7ffb, "dvb_module_release" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc517b306, "dvb_module_probe" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xfe990052, "gpio_free" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xac7fd88f, "em28xx_set_mode" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "em28xx,dvb-core,i2c-core");


MODULE_INFO(srcversion, "D17C419ABFAB7AEDDA476D1");
