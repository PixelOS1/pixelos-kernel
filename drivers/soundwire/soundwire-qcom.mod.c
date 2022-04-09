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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x37c32427, "sdw_bus_master_delete" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x60e31fbb, "sdw_find_col_index" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x99261972, "devm_clk_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1deee061, "sdw_find_row_index" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xe4ec892b, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "soundwire-bus");

MODULE_ALIAS("of:N*T*Cqcom,soundwire-v1.3.0");
MODULE_ALIAS("of:N*T*Cqcom,soundwire-v1.3.0C*");
MODULE_ALIAS("of:N*T*Cqcom,soundwire-v1.5.1");
MODULE_ALIAS("of:N*T*Cqcom,soundwire-v1.5.1C*");

MODULE_INFO(srcversion, "A0F172936ABB32F015E2881");
