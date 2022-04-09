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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xee111615, "param_ops_int" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x79728442, "drm_property_create_range" },
	{ 0xb3a4151c, "drm_helper_probe_single_connector_modes" },
	{ 0x4cf863fe, "drm_object_property_set_value" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0x2dd00f02, "drm_object_attach_property" },
	{ 0xf6b031bb, "drm_mode_duplicate" },
	{ 0xc442df40, "drm_mode_create_tv_properties" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x21f1e459, "drm_crtc_helper_set_mode" },
	{ 0xa57f61a0, "drm_i2c_encoder_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x77d4bdac, "drm_property_destroy" },
	{ 0x1e83ee0a, "drm_mode_probed_add" },
};

MODULE_INFO(depends, "i2c-core,drm,drm_kms_helper");

MODULE_ALIAS("i2c:ch7006");

MODULE_INFO(srcversion, "7327E9C928051FC771AFFB0");
