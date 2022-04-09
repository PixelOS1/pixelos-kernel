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
	{ 0xa295f2cc, "pnp_unregister_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0xeaa7e4ea, "pnp_register_driver" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85bd1608, "__request_region" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x550c12a1, "rc_free_device" },
	{ 0x538003d4, "rc_register_device" },
	{ 0xc410588, "rc_allocate_device" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x3b26e6a5, "pnp_get_resource" },
	{ 0x45efe5ab, "led_classdev_resume" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x38bf3116, "led_classdev_suspend" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x418ffa0d, "ir_raw_event_handle" },
	{ 0xe21b2d6, "ir_raw_event_store_with_filter" },
	{ 0xf992d1e8, "cc_platform_has" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x2ce47abe, "ir_raw_event_store" },
	{ 0x37a0cba, "kfree" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0x88f2d039, "rc_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("pnp:dWEC1022*");
MODULE_ALIAS("acpi*:WEC1022:*");

MODULE_INFO(srcversion, "EA1A330B84621073F270456");
