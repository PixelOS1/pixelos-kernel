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
	{ 0xee111615, "param_ops_int" },
	{ 0xcc6a8e11, "unregister_qdisc" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xda59b65, "free_netdev" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xfb5b75a3, "register_qdisc" },
	{ 0xa916b694, "strnlen" },
	{ 0x133536b8, "register_netdev" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x1ea9df4b, "__neigh_event_send" },
	{ 0x8ef0abf1, "neigh_destroy" },
	{ 0xb05876f7, "__neigh_create" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x28b7b84a, "softnet_data" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf6764891, "neigh_lookup" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa4b13ca9, "noop_qdisc" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc4c6b4c2, "qdisc_reset" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A1428F5793E742EBA1F76FB");
