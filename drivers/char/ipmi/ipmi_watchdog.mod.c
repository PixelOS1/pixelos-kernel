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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x77334dcc, "ipmi_smi_watcher_unregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x81c5cc9, "ipmi_smi_watcher_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xf2c82101, "param_set_int" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa164df89, "misc_register" },
	{ 0x89a5279a, "ipmi_get_version" },
	{ 0xae71627d, "ipmi_create_user" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x77bc13a0, "strim" },
	{ 0x9166fada, "strncpy" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf388b18b, "ipmi_destroy_user" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xb3a2dfdf, "nmi_panic" },
	{ 0xe64ad8ea, "unregister_nmi_handler" },
	{ 0xde4eeab5, "__register_nmi_handler" },
	{ 0xf5531bea, "ipmi_poll_interface" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xc23477d, "current_task" },
	{ 0xa6257a2f, "complete" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x754d539c, "strlen" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa916b694, "strnlen" },
	{ 0x80aa4656, "ipmi_free_recv_msg" },
	{ 0xf1e046cc, "panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x76abb595, "kill_fasync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa0a0cb18, "stream_open" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xaca90ebd, "ipmi_request_supply_msgs" },
	{ 0x7dd49bd0, "fasync_helper" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipmi_msghandler");


MODULE_INFO(srcversion, "AC51B14A4633629F2C0CF52");
