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
	{ 0xa24f23d8, "__request_module" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x20661225, "s5h1420_get_tuner_i2c_adapter" },
	{ 0xee111615, "param_ops_int" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0xa8d65c10, "dvb_unregister_adapter" },
	{ 0x32fdae66, "cx24113_agc_callback" },
	{ 0x9e573434, "dvb_register_frontend" },
	{ 0xfc04e0a7, "cx24123_get_tuner_i2c_adapter" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x5d8cc662, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5c8bb90c, "i2c_add_adapter" },
	{ 0xdf5f3197, "dvb_frontend_detach" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x37a8cd8c, "param_ops_short" },
	{ 0x360e621, "dvb_dmxdev_release" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0x18acd31f, "dvb_dmx_swfilter_packets" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9e9bf1ab, "dvb_register_adapter" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x1564421, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xe5462348, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "s5h1420,dvb-core,cx24113,cx24123,i2c-core");


MODULE_INFO(srcversion, "CE55295613B96852C779147");
