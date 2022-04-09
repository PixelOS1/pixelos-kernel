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
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0xa485992, "pci_rescan_bus" },
	{ 0x2f27916d, "pci_stop_and_remove_bus_device" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0x99f018c4, "nvmem_cell_read" },
	{ 0xa6257a2f, "complete" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xf0b177a0, "pcim_iounmap" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xb9d666a5, "pcim_iomap" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x868319dd, "request_firmware_nowait" },
	{ 0x96848186, "scnprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xee5d05d3, "devm_nvmem_cell_get" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xb782a633, "pcim_pin_device" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000168Cd0000FF1Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000FF1Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "569C62D80004A46F5B26349");
