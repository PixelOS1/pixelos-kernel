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
	{ 0x124560e5, "proc_thermal_resume" },
	{ 0x40a58b3d, "thermal_zone_device_disable" },
	{ 0x7e9c3c56, "thermal_zone_device_enable" },
	{ 0xcbb3c845, "devm_free_irq" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x54eb34a1, "thermal_zone_device_update" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xb46f8f6b, "thermal_zone_device_unregister" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf15c05c3, "proc_thermal_mmio_remove" },
	{ 0x88b9a5d4, "proc_thermal_remove" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xff241572, "thermal_zone_device_register" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xc7edd92d, "proc_thermal_mmio_add" },
	{ 0xa0ea8372, "proc_thermal_add" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xecff9d89, "proc_thermal_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "processor_thermal_device");

MODULE_ALIAS("pci:v00008086d0000461Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A71Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B9D51F1A77BB24973718D88");
