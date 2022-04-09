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
	{ 0x38e46431, "mempool_exit" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x999e8297, "vfree" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x6626afca, "down" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xcf2a6966, "up" },
	{ 0xd12cbd08, "dm_dirty_log_destroy" },
};

MODULE_INFO(depends, "dm-log");


MODULE_INFO(srcversion, "372EA7B955B30888C2CCE52");
