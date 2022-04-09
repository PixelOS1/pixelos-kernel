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
	{ 0xbe0367a5, "v4l2_ctrl_cluster" },
	{ 0xee111615, "param_ops_int" },
	{ 0xcdef13f6, "v4l2_ctrl_handler_free" },
	{ 0x27074bf6, "v4l2_ctrl_g_ctrl" },
	{ 0x57220fb, "v4l2_ctrl_new_std" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4c62c7c6, "v4l2_ctrl_activate" },
	{ 0xdd64e639, "strscpy" },
	{ 0x315de2cf, "v4l2_ctrl_get_menu" },
	{ 0xd909de9, "v4l2_ctrl_new_std_menu" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x90233826, "v4l2_ctrl_new_custom" },
	{ 0x4c41b6, "__v4l2_ctrl_grab" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd595fd58, "v4l2_ctrl_handler_setup" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x89e3897d, "v4l2_ctrl_query_fill" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc1c32573, "v4l2_ctrl_handler_init_class" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "9B7366CAD416EC72424DA74");
