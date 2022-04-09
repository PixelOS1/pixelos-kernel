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
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf7b163a, "atmel_i2c_enqueue" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x5ab0ceec, "atmel_i2c_send_receive" },
	{ 0xf283e995, "atmel_i2c_init_random_cmd" },
	{ 0xa3ac3e9a, "devm_hwrng_register" },
	{ 0x76ef2d1d, "atmel_i2c_probe" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,atmel-i2c");

MODULE_ALIAS("i2c:atsha204a");
MODULE_ALIAS("of:N*T*Catmel,atsha204a");
MODULE_ALIAS("of:N*T*Catmel,atsha204aC*");

MODULE_INFO(srcversion, "CBAEB3F13D2BE4FD6D6C1CD");
