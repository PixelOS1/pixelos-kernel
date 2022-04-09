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
	{ 0x70e73a45, "no_seek_end_llseek" },
	{ 0xc0013398, "__cpuhp_remove_state" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x4195254f, "class_destroy" },
	{ 0x6feabb13, "__cpuhp_setup_state" },
	{ 0x1aafecfe, "__class_create" },
	{ 0x92997ed8, "_printk" },
	{ 0x3be38d4c, "__register_chrdev" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa080c5e5, "smp_call_function_single_async" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4dce8ff3, "device_create" },
	{ 0xa6257a2f, "complete" },
	{ 0x5012a70, "pv_ops" },
	{ 0x6e841389, "cpu_info" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x90ce49bd, "device_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "64BCC114AFF7369B216F637");
