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
	{ 0xee111615, "param_ops_int" },
	{ 0xa295f2cc, "pnp_unregister_driver" },
	{ 0xeaa7e4ea, "pnp_register_driver" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0x2af975fa, "device_create_file" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0xb3a5fce5, "devm_rc_register_device" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3b26e6a5, "pnp_get_resource" },
	{ 0x3be43254, "pnp_activate_dev" },
	{ 0x5ac5f0f5, "devm_rc_allocate_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xe0b13336, "argv_free" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x7380dffa, "argv_split" },
	{ 0x37a0cba, "kfree" },
	{ 0xf446074f, "ir_raw_encode_scancode" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x2ce47abe, "ir_raw_event_store" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x418ffa0d, "ir_raw_event_handle" },
	{ 0xe21b2d6, "ir_raw_event_store_with_filter" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x96848186, "scnprintf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("pnp:dWEC0530*");
MODULE_ALIAS("acpi*:WEC0530:*");
MODULE_ALIAS("pnp:dNTN0530*");
MODULE_ALIAS("acpi*:NTN0530:*");

MODULE_INFO(srcversion, "1F9CE11ACD2BEBFCBFD0FE5");
