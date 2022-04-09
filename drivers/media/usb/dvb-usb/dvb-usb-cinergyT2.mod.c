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
	{ 0xee111615, "param_ops_int" },
	{ 0xf8d88636, "dvb_usb_device_exit" },
	{ 0xd275efbc, "dvb_usb_device_init" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a8cd8c, "param_ops_short" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x6fc73baf, "dvb_usb_generic_rw" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x3a3ea018, "dvb_usb_nec_rc_key_to_event" },
};

MODULE_INFO(depends, "dvb-usb");

MODULE_ALIAS("usb:v0CCDp0038d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "80BA99B0FB71BF1200872CB");
