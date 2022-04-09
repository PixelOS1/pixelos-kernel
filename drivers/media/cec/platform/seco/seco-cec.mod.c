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
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xf9efde23, "cec_received_msg_ts" },
	{ 0x929166d1, "cec_transmit_attempt_done_ts" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x73795756, "rc_keydown" },
	{ 0xe543dcb9, "cec_unregister_adapter" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb3a5fce5, "devm_rc_register_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x2e69c0ae, "cec_delete_adapter" },
	{ 0x249e3e77, "cec_notifier_cec_adap_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5ac5f0f5, "devm_rc_allocate_device" },
	{ 0x583fed35, "cec_register_adapter" },
	{ 0xb75a1597, "cec_notifier_cec_adap_register" },
	{ 0xd5131e72, "cec_allocate_adapter" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0x28b2ea29, "devm_gpiod_get" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x761527a1, "put_device" },
	{ 0xab1a08a3, "bus_find_device" },
	{ 0x73c98c2d, "pci_bus_type" },
	{ 0xb735a641, "device_match_name" },
	{ 0x78ddb76b, "dmi_match" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cec,rc-core");

MODULE_ALIAS("acpi*:CEC00001:*");

MODULE_INFO(srcversion, "D3EECD48F92B2731806D6D0");
