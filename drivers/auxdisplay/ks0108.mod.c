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
	{ 0x50b1a13b, "parport_unregister_driver" },
	{ 0x9c12d0eb, "parport_unregister_device" },
	{ 0x2265fcad, "parport_claim" },
	{ 0x77eebefb, "parport_release" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc69d0c74, "parport_register_dev_model" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa74b3f97, "__parport_register_driver" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x9e7d6bd0, "__udelay" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "B6CAD5251AC21235C25BE9E");
