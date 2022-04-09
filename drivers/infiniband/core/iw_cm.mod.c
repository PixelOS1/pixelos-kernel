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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xbdc2c2d4, "rdma_nl_register" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x710a50a8, "rdma_nl_unicast_wait" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xefb054fd, "ib_modify_qp" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2b714fb3, "ibnl_put_attr" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6626afca, "down" },
	{ 0xf88cf3ce, "init_net" },
	{ 0xbdf2ad09, "rdma_nl_multicast" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x75a729a0, "rdma_nl_unregister" },
	{ 0x4ce389c6, "rdma_nl_unicast" },
	{ 0xa916b694, "strnlen" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcf2a6966, "up" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x431ec3a9, "__nla_validate" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x5a1fdf3a, "register_net_sysctl" },
	{ 0xb9284581, "ibnl_put_msg" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x92e683f5, "down_timeout" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "ib_core");


MODULE_INFO(srcversion, "E6431BE865543FAE3A48A71");
