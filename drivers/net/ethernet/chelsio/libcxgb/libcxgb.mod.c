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
	{ 0x28674aa3, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x999e8297, "vfree" },
	{ 0x8ef0abf1, "neigh_destroy" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x7ec60e66, "ip6_route_output_flags" },
	{ 0xd485a00a, "make_kuid" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8A24EC22954412E02A34F1F");
