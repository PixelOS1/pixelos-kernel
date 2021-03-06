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
	{ 0x8af62e49, "_dev_err" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8733236, "intlog10" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xfbd84ed6, "i2c_mux_add_adapter" },
	{ 0xc618b354, "i2c_mux_alloc" },
	{ 0xdd81b860, "__regmap_init_i2c" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x185d6da3, "regmap_bulk_write" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0x37a0cba, "kfree" },
	{ 0xb839fa76, "regmap_exit" },
	{ 0x129da2cf, "i2c_mux_del_adapters" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,dvb-core,i2c-mux,regmap-i2c");

MODULE_ALIAS("i2c:rtl2832");

MODULE_INFO(srcversion, "6E384FDD96851071CBFD35F");
