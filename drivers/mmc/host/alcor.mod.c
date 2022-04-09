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
	{ 0x387dfe48, "mmc_detect_change" },
	{ 0x67aeabe5, "mmc_add_host" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xd31491e9, "mmc_alloc_host" },
	{ 0x952dcf27, "mmc_free_host" },
	{ 0x6e7d67ae, "mmc_remove_host" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc7403c56, "alcor_read32be" },
	{ 0xa4d507d4, "alcor_read32" },
	{ 0x544b90ca, "alcor_write32" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa816c474, "alcor_write32be" },
	{ 0x23906fc1, "sg_miter_start" },
	{ 0xaf433b56, "alcor_write16" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb1031dd6, "mmc_request_done" },
	{ 0x1b4be4bb, "alcor_write8" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0x87b8798d, "sg_next" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xa78c92d7, "sg_miter_stop" },
	{ 0x6cc09945, "ioread32_rep" },
	{ 0xfd1d5018, "sg_miter_next" },
	{ 0x4c66e539, "alcor_read8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mmc_core,alcor_pci");

MODULE_ALIAS("platform:alcor_sdmmc");

MODULE_INFO(srcversion, "AEE2B7A1BFA1C77962F20F9");
