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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0xccf2840, "param_get_int" },
	{ 0xf2d18142, "pm_runtime_barrier" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0xf2c82101, "param_set_int" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0x331337dc, "input_event" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xa164df89, "misc_register" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xc1a92eef, "input_set_poll_interval" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x327d7adf, "input_set_max_poll_interval" },
	{ 0x7dd49bd0, "fasync_helper" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x23bef2ee, "pm_schedule_suspend" },
	{ 0x92997ed8, "_printk" },
	{ 0x87645171, "input_setup_polling" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x772559dd, "input_set_min_poll_interval" },
	{ 0x76abb595, "kill_fasync" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xefc7653c, "input_allocate_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4A8217384922D9CF93CDFF4");
