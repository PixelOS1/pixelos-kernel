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
	{ 0x73fec674, "param_ops_uint" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xc0aabb45, "ptp_schedule_worker" },
	{ 0xf0d40089, "ptp_clock_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x1564421, "request_firmware" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x89937627, "i2c_transfer" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0xfd03a232, "ptp_clock_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:idt82p33810");
MODULE_ALIAS("i2c:idt82p33813");
MODULE_ALIAS("i2c:idt82p33814");
MODULE_ALIAS("i2c:idt82p33831");
MODULE_ALIAS("i2c:idt82p33910");
MODULE_ALIAS("i2c:idt82p33913");
MODULE_ALIAS("i2c:idt82p33914");
MODULE_ALIAS("i2c:idt82p33931");

MODULE_INFO(srcversion, "D4373D88E1E7DBE359721E1");
