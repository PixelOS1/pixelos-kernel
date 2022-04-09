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
	{ 0xa8acb2ea, "sbc_get_device_type" },
	{ 0x622f0de0, "target_backend_unregister" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0x907a06f4, "root_device_unregister" },
	{ 0xe8edfbf3, "genl_unregister_family" },
	{ 0x1abe28c, "transport_backend_register" },
	{ 0xd63f53c9, "passthrough_pr_attrib_attrs" },
	{ 0x32eec0b, "passthrough_attrib_attrs" },
	{ 0xfefa012f, "genl_register_family" },
	{ 0xf3d30378, "__root_device_register" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0x1c4ced47, "unmap_mapping_range" },
	{ 0x9ae47436, "_find_last_bit" },
	{ 0x64d3cc4e, "xas_load" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4b5678a5, "transport_copy_sense_to_cmd" },
	{ 0x4b18f96f, "target_complete_cmd_with_length" },
	{ 0x745a981, "xa_erase" },
	{ 0x326109d0, "target_complete_cmd" },
	{ 0xfb578fc5, "memset" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x87b1f008, "uio_unregister_device" },
	{ 0x95a957ca, "__uio_register_device" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x999e8297, "vfree" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7d11271e, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0xfc10662e, "genlmsg_put" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xa6257a2f, "complete" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0x4e3567f7, "match_int" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xa78c92d7, "sg_miter_stop" },
	{ 0xfd1d5018, "sg_miter_next" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xc23477d, "current_task" },
	{ 0x23906fc1, "sg_miter_start" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x42de68c3, "genlmsg_multicast_allns" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x5b3e282f, "xa_store" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8a240bff, "__xas_next" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x7429e20c, "kstrtos8" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xd5c12924, "vmalloc_to_page" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x21075824, "__free_pages" },
	{ 0x75f0e875, "xas_store" },
	{ 0xde09a94d, "xas_find" },
	{ 0xa17916bd, "passthrough_parse_cdb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x5d83c994, "uio_event_notify" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod,uio");


MODULE_INFO(srcversion, "E10BFC35681ADCE834DE57D");
