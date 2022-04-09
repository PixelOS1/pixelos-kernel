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
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x3238aff9, "gameport_unregister_driver" },
	{ 0x1b89f9cc, "__gameport_register_driver" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe397caf5, "seq_buf_printf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xf9a482f9, "msleep" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x2fa5023f, "gameport_open" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xa48becf0, "gameport_start_polling" },
	{ 0xdcfcd6ba, "gameport_stop_polling" },
	{ 0x331337dc, "input_event" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5012a70, "pv_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0xe187e64e, "gameport_close" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "gameport");


MODULE_INFO(srcversion, "623547751F36AB09B5B2EF5");
