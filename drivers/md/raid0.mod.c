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
	{ 0x999ab985, "__SCK__tp_func_block_bio_remap" },
	{ 0xee111615, "param_ops_int" },
	{ 0xa7632fdb, "unregister_md_personality" },
	{ 0x6ee26f4f, "register_md_personality" },
	{ 0x3b689112, "blk_queue_flag_clear" },
	{ 0x4e01e28f, "md_integrity_register" },
	{ 0x8972abc3, "md_set_array_sectors" },
	{ 0x4d31f48f, "blk_queue_flag_set" },
	{ 0x8a798721, "disk_stack_limits" },
	{ 0x2aeb7b56, "blk_queue_io_opt" },
	{ 0x132ff49c, "blk_queue_io_min" },
	{ 0x9a00dbc1, "blk_queue_max_discard_sectors" },
	{ 0x2518bd26, "blk_queue_max_write_zeroes_sectors" },
	{ 0x77ef331e, "blk_queue_max_write_same_sectors" },
	{ 0x7f1218d3, "blk_queue_max_hw_sectors" },
	{ 0xcdeb611a, "acct_bioset_init" },
	{ 0x221401b7, "md_check_no_bitmap" },
	{ 0x8ab62dfb, "acct_bioset_exit" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x28fffd62, "md_submit_discard_bio" },
	{ 0x548e30c7, "md_flush_request" },
	{ 0x273aff5c, "__SCT__tp_func_block_bio_remap" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd67f06ef, "__tracepoint_block_bio_remap" },
	{ 0x5d2b0351, "bio_associate_blkg" },
	{ 0x838c1975, "submit_bio_noacct" },
	{ 0xe7c145d, "bio_chain" },
	{ 0xb45d60, "bio_split" },
	{ 0xd1f93394, "bio_endio" },
	{ 0x5f5b4287, "md_account_bio" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9baa8b92, "bdevname" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "47C7E9CA5EBE9AB16760E33");
