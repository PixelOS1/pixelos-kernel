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
	{ 0xccf2840, "param_get_int" },
	{ 0xee111615, "param_ops_int" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x77334dcc, "ipmi_smi_watcher_unregister" },
	{ 0xd691c6a9, "unregister_sysctl_table" },
	{ 0x81c5cc9, "ipmi_smi_watcher_register" },
	{ 0x6a449c4f, "register_sysctl_table" },
	{ 0xf2c82101, "param_set_int" },
	{ 0x60a32ea9, "pm_power_off" },
	{ 0xf388b18b, "ipmi_destroy_user" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xae71627d, "ipmi_create_user" },
	{ 0x92997ed8, "_printk" },
	{ 0xf5531bea, "ipmi_poll_interface" },
	{ 0xaca90ebd, "ipmi_request_supply_msgs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xa6257a2f, "complete" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipmi_msghandler");


MODULE_INFO(srcversion, "4F321D529F45742A1AA22FE");
