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
	{ 0x78c2054, "param_ops_bool" },
	{ 0xee111615, "param_ops_int" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xec788566, "acpi_target_system_state" },
	{ 0xac1e1dd9, "devm_watchdog_register_device" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xed2a3373, "iTCO_vendorsupport" },
	{ 0x4e133fc, "iTCO_vendor_check_noreboot_on" },
	{ 0xe4ec892b, "devm_platform_ioremap_resource" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x75bec08d, "iTCO_vendor_pre_stop" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc8930f32, "iTCO_vendor_pre_start" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "iTCO_vendor_support");


MODULE_INFO(srcversion, "6272AAF96EC299F603A2E41");
