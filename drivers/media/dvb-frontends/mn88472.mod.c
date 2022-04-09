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
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x7adbc70b, "i2c_new_dummy_device" },
	{ 0xdd81b860, "__regmap_init_i2c" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x185d6da3, "regmap_bulk_write" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x1564421, "request_firmware" },
	{ 0x8733236, "intlog10" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0xf7175300, "regmap_read" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0xc88dc9c9, "i2c_unregister_device" },
	{ 0xb839fa76, "regmap_exit" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-i2c,dvb-core");

MODULE_ALIAS("i2c:mn88472");

MODULE_INFO(srcversion, "2498AC824EC46AEE664F038");
