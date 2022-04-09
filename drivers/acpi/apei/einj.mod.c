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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x12e730e, "apei_exec_noop" },
	{ 0x574609c5, "apei_exec_write_register_value" },
	{ 0x90c8498c, "apei_exec_write_register" },
	{ 0x1cb7c983, "apei_exec_read_register_value" },
	{ 0x500c768c, "apei_exec_read_register" },
	{ 0x9b02585d, "single_release" },
	{ 0x94216657, "seq_read" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0xe283cb34, "simple_attr_release" },
	{ 0x246cd242, "debugfs_attr_write" },
	{ 0x6d5cd7ee, "debugfs_attr_read" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x92b99a33, "acpi_put_table" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x71d4d445, "debugfs_create_blob" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x6019792c, "debugfs_create_x64" },
	{ 0x39e60e9d, "debugfs_create_x32" },
	{ 0x6b3ae022, "acpi_os_unmap_iomem" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x603d0d51, "acpi_os_map_iomem" },
	{ 0x7ac90ced, "debugfs_create_file_unsafe" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x5d8e2690, "apei_get_debugfs_dir" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xd349d253, "seq_printf" },
	{ 0xe4345174, "single_open" },
	{ 0xdb1aaf9b, "arch_is_platform_page" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf6a28554, "region_intersects" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb52e502, "apei_resources_add" },
	{ 0xfe0e7cd3, "apei_exec_post_unmap_gars" },
	{ 0xbec66c3a, "__apei_exec_run" },
	{ 0x74457e56, "apei_resources_fini" },
	{ 0xe13cb4d, "apei_resources_release" },
	{ 0x8e6fa8b5, "apei_exec_pre_map_gars" },
	{ 0xef1f6e23, "apei_resources_request" },
	{ 0x17614bf3, "apei_resources_sub" },
	{ 0x58f9366, "apei_exec_collect_resources" },
	{ 0xdc7df67f, "apei_exec_ctx_init" },
	{ 0xedc03953, "iounmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x556422b3, "ioremap_cache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x45db6081, "simple_attr_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3F882C957461DCC14DA4949");
