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
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0x10824778, "rdma_user_mmap_entry_put" },
	{ 0xe0b7b8ff, "ib_set_device_ops" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0x5b3e282f, "xa_store" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2ba917f5, "ibdev_err" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb0f7859d, "ib_umem_dmabuf_get_pinned" },
	{ 0x745a981, "xa_erase" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb8ba76e4, "rdma_user_mmap_io" },
	{ 0x2b283c36, "ib_dealloc_device" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xff50aee, "ibdev_info" },
	{ 0x4925daa7, "ib_query_port" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4845be4e, "ib_umem_get" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x6626afca, "down" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x89e4046, "devm_kfree" },
	{ 0x199c4833, "__irq_apply_affinity_hint" },
	{ 0xf03ea1a1, "vm_insert_page" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6991febb, "rdma_user_mmap_entry_remove" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1d0d3a05, "pci_select_bars" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x93d2be24, "rdma_user_mmap_entry_get" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d6e31a2, "ib_register_device" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1bfe4e87, "rdma_user_mmap_entry_insert" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb6d49b28, "ib_unregister_device" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x86f86292, "_ib_alloc_device" },
	{ 0xd3354a6, "rdma_alloc_hw_stats_struct" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e7528da, "__rdma_block_iter_next" },
	{ 0x69acdf38, "memcpy" },
	{ 0x729c708b, "__dynamic_ibdev_dbg" },
	{ 0xcfbd5b44, "ib_umem_find_best_pgsz" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0xcf2a6966, "up" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x73baf9a2, "ib_modify_qp_is_ok" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x40fdc30, "devm_iounmap" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd5c12924, "vmalloc_to_page" },
	{ 0xb3088b32, "pci_enable_device_mem" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xe0aef0a6, "pci_release_selected_regions" },
	{ 0xe0cce0fe, "pci_request_selected_regions" },
	{ 0xd5e67c02, "pci_msix_vec_count" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1b037462, "__rdma_block_iter_start" },
	{ 0xaab4ecdb, "ib_umem_release" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "ib_core,ib_uverbs");

MODULE_ALIAS("pci:v00001D0Fd0000EFA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd0000EFA1sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A5478D06C80BD47DD358590");
