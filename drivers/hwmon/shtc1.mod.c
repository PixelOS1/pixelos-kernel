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
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x318cf0ed, "devm_hwmon_device_register_with_groups" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc85cb619, "i2c_match_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("of:N*T*Csensirion,shtc1");
MODULE_ALIAS("of:N*T*Csensirion,shtc1C*");
MODULE_ALIAS("of:N*T*Csensirion,shtw1");
MODULE_ALIAS("of:N*T*Csensirion,shtw1C*");
MODULE_ALIAS("of:N*T*Csensirion,shtc3");
MODULE_ALIAS("of:N*T*Csensirion,shtc3C*");
MODULE_ALIAS("i2c:shtc1");
MODULE_ALIAS("i2c:shtw1");
MODULE_ALIAS("i2c:shtc3");

MODULE_INFO(srcversion, "0ECA89073D3D043F1185089");