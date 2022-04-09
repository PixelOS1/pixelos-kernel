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
	{ 0xb45d60, "bio_split" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x4b27cc62, "mddev_suspend" },
	{ 0xd67f06ef, "__tracepoint_block_bio_remap" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xa7632fdb, "unregister_md_personality" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x548e30c7, "md_flush_request" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x8a798721, "disk_stack_limits" },
	{ 0xe7c145d, "bio_chain" },
	{ 0x838c1975, "submit_bio_noacct" },
	{ 0x999ab985, "__SCK__tp_func_block_bio_remap" },
	{ 0xd1f93394, "bio_endio" },
	{ 0x3b689112, "blk_queue_flag_clear" },
	{ 0x4d31f48f, "blk_queue_flag_set" },
	{ 0x9baa8b92, "bdevname" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8972abc3, "md_set_array_sectors" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0xdf1ebaa6, "mddev_resume" },
	{ 0x221401b7, "md_check_no_bitmap" },
	{ 0x4e01e28f, "md_integrity_register" },
	{ 0x6ee26f4f, "register_md_personality" },
	{ 0x273aff5c, "__SCT__tp_func_block_bio_remap" },
	{ 0x5d2b0351, "bio_associate_blkg" },
	{ 0x72be1baf, "set_capacity_and_notify" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "62C2C79AD3D64FE6AE936A1");
