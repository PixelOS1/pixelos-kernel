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
	{ 0x10678c65, "tifm_add_adapter" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa7a199fb, "pci_ioremap_bar" },
	{ 0x81843e87, "tifm_alloc_adapter" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x776c87fd, "device_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xdaf02d94, "device_register" },
	{ 0x422a8ac, "tifm_alloc_device" },
	{ 0x3fca99ce, "tifm_free_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb03b720a, "tifm_free_adapter" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xc4fd1679, "pci_intx" },
	{ 0xedc03953, "iounmap" },
	{ 0xf385e7ed, "tifm_remove_adapter" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x232b032c, "device_wakeup_disable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xffb277f, "tifm_queue_work" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tifm_core");

MODULE_ALIAS("pci:v0000104Cd00008033sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000803Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000AC8Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CB41F549697CE3A51259FCE");
