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
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xf0d40089, "ptp_clock_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc0aabb45, "ptp_schedule_worker" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x1564421, "request_firmware" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4836c822, "ptp_clock_event" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x185d6da3, "regmap_bulk_write" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xfd03a232, "ptp_clock_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C0DBDAF286B428B43D4E8CB");
