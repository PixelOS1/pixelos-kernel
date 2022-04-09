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
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xf0a26dbd, "cb710_sg_dwiter_write_next_block" },
	{ 0xa78c92d7, "sg_miter_stop" },
	{ 0x4388d4af, "cb710_sg_dwiter_read_next_block" },
	{ 0x23906fc1, "sg_miter_start" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xe3d7c00c, "cb710_pci_update_config_reg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x67aeabe5, "mmc_add_host" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xd31491e9, "mmc_alloc_host" },
	{ 0x952dcf27, "mmc_free_host" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x1c0a82d4, "cb710_set_irq_handler" },
	{ 0x6e7d67ae, "mmc_remove_host" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb19b445, "ioread8" },
	{ 0xb1031dd6, "mmc_request_done" },
	{ 0x387dfe48, "mmc_detect_change" },
	{ 0x848d372e, "iowrite8" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cb710,mmc_core");


MODULE_INFO(srcversion, "4A1C3BBC1BCFD2352BD733A");
