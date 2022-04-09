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
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0x445c1620, "lis3lv02d_init_device" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0xdf45e79a, "regulator_bulk_get" },
	{ 0x731cb5d4, "i2c_smbus_read_i2c_block_data" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x44bfda28, "regulator_bulk_free" },
	{ 0x9d4df5db, "lis3lv02d_remove_fs" },
	{ 0x55b28e88, "lis3_dev" },
	{ 0xfa8f15bd, "lis3lv02d_joystick_disable" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x9a84b063, "lis3lv02d_poweroff" },
	{ 0x9e8ae71c, "lis3lv02d_poweron" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,lis3lv02d");

MODULE_ALIAS("i2c:lis3lv02d");
MODULE_ALIAS("i2c:lis331dlh");

MODULE_INFO(srcversion, "1C5C64357362E12D97209C4");
