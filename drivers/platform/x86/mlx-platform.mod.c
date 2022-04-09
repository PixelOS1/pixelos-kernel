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
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x7fd076f, "regcache_sync" },
	{ 0x1a61affa, "regcache_mark_dirty" },
	{ 0xf7175300, "regmap_read" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xd449c07c, "i2c_put_adapter" },
	{ 0x1d36acf4, "i2c_get_adapter" },
	{ 0xaa10ea97, "__devm_regmap_init" },
	{ 0x9f7149a2, "devm_ioport_map" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xb19b445, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("dmi*:rn*VMOD0001*:");
MODULE_ALIAS("dmi*:rn*VMOD0001*:");
MODULE_ALIAS("dmi*:rn*VMOD0002*:");
MODULE_ALIAS("dmi*:rn*VMOD0003*:");
MODULE_ALIAS("dmi*:rn*VMOD0004*:");
MODULE_ALIAS("dmi*:rn*VMOD0005*:");
MODULE_ALIAS("dmi*:rn*VMOD0007*:");
MODULE_ALIAS("dmi*:rn*VMOD0009*:");
MODULE_ALIAS("dmi*:rn*VMOD0010*:");
MODULE_ALIAS("dmi*:rn*VMOD0011*:");
MODULE_ALIAS("dmi*:pn*MSN274*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN24*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN27*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSB*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSX*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN21*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN201*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MQM87*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN37*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN34*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN38*:rvn*MellanoxTechnologies*:");

MODULE_INFO(srcversion, "AEE3E9B111A657EC4069EE8");
