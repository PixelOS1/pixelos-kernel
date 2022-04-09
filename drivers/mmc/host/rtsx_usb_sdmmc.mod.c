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
	{ 0xe040895f, "rtsx_usb_write_ppbuf" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x8b0a3838, "rtsx_usb_transfer_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x387dfe48, "mmc_detect_change" },
	{ 0x2a8902ca, "rtsx_usb_ep0_read_register" },
	{ 0x4ea59fb1, "rtsx_usb_switch_clock" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x67aeabe5, "mmc_add_host" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd31491e9, "mmc_alloc_host" },
	{ 0xe0f81e5b, "rtsx_usb_card_exclusive_check" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa08a42d0, "rtsx_usb_write_register" },
	{ 0x6cc27172, "rtsx_usb_read_register" },
	{ 0xbf9879c9, "rtsx_usb_read_ppbuf" },
	{ 0x58a621e9, "rtsx_usb_get_rsp" },
	{ 0x436d3d47, "rtsx_usb_send_cmd" },
	{ 0xea5001a8, "rtsx_usb_add_cmd" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0xa2c980c7, "rtsx_usb_ep0_write_register" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x952dcf27, "mmc_free_host" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6e7d67ae, "mmc_remove_host" },
	{ 0xb1031dd6, "mmc_request_done" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc3f795db, "rtsx_usb_get_card_status" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rtsx_usb,mmc_core");

MODULE_ALIAS("platform:rtsx_usb_sdmmc");

MODULE_INFO(srcversion, "8BC56801D29C5B2CF2AF257");
