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
	{ 0xcc6a8e11, "unregister_qdisc" },
	{ 0xfb5b75a3, "register_qdisc" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xf91c8bc0, "skb_realloc_headroom" },
	{ 0x459f3f88, "skb_push" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x68523297, "sockfd_lookup" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7d11271e, "nla_put" },
	{ 0x6e4ab646, "gnet_stats_copy_queue" },
	{ 0xafa08371, "gnet_stats_copy_basic" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd4a14d02, "__qdisc_calculate_pkt_len" },
	{ 0x5f919f9e, "tcf_classify" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xde8b54f2, "tcf_block_get" },
	{ 0x88aaab04, "qdisc_create_dflt" },
	{ 0x24d0fd15, "pfifo_qdisc_ops" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x866a62b2, "gnet_stats_basic_sync_init" },
	{ 0xa4b13ca9, "noop_qdisc" },
	{ 0xc4c6b4c2, "qdisc_reset" },
	{ 0x92997ed8, "_printk" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0785fc6, "fput" },
	{ 0x70ad0746, "tcf_block_put" },
	{ 0x25bbc683, "qdisc_put" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "34FF6925946ACF0D7FF0576");
