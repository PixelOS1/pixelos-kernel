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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xdfdd7043, "iio_dma_buffer_enable" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x26b145d6, "iio_dma_buffer_init" },
	{ 0x53c4907, "iio_dma_buffer_disable" },
	{ 0x5edbcd8e, "iio_dma_buffer_set_bytes_per_datum" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbd697861, "dma_request_chan" },
	{ 0x4f2cb3c3, "iio_dma_buffer_set_length" },
	{ 0x45a26d94, "iio_dma_buffer_release" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa862bdbb, "iio_dma_buffer_request_update" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xdc19de19, "iio_device_attach_buffer" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x45f45b36, "iio_dma_buffer_block_done" },
	{ 0x63263cec, "iio_dma_buffer_block_list_abort" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x236611aa, "dma_get_slave_caps" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xaf817675, "iio_dma_buffer_read" },
	{ 0xc785f106, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4a23ec8, "iio_dma_buffer_exit" },
	{ 0xdb7c61c5, "iio_buffer_put" },
	{ 0x89532b7d, "iio_dma_buffer_data_available" },
};

MODULE_INFO(depends, "industrialio-buffer-dma,industrialio");


MODULE_INFO(srcversion, "E3A9032466375E8BA2AF296");
