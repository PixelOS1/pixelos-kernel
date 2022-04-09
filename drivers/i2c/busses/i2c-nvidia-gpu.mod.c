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
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x60941796, "i2c_new_client_device" },
	{ 0x5c8bb90c, "i2c_add_adapter" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xb9d666a5, "pcim_iomap" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("pci:v000010DEd*sv*sd*bc0Csc80i*");

MODULE_INFO(srcversion, "B7731A63E75D0C80E3244DD");
