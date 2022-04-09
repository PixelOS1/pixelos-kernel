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
	{ 0x73fec674, "param_ops_uint" },
	{ 0x50b1a13b, "parport_unregister_driver" },
	{ 0xa74b3f97, "__parport_register_driver" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x2045f61c, "pps_event" },
	{ 0x5012a70, "pv_ops" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x4cb27100, "ktime_get_snapshot" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xa3c4dc2d, "pps_register_source" },
	{ 0x9459bcd1, "parport_claim_or_block" },
	{ 0xc69d0c74, "parport_register_dev_model" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xffb7c514, "ida_free" },
	{ 0x9c12d0eb, "parport_unregister_device" },
	{ 0x77eebefb, "parport_release" },
	{ 0x6225e8d8, "pps_unregister_source" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "914C52901581BDA239CFE93");
