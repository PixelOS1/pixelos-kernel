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
	{ 0x8f6f12c9, "iscsi_boot_create_acpitbl" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xfa2a4fda, "sysfs_create_link" },
	{ 0x2901806, "pci_get_domain_bus_and_slot" },
	{ 0x9d685d92, "iscsi_boot_create_target" },
	{ 0xef3b0f4b, "iscsi_boot_create_ethernet" },
	{ 0x541a471f, "iscsi_boot_create_initiator" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xcc1e6a3c, "iscsi_boot_create_kset" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xb26066fe, "ibft_phys_addr" },
	{ 0xed48c8dd, "iscsi_boot_destroy_kset" },
	{ 0x92997ed8, "_printk" },
	{ 0xbb99e571, "sysfs_remove_link" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "iscsi_boot_sysfs");


MODULE_INFO(srcversion, "819F7C004F3AFDDBCDB4917");
