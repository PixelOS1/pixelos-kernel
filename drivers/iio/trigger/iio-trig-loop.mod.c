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
	{ 0x1d653fba, "iio_unregister_sw_trigger_type" },
	{ 0xd68d704b, "iio_register_sw_trigger_type" },
	{ 0x9e77ad21, "config_group_init_type_name" },
	{ 0x8f6331cd, "__iio_trigger_register" },
	{ 0xed528172, "iio_trigger_alloc" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0xca7d8764, "kthread_freezable_should_stop" },
	{ 0xf25891ce, "iio_trigger_poll_chained" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x37a0cba, "kfree" },
	{ 0x82119b2f, "iio_trigger_free" },
	{ 0xf40f22e7, "iio_trigger_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio-sw-trigger,configfs,industrialio");


MODULE_INFO(srcversion, "0F6060515BE20655445D498");
