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
	{ 0xb90213cd, "__serio_register_port" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xee09ed35, "devm_ioremap_resource" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x8ccf5210, "platform_get_irq_byname" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xbade6d7, "serio_interrupt" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x70819b25, "serio_unregister_port" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C2427DEFE3FCB73696FFA86");
