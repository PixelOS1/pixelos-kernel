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
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6c0de85d, "sdw_bus_exit_clk_stop" },
	{ 0xe4345174, "single_open" },
	{ 0xee111615, "param_ops_int" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0xad42cede, "sdw_bread_no_pm_unlocked" },
	{ 0x9b02585d, "single_release" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0xd349d253, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x60e31fbb, "sdw_find_col_index" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x94216657, "seq_read" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe283cb34, "simple_attr_release" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x6d5cd7ee, "debugfs_attr_read" },
	{ 0xeb6eb87, "add_taint" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x2738e27f, "sdw_handle_slave_status" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x1deee061, "sdw_find_row_index" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xdca5f908, "sdw_bus_clk_stop" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x246cd242, "debugfs_attr_write" },
	{ 0x45db6081, "simple_attr_open" },
	{ 0xc5885b83, "sdw_bus_prep_clk_stop" },
};

MODULE_INFO(depends, "soundwire-bus");


MODULE_INFO(srcversion, "A9C2FFDBD4D1B17C8F2A71F");
