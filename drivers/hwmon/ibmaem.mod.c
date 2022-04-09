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
	{ 0xc7f6572a, "platform_bus_type" },
	{ 0x77334dcc, "ipmi_smi_watcher_unregister" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x81c5cc9, "ipmi_smi_watcher_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x7549c36, "driver_register" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x231a9a8f, "hwmon_device_register" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xae71627d, "ipmi_create_user" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x4c2054d7, "ipmi_request_settime" },
	{ 0xe4f4665b, "ipmi_validate_addr" },
	{ 0xffb7c514, "ida_free" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xf388b18b, "ipmi_destroy_user" },
	{ 0xe734c844, "hwmon_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0x2af975fa, "device_create_file" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa6257a2f, "complete" },
	{ 0x80aa4656, "ipmi_free_recv_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipmi_msghandler");


MODULE_INFO(srcversion, "561836101F97739F5E1119E");
