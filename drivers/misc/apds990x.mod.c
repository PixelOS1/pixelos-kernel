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
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbc556315, "sysfs_notify" },
	{ 0xe9058da2, "i2c_smbus_read_word_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0xdf45e79a, "regulator_bulk_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x44bfda28, "regulator_bulk_free" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xee15abe8, "i2c_smbus_write_word_data" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:apds990x");

MODULE_INFO(srcversion, "E3148E45347D1E0A40ED88A");
