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
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4841bdee, "strnchr" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x70daadb3, "ucsi_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf9a7aef7, "ucsi_set_drvdata" },
	{ 0x23c15cb8, "ucsi_create" },
	{ 0xcf52ce0c, "device_property_read_u16_array" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0x11f89fea, "ucsi_connector_change" },
	{ 0xa6257a2f, "complete" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x1564421, "request_firmware" },
	{ 0x745e1539, "ucsi_get_drvdata" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x89937627, "i2c_transfer" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x38013f52, "ucsi_destroy" },
	{ 0x98cfdb13, "ucsi_unregister" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x799ab29d, "ucsi_resume" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,typec_ucsi");

MODULE_ALIAS("i2c:ccgx-ucsi");

MODULE_INFO(srcversion, "653CE223B5F8F363A770831");
