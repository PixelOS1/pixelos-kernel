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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x5a296fd6, "vfio_pci_core_match" },
	{ 0x54d5ebfd, "vfio_pci_core_err_handlers" },
	{ 0x8c9f480b, "vfio_pci_core_finish_enable" },
	{ 0x36c56925, "vfio_pci_core_close_device" },
	{ 0x220228d6, "pci_add_dynid" },
	{ 0x6926b5ed, "pci_user_read_config_byte" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xbe0efdfd, "vfio_pci_register_dev_region" },
	{ 0x85df9b6c, "strsep" },
	{ 0xf5f1b816, "vfio_pci_core_sriov_configure" },
	{ 0xc8a016aa, "param_ops_string" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x288db863, "vfio_pci_core_ioctl" },
	{ 0xcde1fa1d, "vfio_pci_core_read" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xaef2a36b, "vfio_pci_core_disable" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x2901806, "pci_get_domain_bus_and_slot" },
	{ 0x6c3edf32, "vfio_pci_core_request" },
	{ 0x5bef783b, "vfio_pci_core_unregister_device" },
	{ 0x120ca24e, "vfio_pci_core_register_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4d924f20, "memremap" },
	{ 0x84437077, "vfio_pci_core_init_device" },
	{ 0x53c8cae3, "pci_user_read_config_word" },
	{ 0x37a0cba, "kfree" },
	{ 0x8129c072, "pci_user_read_config_dword" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xc165d8d6, "vfio_pci_core_mmap" },
	{ 0x4cf699b8, "vfio_pci_core_set_params" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xe847e192, "vfio_pci_core_write" },
	{ 0x227fac7c, "vfio_pci_core_enable" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x90c8cc56, "vfio_pci_core_uninit_device" },
};

MODULE_INFO(depends, "vfio-pci-core");

MODULE_ALIAS("vfio_pci:v*d*sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "70E595FCA8C1C8E4D9C7500");
