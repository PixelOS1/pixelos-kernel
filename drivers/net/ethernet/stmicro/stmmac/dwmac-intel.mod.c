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
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x2de60bfa, "mdiobus_modify" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf881344d, "mdiobus_write" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x5012a70, "pv_ops" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5d5f5d8e, "clk_register_fixed_rate" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xb86ceee3, "stmmac_dvr_probe" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa7a8f833, "pcim_iounmap_regions" },
	{ 0x52252316, "clk_unregister_fixed_rate" },
	{ 0x1806bfe, "stmmac_dvr_remove" },
	{ 0x8d69151d, "pci_wake_from_d3" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xf2527376, "stmmac_suspend" },
	{ 0x5ae95edb, "stmmac_resume" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xadccd966, "convert_art_to_tsc" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy,stmmac");

MODULE_ALIAS("pci:v00008086d00000937sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B31sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B32sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BA1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AADsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "33C52EF561A59320F75B86E");
