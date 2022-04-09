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
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x81fefc83, "i2c_smbus_read_byte" },
	{ 0x4d1153b, "i2c_smbus_write_byte" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc85cb619, "i2c_match_id" },
	{ 0xb3624bb8, "__devm_iio_device_register" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,industrialio");

MODULE_ALIAS("of:N*T*Cmicrochip,mcp4017-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4017-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4017-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4017-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4017-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4017-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4017-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4017-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4018-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4018-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4018-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4018-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4018-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4018-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4018-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4018-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4019-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4019-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4019-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4019-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4019-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4019-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4019-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4019-104C*");
MODULE_ALIAS("i2c:mcp4017-502");
MODULE_ALIAS("i2c:mcp4017-103");
MODULE_ALIAS("i2c:mcp4017-503");
MODULE_ALIAS("i2c:mcp4017-104");
MODULE_ALIAS("i2c:mcp4018-502");
MODULE_ALIAS("i2c:mcp4018-103");
MODULE_ALIAS("i2c:mcp4018-503");
MODULE_ALIAS("i2c:mcp4018-104");
MODULE_ALIAS("i2c:mcp4019-502");
MODULE_ALIAS("i2c:mcp4019-103");
MODULE_ALIAS("i2c:mcp4019-503");
MODULE_ALIAS("i2c:mcp4019-104");

MODULE_INFO(srcversion, "654408D721F1C4CA3CDBE40");
