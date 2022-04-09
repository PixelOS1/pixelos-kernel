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
	{ 0x37a8cd8c, "param_ops_short" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xa8c82426, "cx231xx_unregister_extension" },
	{ 0xa668d6b3, "cx231xx_register_extension" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x2f133166, "cx231xx_init_bulk" },
	{ 0x588b55db, "cx231xx_init_isoc" },
	{ 0xef67201b, "cx231xx_set_alt_setting" },
	{ 0xcc763b2c, "cx231xx_uninit_isoc" },
	{ 0x18186b4b, "cx231xx_uninit_bulk" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x92997ed8, "_printk" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1c370a01, "dvb_create_media_graph" },
	{ 0xe5462348, "dvb_dmxdev_init" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x9e573434, "dvb_register_frontend" },
	{ 0x9e9bf1ab, "dvb_register_adapter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x17ea7c7, "cx231xx_tuner_callback" },
	{ 0xc517b306, "dvb_module_probe" },
	{ 0x8a1e0f02, "cx231xx_demod_reset" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x35b4807, "cx231xx_get_i2c_adap" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x937e7ffb, "dvb_module_release" },
	{ 0xa8d65c10, "dvb_unregister_adapter" },
	{ 0xdf5f3197, "dvb_frontend_detach" },
	{ 0x5d8cc662, "dvb_unregister_frontend" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x360e621, "dvb_dmxdev_release" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x958baf48, "cx231xx_set_mode" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cx231xx,dvb-core");


MODULE_INFO(srcversion, "5D49D43B2223CCECF35A0D9");
