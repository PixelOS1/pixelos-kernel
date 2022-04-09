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
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xeae811a7, "firmware_kobj" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x92997ed8, "_printk" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1bf55fc, "paddr_vmcoreinfo_note" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfa2a4fda, "sysfs_create_link" },
	{ 0xdf3a43de, "kset_register" },
	{ 0xaffe8c3a, "kobject_set_name" },
	{ 0x70864b44, "kset_find_obj" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xbcbcc6a1, "sysfs_create_bin_file" },
	{ 0xa980d013, "kobject_init_and_add" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa916b694, "strnlen" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xde80cd09, "ioremap" },
	{ 0x2921e434, "sysfs_create_file_ns" },
	{ 0x3419636e, "platform_get_resource_byname" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x85bd1608, "__request_region" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x23c1cf32, "kset_create_and_add" },
	{ 0xa2c56cf2, "kobject_create_and_add" },
	{ 0xfb578fc5, "memset" },
	{ 0xb19b445, "ioread8" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x7408f66e, "sysfs_remove_file_ns" },
	{ 0x2ec97348, "kobject_put" },
	{ 0xb7208e8a, "kobject_del" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9703bca3, "kset_unregister" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x56470118, "__warn_printk" },
	{ 0x26f8f0b8, "iowrite16be" },
	{ 0xa805ecfc, "acpi_release_global_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfbab1bb1, "ioread8_rep" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc9f34c1d, "acpi_acquire_global_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:QEMU0002:*");
MODULE_ALIAS("of:N*T*Cqemu,fw-cfg-mmio");
MODULE_ALIAS("of:N*T*Cqemu,fw-cfg-mmioC*");

MODULE_INFO(srcversion, "7DDBECACB6D3621D7D39DD4");
