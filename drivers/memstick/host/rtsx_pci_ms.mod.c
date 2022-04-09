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
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb21e29ca, "rtsx_pci_read_register" },
	{ 0x884b108b, "rtsx_pci_transfer_data" },
	{ 0x9dbf9b60, "rtsx_pci_send_cmd_no_wait" },
	{ 0x332a938d, "rtsx_pci_start_run" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf28818aa, "rtsx_pci_card_power_on" },
	{ 0xa94e3d84, "rtsx_pci_card_pull_ctl_enable" },
	{ 0x40704c5a, "rtsx_pci_card_pull_ctl_disable" },
	{ 0xeb235909, "rtsx_pci_card_power_off" },
	{ 0xa4e7b328, "rtsx_pci_send_cmd" },
	{ 0xc0337956, "rtsx_pci_add_cmd" },
	{ 0xe8ee7676, "rtsx_pci_switch_clock" },
	{ 0xdc7bde06, "rtsx_pci_write_register" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x41c35fd2, "rtsx_pci_card_exclusive_check" },
	{ 0x2650441a, "memstick_detect_change" },
	{ 0x99d97b98, "memstick_add_host" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd3faa88a, "memstick_alloc_host" },
	{ 0xd74f363, "memstick_free_host" },
	{ 0xf30c39b4, "memstick_remove_host" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4ac44daa, "memstick_next_req" },
	{ 0x6f530b76, "rtsx_pci_complete_unfinished_transfer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x508199ea, "memstick_suspend_host" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x9b9a640d, "memstick_resume_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rtsx_pci,memstick");

MODULE_ALIAS("platform:rtsx_pci_ms");

MODULE_INFO(srcversion, "B3E914813B70C28F08D4E99");
