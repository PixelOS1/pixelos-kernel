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
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xe1daedab, "request_firmware_into_buf" },
	{ 0xbbf4c031, "i2c_slave_register" },
	{ 0xbcbcc6a1, "sysfs_create_bin_file" },
	{ 0xfb578fc5, "memset" },
	{ 0x69eb3786, "device_property_read_string" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x69acdf38, "memcpy" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x80a30e6, "sysfs_remove_bin_file" },
	{ 0xeddf5284, "i2c_slave_unregister" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:slave-24c02");
MODULE_ALIAS("i2c:slave-24c02ro");
MODULE_ALIAS("i2c:slave-24c32");
MODULE_ALIAS("i2c:slave-24c32ro");
MODULE_ALIAS("i2c:slave-24c64");
MODULE_ALIAS("i2c:slave-24c64ro");
MODULE_ALIAS("i2c:slave-24c512");
MODULE_ALIAS("i2c:slave-24c512ro");

MODULE_INFO(srcversion, "E9B3D505CE4700A3AE2988F");
