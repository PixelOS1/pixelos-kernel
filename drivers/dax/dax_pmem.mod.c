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
	{ 0x77358855, "iomem_resource" },
	{ 0xbad336bc, "nvdimm_namespace_common_probe" },
	{ 0x777444a2, "devm_create_dev_dax" },
	{ 0xf901e4e5, "devm_namespace_disable" },
	{ 0x3237f1d7, "alloc_dax_region" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc1f39529, "__nd_driver_register" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xa2f4f167, "dax_region_put" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xadd1f413, "nvdimm_setup_pfn" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x28c625a5, "to_nd_dax" },
	{ 0x418724dc, "to_nd_region" },
	{ 0x53ce93, "devm_namespace_enable" },
};

MODULE_INFO(depends, "libnvdimm");


MODULE_INFO(srcversion, "B8955FF89C54BC0005CE389");
