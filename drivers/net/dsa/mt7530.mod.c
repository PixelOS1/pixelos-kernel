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
	{ 0xcabd7490, "mdio_driver_unregister" },
	{ 0x9e70dd86, "mdio_driver_register" },
	{ 0x41c2163b, "phy_driver_is_genphy" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0x55248fd5, "regulator_set_voltage" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x854dcea, "__irq_resolve_mapping" },
	{ 0xfbafd50b, "irq_domain_remove" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9dca454d, "dsa_unregister_switch" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x93accc2b, "dsa_switch_shutdown" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xd66c79e5, "mdiobus_read_nested" },
	{ 0xf207720d, "mdiobus_write_nested" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy,dsa_core");

MODULE_ALIAS("of:N*T*Cmediatek,mt7621");
MODULE_ALIAS("of:N*T*Cmediatek,mt7621C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7530");
MODULE_ALIAS("of:N*T*Cmediatek,mt7530C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7531");
MODULE_ALIAS("of:N*T*Cmediatek,mt7531C*");

MODULE_INFO(srcversion, "B41CAC0044777CC3EFDA219");
