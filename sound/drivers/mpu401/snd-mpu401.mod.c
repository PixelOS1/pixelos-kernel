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
	{ 0x75fd0eb0, "snd_mpu401_uart_new" },
	{ 0xfe520adf, "snd_devm_card_new" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xa295f2cc, "pnp_unregister_driver" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xeaa7e4ea, "pnp_register_driver" },
	{ 0x3b26e6a5, "pnp_get_resource" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x5a8a2dc9, "param_ops_long" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-mpu401-uart,snd");

MODULE_ALIAS("pnp:dPNPb006*");
MODULE_ALIAS("acpi*:PNPB006:*");

MODULE_INFO(srcversion, "79DE2256DA0653975AC6DC4");
