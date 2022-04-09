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
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x828e22f4, "hrtimer_forward" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xa3ac3e9a, "devm_hwrng_register" },
	{ 0xee09ed35, "devm_ioremap_resource" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0xa6257a2f, "complete" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ctimeriomem_rng");
MODULE_ALIAS("of:N*T*Ctimeriomem_rngC*");

MODULE_INFO(srcversion, "32BD82B6F8F555C90E6CE8C");
