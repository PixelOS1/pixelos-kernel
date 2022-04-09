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
	{ 0x499df5af, "generic_file_llseek" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x4045cb0b, "simple_attr_read" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xe283cb34, "simple_attr_release" },
	{ 0x92997ed8, "_printk" },
	{ 0x45db6081, "simple_attr_open" },
	{ 0x4fddc9de, "simple_attr_write" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F60642BED4841BDD0A9F8E4");
