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
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x1b53d86e, "flexcop_device_initialize" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7ebc1319, "flexcop_device_kfree" },
	{ 0x7e570b5d, "flexcop_sram_ctrl" },
	{ 0xfb578fc5, "memset" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd21e57ff, "flexcop_device_kmalloc" },
	{ 0x667d4072, "usb_free_coherent" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x41622bca, "flexcop_sram_set_dest" },
	{ 0x5a6192df, "flexcop_pass_dmx_packets" },
	{ 0x92997ed8, "_printk" },
	{ 0xd3323a02, "flexcop_wan_set_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x7475a02, "usb_alloc_coherent" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xec33eb9b, "flexcop_device_exit" },
	{ 0x51ec4d55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "b2c2-flexcop");

MODULE_ALIAS("usb:v0AF7p0101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BDC5751A04832F2AF5A1809");
