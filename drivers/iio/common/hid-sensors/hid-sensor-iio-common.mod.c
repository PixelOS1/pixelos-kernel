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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0x2ed305de, "sensor_hub_get_feature" },
	{ 0x54b1de42, "sensor_hub_input_get_attribute_info" },
	{ 0x1af267f8, "int_pow" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc61afcc1, "sensor_hub_set_feature" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
};

MODULE_INFO(depends, "hid-sensor-hub");


MODULE_INFO(srcversion, "191F8EAE534206EA6F6657E");
