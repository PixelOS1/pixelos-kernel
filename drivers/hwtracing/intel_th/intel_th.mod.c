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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5b7424d5, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x7549c36, "driver_register" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x21752e, "device_release_driver" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3be38d4c, "__register_chrdev" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0xc5d9d883, "pm_runtime_forbid" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe7ab247a, "pm_runtime_no_callbacks" },
	{ 0x97c12194, "device_match_devt" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x339c0a66, "device_del" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x45a41106, "noop_llseek" },
	{ 0xf5c5e04e, "device_add" },
	{ 0xab1a08a3, "bus_find_device" },
	{ 0xbb6269b0, "bus_unregister" },
	{ 0xdfbcf889, "module_put" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xcbb3c845, "devm_free_irq" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xbd508a26, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0x96848186, "scnprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C6F154B609ACAA93B6C2336");
