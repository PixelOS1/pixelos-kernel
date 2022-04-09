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
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x37a0cba, "kfree" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x1564421, "request_firmware" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x282d8810, "devm_device_add_group" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0x3f4fc704, "input_alloc_absinfo" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0x8df14a40, "i2c_smbus_xfer" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8f048bb0, "input_mt_sync_frame" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0x331337dc, "input_event" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x89937627, "i2c_transfer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("acpi*:RAYD0001:*");
MODULE_ALIAS("i2c:raydium_i2c");
MODULE_ALIAS("i2c:rm32380");

MODULE_INFO(srcversion, "9F31151401D8DB07B807AE6");
