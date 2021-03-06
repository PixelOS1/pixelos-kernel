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
	{ 0x489c89e8, "hd44780_common_redefine_char" },
	{ 0x1aa688fd, "hd44780_common_lines" },
	{ 0xf360d788, "hd44780_common_fontsize" },
	{ 0x8585e5fd, "hd44780_common_blink" },
	{ 0xa22afdaa, "hd44780_common_cursor" },
	{ 0x64415593, "hd44780_common_display" },
	{ 0x30e85287, "hd44780_common_shift_display" },
	{ 0xc369090d, "hd44780_common_shift_cursor" },
	{ 0x8d4f3fa4, "hd44780_common_init_display" },
	{ 0x23159a5b, "hd44780_common_clear_display" },
	{ 0x3c4c183f, "hd44780_common_home" },
	{ 0x7b26ecc, "hd44780_common_gotoxy" },
	{ 0x36dc00a2, "hd44780_common_print" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb2b52561, "gpiod_set_array_value_cansleep" },
	{ 0x6fd9cc4a, "charlcd_register" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x28b2ea29, "devm_gpiod_get" },
	{ 0x3ebd1582, "devm_gpiod_get_index" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8b45326c, "charlcd_alloc" },
	{ 0x79e8e259, "hd44780_common_alloc" },
	{ 0x9ff4aa3f, "gpiod_count" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0x37a0cba, "kfree" },
	{ 0xf883c540, "charlcd_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hd44780_common,charlcd");

MODULE_ALIAS("of:N*T*Chit,hd44780");
MODULE_ALIAS("of:N*T*Chit,hd44780C*");

MODULE_INFO(srcversion, "E04465D4C5AE3FB132149EC");
