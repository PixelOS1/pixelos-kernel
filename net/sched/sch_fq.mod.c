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
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0xfb5b75a3, "register_qdisc" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0xf79e697b, "qdisc_watchdog_init_clockid" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xbf3d7563, "qdisc_tree_reduce_backlog" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xfb578fc5, "memset" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc19a048f, "gnet_stats_copy_app" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb2cdf8b9, "qdisc_watchdog_cancel" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x948fe946, "rtnl_kfree_skbs" },
	{ 0xca9360b5, "rb_next" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x71c43c8c, "qdisc_watchdog_schedule_range_ns" },
	{ 0xece784c2, "rb_first" },
	{ 0x97e0da2a, "kmem_cache_free_bulk" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x678735a9, "__skb_get_hash" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x7d11271e, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2E6AFCCB9668295DDAC4660");
