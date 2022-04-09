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
	{ 0xd0ba0b1f, "fuse_file_poll" },
	{ 0x45a41106, "noop_llseek" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0x4195254f, "class_destroy" },
	{ 0xa164df89, "misc_register" },
	{ 0x1aafecfe, "__class_create" },
	{ 0xf411d792, "fuse_dev_operations" },
	{ 0xffffe147, "fuse_dev_free" },
	{ 0xbeaeb598, "fuse_simple_background" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x935a066f, "fuse_dev_alloc_install" },
	{ 0x64286e01, "fuse_conn_init" },
	{ 0xfc85132c, "fuse_dev_fiq_ops" },
	{ 0x92997ed8, "_printk" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x9316b04c, "kobject_uevent" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x3b09f2ee, "cdev_add" },
	{ 0xa39f67e5, "cdev_alloc" },
	{ 0xf5c5e04e, "device_add" },
	{ 0x761527a1, "put_device" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x77bc13a0, "strim" },
	{ 0x85df9b6c, "strsep" },
	{ 0x754d539c, "strlen" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x21075824, "__free_pages" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd1a48792, "fuse_direct_io" },
	{ 0x85acfa4b, "fuse_do_ioctl" },
	{ 0xb3428735, "fuse_do_open" },
	{ 0x31b1102f, "fuse_conn_get" },
	{ 0xdcce8f1c, "fuse_conn_put" },
	{ 0x5d9c6825, "fuse_sync_release" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x2cf2cb86, "fuse_dev_release" },
	{ 0xf5fa5da, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x776c87fd, "device_unregister" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb40df53b, "fuse_abort_conn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fuse");


MODULE_INFO(srcversion, "2AEFF4C6F1A63CE76F7CCD0");
