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
	{ 0x387dfe48, "mmc_detect_change" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x23906fc1, "sg_miter_start" },
	{ 0xc6468b1b, "pci_enable_wake" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x67aeabe5, "mmc_add_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xd31491e9, "mmc_alloc_host" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xb1031dd6, "mmc_request_done" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xa78c92d7, "sg_miter_stop" },
	{ 0x6cc09945, "ioread32_rep" },
	{ 0xfd1d5018, "sg_miter_next" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x952dcf27, "mmc_free_host" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6e7d67ae, "mmc_remove_host" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mmc_core");

MODULE_ALIAS("pci:v00001179d00000805sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2DDCD10061645A294684AD6");
