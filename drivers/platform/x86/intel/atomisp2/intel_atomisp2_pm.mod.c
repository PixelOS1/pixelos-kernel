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
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0x96eab78b, "iosf_mbi_modify" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0xc5d9d883, "pm_runtime_forbid" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xe9a18439, "pci_save_state" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00000F38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022B8sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BB2302D8F850F7847C2DD48");
