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
	{ 0x2a8902ca, "rtsx_usb_ep0_read_register" },
	{ 0xa2c980c7, "rtsx_usb_ep0_write_register" },
	{ 0x8b0a3838, "rtsx_usb_transfer_data" },
	{ 0x58a621e9, "rtsx_usb_get_rsp" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4ea59fb1, "rtsx_usb_switch_clock" },
	{ 0xe0f81e5b, "rtsx_usb_card_exclusive_check" },
	{ 0x99d97b98, "memstick_add_host" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd3faa88a, "memstick_alloc_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa08a42d0, "rtsx_usb_write_register" },
	{ 0x6cc27172, "rtsx_usb_read_register" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x436d3d47, "rtsx_usb_send_cmd" },
	{ 0xea5001a8, "rtsx_usb_add_cmd" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xd74f363, "memstick_free_host" },
	{ 0xf30c39b4, "memstick_remove_host" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4ac44daa, "memstick_next_req" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x508199ea, "memstick_suspend_host" },
	{ 0x9b9a640d, "memstick_resume_host" },
	{ 0x2650441a, "memstick_detect_change" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rtsx_usb,memstick");

MODULE_ALIAS("platform:rtsx_usb_ms");

MODULE_INFO(srcversion, "EDCB765630E723C67EC3ED4");
