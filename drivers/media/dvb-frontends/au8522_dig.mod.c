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
	{ 0x96e0bd92, "au8522_release_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0xee111615, "param_ops_int" },
	{ 0x16d8f20, "au8522_led_ctrl" },
	{ 0xe9c488cf, "au8522_writereg" },
	{ 0xa284b0f6, "au8522_readreg" },
	{ 0x54a5356f, "au8522_i2c_gate_ctrl" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x23d864b1, "au8522_sleep" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf13c6778, "au8522_analog_i2c_gate_ctrl" },
	{ 0xde28a1b4, "au8522_get_state" },
	{ 0xda987940, "au8522_init" },
};

MODULE_INFO(depends, "au8522_common");


MODULE_INFO(srcversion, "9046C5BFE26DA6555A7C336");
