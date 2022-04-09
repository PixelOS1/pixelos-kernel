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
	{ 0x38e46431, "mempool_exit" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2c76e3ba, "bio_devname" },
	{ 0x2dbb7d32, "md_check_recovery" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa7632fdb, "unregister_md_personality" },
	{ 0xdbccfa09, "md_register_thread" },
	{ 0x6665d5b9, "bio_init" },
	{ 0x548e30c7, "md_flush_request" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8a798721, "disk_stack_limits" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x838c1975, "submit_bio_noacct" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x907c470c, "md_integrity_add_rdev" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd1f93394, "bio_endio" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x9baa8b92, "bdevname" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8972abc3, "md_set_array_sectors" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x8b3fd4b4, "md_wakeup_thread" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xa0d669e7, "__bio_clone_fast" },
	{ 0x9dfb3d6, "md_error" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x221401b7, "md_check_no_bitmap" },
	{ 0x4e01e28f, "md_integrity_register" },
	{ 0x6ee26f4f, "register_md_personality" },
	{ 0x5d2b0351, "bio_associate_blkg" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "AFB0031C66AED29237681D0");
