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
	{ 0x2c499467, "platform_device_put" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x38d8baf3, "device_add_software_node" },
	{ 0xa17ef8db, "set_primary_fwnode" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3baa83fd, "serial8250_register_8250_port" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xb9d666a5, "pcim_iomap" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0xcc248d26, "serial8250_suspend_port" },
	{ 0xc7208c3a, "serial8250_resume_port" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x268c8090, "device_remove_software_node" },
	{ 0xe223e6d7, "serial8250_get_port" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x3eb03654, "serial8250_do_set_divisor" },
	{ 0xbeb368f8, "serial8250_do_startup" },
	{ 0xdd65bcf5, "serial8250_do_shutdown" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000494Fd00001052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000494Fd0000105Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000494Fd0000106Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000494Fd000010A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000494Fd000010D2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000494Fd000010DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000494Fd000010EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000152sv000012C4sd00000300bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000154sv000012C4sd00000301bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000158sv000012C4sd00000302bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000152sv000012C4sd00000310bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000154sv000012C4sd00000311bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000158sv000012C4sd00000312bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000152sv000012C4sd00000320bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000154sv000012C4sd00000321bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000158sv000012C4sd00000322bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000152sv000012C4sd00000330bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000154sv000012C4sd00000331bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000158sv000012C4sd00000332bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000152sv00001014sd000003D4bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000152sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000154sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000158sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000352sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000354sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000358sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00004358sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00008358sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d00000022sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d00000020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d00000021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d0000000Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d0000000Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F9BBD9B8266B8E78A569A70");
