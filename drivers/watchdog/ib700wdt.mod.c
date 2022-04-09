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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xc0fceb2f, "__platform_driver_probe" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x96d01fb1, "__module_get" },
	{ 0xa0a0cb18, "stream_open" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x5012a70, "pv_ops" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xa164df89, "misc_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "30196FE46FA8C79F40C8BE3");
