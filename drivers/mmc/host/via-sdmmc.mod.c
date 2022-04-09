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
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0x387dfe48, "mmc_detect_change" },
	{ 0xfa227d2f, "device_wakeup_enable" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x67aeabe5, "mmc_add_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf9a482f9, "msleep" },
	{ 0xde80cd09, "ioremap" },
	{ 0xd31491e9, "mmc_alloc_host" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb1031dd6, "mmc_request_done" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x92997ed8, "_printk" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x952dcf27, "mmc_free_host" },
	{ 0xedc03953, "iounmap" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6e7d67ae, "mmc_remove_host" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mmc_core");

MODULE_ALIAS("pci:v00001106d00009530sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7B43F06057CECB33D1A517C");
