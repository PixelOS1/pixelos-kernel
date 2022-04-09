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
	{ 0x9c35d684, "devm_add_action" },
	{ 0x9ffa2f66, "rmi_register_transport_device" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x52345e6e, "spi_setup" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x43469f8e, "spi_sync" },
	{ 0x52b7356d, "rmi_dbg" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x69acdf38, "memcpy" },
	{ 0x89e4046, "devm_kfree" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x9973a57, "rmi_unregister_transport_device" },
	{ 0xdc55ffcf, "rmi_driver_suspend" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xd11d9e60, "rmi_driver_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rmi_core");

MODULE_ALIAS("spi:rmi4_spi");

MODULE_INFO(srcversion, "4E09A234BC023457A1108C5");
