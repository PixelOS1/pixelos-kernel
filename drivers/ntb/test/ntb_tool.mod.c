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
	{ 0x22749e72, "simple_open" },
	{ 0x784a8ff1, "ntb_unregister_client" },
	{ 0x1b035bd1, "__ntb_register_client" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0x49dfbff5, "ntb_clear_ctx" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xd69f5d64, "ntb_default_peer_port_count" },
	{ 0x6b72dd34, "ntb_set_ctx" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xedc03953, "iounmap" },
	{ 0x59432c75, "ntb_default_peer_port_number" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x690330be, "ntb_default_port_number" },
	{ 0x7d74d522, "kstrtoull_from_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x47cfd825, "kstrtouint_from_user" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb");


MODULE_INFO(srcversion, "28B21AEAE107B31B5DB981B");
