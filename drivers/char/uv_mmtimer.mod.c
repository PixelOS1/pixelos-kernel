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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0x45a41106, "noop_llseek" },
	{ 0xa164df89, "misc_register" },
	{ 0x12e285ec, "is_uv_system" },
	{ 0x8b966b63, "sn_rtc_cycles_per_second" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x92997ed8, "_printk" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x4faa9e16, "remap_pfn_range" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xf3189f7e, "__uv_cpu_info" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "747440731BE8DDAD793062C");
