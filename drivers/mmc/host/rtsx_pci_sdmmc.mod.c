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
	{ 0x198525f2, "rtsx_pci_write_ppbuf" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x37a0cba, "kfree" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x79b3a0a8, "rtsx_pci_dma_transfer" },
	{ 0x9dbf9b60, "rtsx_pci_send_cmd_no_wait" },
	{ 0x4305f21a, "rtsx_pci_read_ppbuf" },
	{ 0xe8ee7676, "rtsx_pci_switch_clock" },
	{ 0xf28818aa, "rtsx_pci_card_power_on" },
	{ 0xa94e3d84, "rtsx_pci_card_pull_ctl_enable" },
	{ 0x40704c5a, "rtsx_pci_card_pull_ctl_disable" },
	{ 0xeb235909, "rtsx_pci_card_power_off" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf33bb9e3, "rtsx_pci_switch_output_voltage" },
	{ 0xb21e29ca, "rtsx_pci_read_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x41c35fd2, "rtsx_pci_card_exclusive_check" },
	{ 0xa4e7b328, "rtsx_pci_send_cmd" },
	{ 0xc0337956, "rtsx_pci_add_cmd" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xaa43d147, "rtsx_pci_dma_map_sg" },
	{ 0xcdf3608f, "rtsx_pci_card_exist" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xdc7bde06, "rtsx_pci_write_register" },
	{ 0xc2157bcb, "rtsx_pci_dma_unmap_sg" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x332a938d, "rtsx_pci_start_run" },
	{ 0x387dfe48, "mmc_detect_change" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x67aeabe5, "mmc_add_host" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd31491e9, "mmc_alloc_host" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x952dcf27, "mmc_free_host" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x6e7d67ae, "mmc_remove_host" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb1031dd6, "mmc_request_done" },
	{ 0x6f530b76, "rtsx_pci_complete_unfinished_transfer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rtsx_pci,mmc_core");

MODULE_ALIAS("platform:rtsx_pci_sdmmc");

MODULE_INFO(srcversion, "D306F9596530BAF697FF4EB");
