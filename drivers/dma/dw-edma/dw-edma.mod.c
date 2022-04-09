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
	{ 0x67606192, "vchan_tx_submit" },
	{ 0x2942ba18, "vchan_find_desc" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x87b8798d, "sg_next" },
	{ 0x7b10176c, "dma_async_tx_descriptor_init" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1a572bf1, "dma_async_device_register" },
	{ 0x6604ef93, "debugfs_create_u32" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe1ff6bb2, "get_cached_msi_msg" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x1706ea84, "vchan_tx_desc_free" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0xe283cb34, "simple_attr_release" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7ac90ced, "debugfs_create_file_unsafe" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6d5cd7ee, "debugfs_attr_read" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x7e51de59, "debugfs_create_u16" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe07b4f38, "dma_async_device_unregister" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x246cd242, "debugfs_attr_write" },
	{ 0x45db6081, "simple_attr_open" },
	{ 0x4fd00e92, "vchan_init" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "482C2E58E812F93DFEDA2BA");
