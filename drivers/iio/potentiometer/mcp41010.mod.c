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
	{ 0xb3153dca, "driver_unregister" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x43469f8e, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x9d27181c, "spi_get_device_id" },
	{ 0xb3624bb8, "__devm_iio_device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("spi:mcp41010");
MODULE_ALIAS("spi:mcp41050");
MODULE_ALIAS("spi:mcp41100");
MODULE_ALIAS("spi:mcp42010");
MODULE_ALIAS("spi:mcp42050");
MODULE_ALIAS("spi:mcp42100");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp41010");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp41010C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp41050");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp41050C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp41100");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp41100C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp42010");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp42010C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp42050");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp42050C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp42100");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp42100C*");

MODULE_INFO(srcversion, "8E9B21FDB7E0F66D9100306");
