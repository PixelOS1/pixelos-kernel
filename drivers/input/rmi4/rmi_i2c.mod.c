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
	{ 0x89e4046, "devm_kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x89937627, "i2c_transfer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9ffa2f66, "rmi_register_transport_device" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x401e43c5, "devm_regulator_bulk_get" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x52b7356d, "rmi_dbg" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x9973a57, "rmi_unregister_transport_device" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0xdc55ffcf, "rmi_driver_suspend" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xd11d9e60, "rmi_driver_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,rmi_core");

MODULE_ALIAS("i2c:rmi4_i2c");

MODULE_INFO(srcversion, "B54E57866D5299F0749D1B0");
