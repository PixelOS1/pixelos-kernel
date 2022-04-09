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
	{ 0x768db380, "xt_unregister_targets" },
	{ 0x4195254f, "class_destroy" },
	{ 0x90ce49bd, "device_destroy" },
	{ 0x6bb5996e, "xt_register_targets" },
	{ 0x4dce8ff3, "device_create" },
	{ 0x1aafecfe, "__class_create" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf64aaa25, "alarm_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9316b04c, "kobject_uevent" },
	{ 0x2921e434, "sysfs_create_file_ns" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x9a23ea6b, "alarm_expires_remaining" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbc556315, "sysfs_notify" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9621d738, "alarm_start_relative" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x7408f66e, "sysfs_remove_file_ns" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xfdea2d04, "alarm_cancel" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0AF014AF65D5634652F6BE6");
