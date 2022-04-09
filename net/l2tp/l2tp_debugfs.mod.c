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
	{ 0x94216657, "seq_read" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x92997ed8, "_printk" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x7322ba5d, "l2tp_tunnel_get_nth" },
	{ 0xb6a8e1e, "l2tp_session_get_nth" },
	{ 0x7da295e7, "seq_release" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x928aab17, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0xa6b9a850, "seq_open" },
	{ 0x1937dfc0, "get_net_ns_by_pid" },
	{ 0xc23477d, "current_task" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x124103e, "l2tp_tunnel_dec_refcount" },
	{ 0x93371093, "l2tp_session_dec_refcount" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd349d253, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "D8960888293A9B574037A9F");
