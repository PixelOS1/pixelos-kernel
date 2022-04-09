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
	{ 0xc0013398, "__cpuhp_remove_state" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x6feabb13, "__cpuhp_setup_state" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0x92997ed8, "_printk" },
	{ 0x2c499467, "platform_device_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0x231a9a8f, "hwmon_device_register" },
	{ 0x2af975fa, "device_create_file" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x6e841389, "cpu_info" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0xe734c844, "hwmon_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hwmon-vid");

MODULE_ALIAS("cpu:type:x86,ven0005fam0006mod000A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0005fam0006mod000D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0005fam0006mod000F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0005fam0007mod*:feature:*");

MODULE_INFO(srcversion, "45B314A89B10CB737AD73C6");
