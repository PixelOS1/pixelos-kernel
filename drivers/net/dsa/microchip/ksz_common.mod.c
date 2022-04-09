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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9dca454d, "dsa_unregister_switch" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfdebfa59, "dsa_register_switch" },
	{ 0x69acdf38, "memcpy" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0xcec1d46a, "devm_kmalloc" },
};

MODULE_INFO(depends, "dsa_core");


MODULE_INFO(srcversion, "2B2C185BD9F5F7193F79B31");
