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
	{ 0x45a41106, "noop_llseek" },
	{ 0xee111615, "param_ops_int" },
	{ 0x77334dcc, "ipmi_smi_watcher_unregister" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x81c5cc9, "ipmi_smi_watcher_register" },
	{ 0x4195254f, "class_destroy" },
	{ 0x3be38d4c, "__register_chrdev" },
	{ 0x1aafecfe, "__class_create" },
	{ 0x12dd1e77, "ipmi_set_maintenance_mode" },
	{ 0x3bc993e, "ipmi_set_my_LUN" },
	{ 0xd54a5050, "ipmi_unregister_for_cmd" },
	{ 0x50f65edf, "ipmi_set_gets_events" },
	{ 0xec1c2a90, "ipmi_get_my_address" },
	{ 0x705dd14, "ipmi_register_for_cmd" },
	{ 0xfe0f2369, "ipmi_get_maintenance_mode" },
	{ 0xfaaa4831, "ipmi_set_my_address" },
	{ 0x74778a80, "ipmi_get_my_LUN" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x804f922a, "ipmi_addr_length" },
	{ 0x76abb595, "kill_fasync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4c2054d7, "ipmi_request_settime" },
	{ 0xe4f4665b, "ipmi_validate_addr" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xae71627d, "ipmi_create_user" },
	{ 0x80aa4656, "ipmi_free_recv_msg" },
	{ 0xf388b18b, "ipmi_destroy_user" },
	{ 0x7dd49bd0, "fasync_helper" },
	{ 0x92997ed8, "_printk" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4dce8ff3, "device_create" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x90ce49bd, "device_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipmi_msghandler");


MODULE_INFO(srcversion, "B9D96B50398EDC188321AC8");
