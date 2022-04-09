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
	{ 0xb3153dca, "driver_unregister" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0x99655b18, "nfc_alloc_recv_skb" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xbc08d850, "nfc_digital_unregister_device" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6d265f53, "nfc_digital_register_device" },
	{ 0xc602dd5a, "nfc_digital_free_device" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0xafb4b180, "nfc_digital_allocate_device" },
	{ 0xe4bd0d8d, "regulator_get_voltage" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x2f77ce17, "devm_gpiod_get_index_optional" },
	{ 0x3ebd1582, "devm_gpiod_get_index" },
	{ 0x52345e6e, "spi_setup" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x24e48d13, "skb_put" },
	{ 0x128f355, "skb_copy_expand" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x43469f8e, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdf4b802d, "spi_write_then_read" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfc,nfc_digital");

MODULE_ALIAS("spi:trf7970a");
MODULE_ALIAS("of:N*T*Cti,trf7970a");
MODULE_ALIAS("of:N*T*Cti,trf7970aC*");

MODULE_INFO(srcversion, "18AB52197B4C88613A49F5B");
