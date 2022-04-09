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
	{ 0x9c68a10, "cma3000_init" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x89d9444e, "cma3000_exit" },
	{ 0xca3f100a, "cma3000_suspend" },
	{ 0x892d76b2, "cma3000_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,cma3000_d0x");

MODULE_ALIAS("i2c:cma3000_d01");

MODULE_INFO(srcversion, "DFBE9AD5B65100EFAAD0189");
