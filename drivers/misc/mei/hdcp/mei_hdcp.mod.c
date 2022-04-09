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
	{ 0x961f12d, "mei_cldev_driver_unregister" },
	{ 0x85721719, "__mei_cldev_driver_register" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x8a96c71f, "component_master_add_with_match" },
	{ 0xef763eca, "component_match_add_typed" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8a36eba3, "mei_cldev_enable" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x542b776, "mei_cldev_recv" },
	{ 0x37a02c29, "mei_cldev_send" },
	{ 0x3c99228e, "component_bind_all" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xffdda54f, "component_unbind_all" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x6ce574bc, "mei_cldev_disable" },
	{ 0xf91ee1d0, "mei_cldev_set_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0xbf9f0306, "component_master_del" },
	{ 0xebc692b2, "mei_cldev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mei");

MODULE_ALIAS("mei:*:b638ab7e-94e2-4ea2-a552-d1c54b627f04:*:*");

MODULE_INFO(srcversion, "CC6D9D19DF4932796931D3D");
