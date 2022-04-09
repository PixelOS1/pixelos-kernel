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
	{ 0x39304bc4, "cdev_set_parent" },
	{ 0xf5fa5da, "cdev_del" },
	{ 0xb714fea5, "inode_dax" },
	{ 0xacb32f2d, "cdev_init" },
	{ 0xf16f51df, "kill_dev_dax" },
	{ 0x77358855, "iomem_resource" },
	{ 0xcddca71c, "vmf_insert_mixed" },
	{ 0x3f84bcd7, "dax_alive" },
	{ 0xdfc79734, "vmf_insert_pfn_pmd_prot" },
	{ 0xee8f0fe1, "__set_page_dirty_no_writeback" },
	{ 0xd0db0f12, "run_dax" },
	{ 0x9acbdf2b, "devm_memremap_pages" },
	{ 0xd84d35bd, "dax_read_lock" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x272e755e, "__dax_driver_register" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x1bc5c3fa, "noop_invalidatepage" },
	{ 0xc23477d, "current_task" },
	{ 0x5f6f1e9e, "dax_get_private" },
	{ 0x45a41106, "noop_llseek" },
	{ 0xdd0fe58, "dax_inode" },
	{ 0xb3e06731, "linear_hugepage_index" },
	{ 0x3b09f2ee, "cdev_add" },
	{ 0x8eee3399, "dax_read_unlock" },
	{ 0x2b457326, "static_dev_dax" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x8b910be2, "errseq_sample" },
	{ 0x87f42faf, "dax_driver_unregister" },
	{ 0x826f054f, "vmf_insert_pfn_pud_prot" },
	{ 0xcec1d46a, "devm_kmalloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1F7E3FD85011CE0262AE6E0");
