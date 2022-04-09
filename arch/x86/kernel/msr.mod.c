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
	{ 0x3be38d4c, "__register_chrdev" },
	{ 0x804af87c, "wrmsr_safe_on_cpu" },
	{ 0x3a2d1dfa, "rdmsr_safe_regs_on_cpu" },
	{ 0xb9e276cf, "wrmsr_safe_regs_on_cpu" },
	{ 0xeb6eb87, "add_taint" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb3f9e0ab, "security_locked_down" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x92997ed8, "_printk" },
	{ 0xc23477d, "current_task" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x77bc13a0, "strim" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4dce8ff3, "device_create" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc6cbbc89, "capable" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x90ce49bd, "device_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "85BAD85AC4133DB42A2C6C6");
