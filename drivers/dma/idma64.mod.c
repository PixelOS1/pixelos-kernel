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
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x1a572bf1, "dma_async_device_register" },
	{ 0x4fd00e92, "vchan_init" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xee09ed35, "devm_ioremap_resource" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3ec726dd, "dma_pool_create" },
	{ 0x1706ea84, "vchan_tx_desc_free" },
	{ 0x67606192, "vchan_tx_submit" },
	{ 0x7b10176c, "dma_async_tx_descriptor_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2942ba18, "vchan_find_desc" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa979f75b, "vchan_dma_desc_free_list" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xcbb3c845, "devm_free_irq" },
	{ 0xe07b4f38, "dma_async_device_unregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EB2F558E81F47291E9B906B");
