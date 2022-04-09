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
	{ 0x73fec674, "param_ops_uint" },
	{ 0x784a8ff1, "ntb_unregister_client" },
	{ 0x1b035bd1, "__ntb_register_client" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x690330be, "ntb_default_port_number" },
	{ 0xd69f5d64, "ntb_default_peer_port_count" },
	{ 0x40b61ca8, "debugfs_create_atomic_t" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x332dc333, "ntb_link_event" },
	{ 0x6b72dd34, "ntb_set_ctx" },
	{ 0x59432c75, "ntb_default_peer_port_number" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x49dfbff5, "ntb_clear_ctx" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb");


MODULE_INFO(srcversion, "8E61D69C1F94C0C31082466");
