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
	{ 0x50b1a13b, "parport_unregister_driver" },
	{ 0xa74b3f97, "__parport_register_driver" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x9c12d0eb, "parport_unregister_device" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x82b662d5, "parport_negotiate" },
	{ 0xc69d0c74, "parport_register_dev_model" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x331337dc, "input_event" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xe1194d5, "hrtimer_try_to_cancel" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2265fcad, "parport_claim" },
	{ 0x77eebefb, "parport_release" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "B3DB6B3396D41A54F2275C2");
