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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x664ef11f, "dm_unregister_target" },
	{ 0x42f01a2e, "dm_register_target" },
	{ 0x9609df33, "raid5_set_cache_size" },
	{ 0x713ed74c, "r5c_journal_mode_set" },
	{ 0xba9027d8, "md_start" },
	{ 0x6899b477, "md_run" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x224a96de, "dm_get_device" },
	{ 0x9154ba67, "dm_table_get_mode" },
	{ 0x93aa41c5, "dm_set_target_max_io_len" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xdd1385c8, "md_rdev_init" },
	{ 0xc6135d2b, "mddev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x96848186, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x8b3fd4b4, "md_wakeup_thread" },
	{ 0x94fef5b3, "md_reap_sync_thread" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x3df274e2, "md_bitmap_load" },
	{ 0xdc93150a, "md_update_sb" },
	{ 0xd8995f6f, "md_bitmap_resize" },
	{ 0xfb578fc5, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0xc76edc06, "dm_put_device" },
	{ 0xf4bea5a3, "md_rdev_clear" },
	{ 0x11ef7186, "md_stop" },
	{ 0x337b8c1a, "dm_table_event" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x72be1baf, "set_capacity_and_notify" },
	{ 0x5535c1d, "dm_disk" },
	{ 0xb9380e95, "dm_table_get_md" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xfe6577c7, "sync_page_io" },
	{ 0xdf1ebaa6, "mddev_resume" },
	{ 0x9dfb3d6, "md_error" },
	{ 0x92997ed8, "_printk" },
	{ 0x726e2e13, "md_handle_request" },
	{ 0x330101a5, "md_stop_writes" },
	{ 0x69a65fbc, "mddev_unlock" },
	{ 0x4b27cc62, "mddev_suspend" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x51f86a1a, "blk_limits_io_opt" },
	{ 0xd2779731, "blk_limits_io_min" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dm-mod,raid456,md-mod");


MODULE_INFO(srcversion, "0285D8867566C5CE5703A3D");
