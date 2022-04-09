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
	{ 0x73fec674, "param_ops_uint" },
	{ 0xee111615, "param_ops_int" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x40715144, "watchdog_unregister_device" },
	{ 0xd54e0fa0, "watchdog_register_device" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x2cc3d8f8, "watchdog_init_timeout" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf1e046cc, "panic" },
	{ 0x92997ed8, "_printk" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xef34bf3e, "hrtimer_active" },
	{ 0xdfbcf889, "module_put" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x1e7bbcb3, "kernel_restart" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B1087CB0A5D207E753FC72E");
