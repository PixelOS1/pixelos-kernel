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
	{ 0x6eb91138, "class_find_device" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x9316b04c, "kobject_uevent" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x34091051, "fwnode_property_present" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xdaf02d94, "device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xdfbcf889, "module_put" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3be05c4a, "device_match_fwnode" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x5b8d27d9, "fwnode_get_parent" },
	{ 0xc62df768, "fwnode_connection_find_match" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0x4195254f, "class_destroy" },
	{ 0x776c87fd, "device_unregister" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x1aafecfe, "__class_create" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "14B8C5358A65995853D688E");
