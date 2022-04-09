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
	{ 0x4939ebcd, "numa_map_to_online_node" },
	{ 0xea7c4b1, "nvdimm_pmem_region_create" },
	{ 0x9e1e3510, "nvdimm_bus_register" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xd5b8484d, "nvdimm_bus_unregister" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xcc935375, "walk_iomem_res_desc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x36173c1d, "phys_to_target_node" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
};

MODULE_INFO(depends, "libnvdimm");


MODULE_INFO(srcversion, "08B7A54AD8AF6B777D87537");
