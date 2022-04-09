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
	{ 0x5b7424d5, "bus_register" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x7549c36, "driver_register" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x339c0a66, "device_del" },
	{ 0xdaf02d94, "device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x52d91e96, "class_unregister" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x954f099c, "idr_preload" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xf5c5e04e, "device_add" },
	{ 0x97ac8144, "__class_register" },
	{ 0xbb6269b0, "bus_unregister" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x761527a1, "put_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x16e6d67f, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x776c87fd, "device_unregister" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F88689FB9AEC62AA355F271");
