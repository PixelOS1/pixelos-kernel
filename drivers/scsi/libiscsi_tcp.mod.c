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
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xad906959, "skb_seq_read" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xee111615, "param_ops_int" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xa8c4b5e1, "__SCT__tp_func_iscsi_dbg_tcp" },
	{ 0xae6be20c, "crypto_stats_ahash_update" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x87b8798d, "sg_next" },
	{ 0x4d37bb6c, "iscsi_requeue_task" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3bef2f73, "iscsi_pool_init" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x32b80943, "crypto_ahash_final" },
	{ 0x96aae811, "iscsi_itt_to_ctask" },
	{ 0x23b70b9d, "crypto_ahash_digest" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x24a21d24, "skb_abort_seq_read" },
	{ 0xc23477d, "current_task" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8596fc5a, "skb_prepare_seq_read" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x59c22414, "__SCK__tp_func_iscsi_dbg_tcp" },
	{ 0x6dfe92d8, "iscsi_conn_teardown" },
	{ 0xac383bbc, "iscsi_put_task" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2099395b, "__iscsi_get_task" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x92327444, "iscsi_prep_data_out_pdu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x208dd77a, "iscsi_complete_pdu" },
	{ 0x78eafc1a, "iscsi_conn_failure" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x69acdf38, "memcpy" },
	{ 0x29387061, "iscsi_dbg_trace" },
	{ 0xce24a34a, "__iscsi_complete_pdu" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xb6f1d859, "crypto_stats_get" },
	{ 0x5324b866, "__tracepoint_iscsi_dbg_tcp" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x8d303b1b, "iscsi_pool_free" },
	{ 0x32d0f4f2, "iscsi_verify_itt" },
	{ 0xd26202c3, "iscsi_conn_setup" },
	{ 0xd34c73ae, "iscsi_update_cmdsn" },
};

MODULE_INFO(depends, "scsi_transport_iscsi,libiscsi");


MODULE_INFO(srcversion, "2209DF55AF1186A3403B08E");
