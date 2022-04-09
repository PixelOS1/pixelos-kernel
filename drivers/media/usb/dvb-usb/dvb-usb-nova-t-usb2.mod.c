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
	{ 0xca6ce0f2, "dibusb_read_eeprom_byte" },
	{ 0xee111615, "param_ops_int" },
	{ 0xf8d88636, "dvb_usb_device_exit" },
	{ 0xd275efbc, "dvb_usb_device_init" },
	{ 0xbc65e519, "dibusb_pid_filter" },
	{ 0x37a8cd8c, "param_ops_short" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x4c3c3be8, "dibusb2_0_power_ctrl" },
	{ 0xf2ac6d75, "dibusb_dib3000mc_frontend_attach" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x6fc73baf, "dvb_usb_generic_rw" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x4b4a0eb0, "dibusb_dib3000mc_tuner_attach" },
	{ 0x1b9b6e25, "dibusb2_0_streaming_ctrl" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x79e5694a, "dibusb_i2c_algo" },
	{ 0x9a80df34, "dibusb_pid_filter_ctrl" },
};

MODULE_INFO(depends, "dvb-usb-dibusb-common,dvb-usb,dvb-usb-dibusb-mc-common");

MODULE_ALIAS("usb:v2040p9300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9301d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "68B6A847C4A739FA3E9CB84");
