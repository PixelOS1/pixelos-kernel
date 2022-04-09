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
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x4dd91eeb, "pwm_lpss_probe" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xc5d9d883, "pm_runtime_forbid" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pwm-lpss");

MODULE_ALIAS("pci:v00008086d00000AC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000011A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002288sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002289sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AC8sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E9EC97F168B4A5625ABDA6C");
