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
	{ 0x8e34eaa4, "wmi_driver_unregister" },
	{ 0xc9ce5f01, "__wmi_driver_register" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xfbf394b, "devm_hwmon_device_register_with_info" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x9166fada, "strncpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi");

MODULE_ALIAS("dmi*:rvn*ASUSTeKCOMPUTERINC.*:rn*PRIMEX399-A*:");
MODULE_ALIAS("dmi*:rvn*ASUSTeKCOMPUTERINC.*:rn*PRIMEX470-PRO*:");
MODULE_ALIAS("dmi*:rvn*ASUSTeKCOMPUTERINC.*:rn*ROGCROSSHAIRVIEXTREME*:");
MODULE_ALIAS("dmi*:rvn*ASUSTeKCOMPUTERINC.*:rn*ROGCROSSHAIRVIHERO*:");
MODULE_ALIAS("dmi*:rvn*ASUSTeKCOMPUTERINC.*:rn*ROGCROSSHAIRVIHERO(WI-FIAC)*:");
MODULE_ALIAS("dmi*:rvn*ASUSTeKCOMPUTERINC.*:rn*ROGCROSSHAIRVIIHERO*:");
MODULE_ALIAS("dmi*:rvn*ASUSTeKCOMPUTERINC.*:rn*ROGCROSSHAIRVIIHERO(WI-FI)*:");
MODULE_ALIAS("dmi*:rvn*ASUSTeKCOMPUTERINC.*:rn*ROGSTRIXB450-EGAMING*:");
MODULE_ALIAS("dmi*:rvn*ASUSTeKCOMPUTERINC.*:rn*ROGSTRIXB450-FGAMING*:");
MODULE_ALIAS("dmi*:rvn*ASUSTeKCOMPUTERINC.*:rn*ROGSTRIXB450-IGAMING*:");
MODULE_ALIAS("dmi*:rvn*ASUSTeKCOMPUTERINC.*:rn*ROGSTRIXX399-EGAMING*:");
MODULE_ALIAS("dmi*:rvn*ASUSTeKCOMPUTERINC.*:rn*ROGSTRIXX470-FGAMING*:");
MODULE_ALIAS("dmi*:rvn*ASUSTeKCOMPUTERINC.*:rn*ROGSTRIXX470-IGAMING*:");
MODULE_ALIAS("dmi*:rvn*ASUSTeKCOMPUTERINC.*:rn*ROGZENITHEXTREME*:");
MODULE_ALIAS("dmi*:rvn*ASUSTeKCOMPUTERINC.*:rn*ROGZENITHEXTREMEALPHA*:");

MODULE_INFO(srcversion, "0345DBCF8C727803CAEBA45");
