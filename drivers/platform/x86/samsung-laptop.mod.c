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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x9b02585d, "single_release" },
	{ 0x94216657, "seq_read" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0xbed6a279, "backlight_device_unregister" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x71d4d445, "debugfs_create_blob" },
	{ 0x1537b21c, "debugfs_create_u8" },
	{ 0x6604ef93, "debugfs_create_u32" },
	{ 0x7e51de59, "debugfs_create_u16" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8868fc02, "backlight_device_register" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x37a0cba, "kfree" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x11089ac7, "_ctype" },
	{ 0xde80cd09, "ioremap" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xb2fabf63, "efi" },
	{ 0xd349d253, "seq_printf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0xedc03953, "iounmap" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xe4345174, "single_open" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xff282521, "rfkill_register" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x46e6e457, "rfkill_alloc" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x754d539c, "strlen" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "backlight,video,rfkill");

MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*8*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*9*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*10*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*14*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*R40/R41*:rn*R40/R41*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N150P*:rn*N150P*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N145P/N250P/N260P*:rn*N145P/N250P/N260P*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N150/N210/N220*:rn*N150/N210/N220*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*NF110/NF210/NF310*:rn*NF110/NF210/NF310*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*X360*:rn*X360*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N250P*:rn*N250P*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*NC210/NC110*:rn*NC210/NC110*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*730U3E/740U3E*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*300V3Z/300V4Z/300V5Z*:");

MODULE_INFO(srcversion, "8E7EEFB7342BD6A4811B58C");
