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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0x104c672, "kernel_write" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0x8f2703b7, "wbinvd_on_all_cpus" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x677eba74, "pci_disable_msix" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x62eb8a7e, "filp_close" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x7b10176c, "dma_async_tx_descriptor_init" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6a8e97b8, "vfs_fsync" },
	{ 0x1fa1d95c, "sha256_zero_message_hash" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1a572bf1, "dma_async_device_register" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf752e98c, "acpi_match_device" },
	{ 0x574e440e, "dmaengine_unmap_put" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0x29152bb6, "kernel_read" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xa164df89, "misc_register" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf1b884ea, "devm_get_free_pages" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x89e4046, "devm_kfree" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0xadff6b87, "device_get_dma_attr" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x30a492d7, "dma_run_dependencies" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1d0d3a05, "pci_select_bars" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0x21075824, "__free_pages" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x9ee5e79e, "pci_enable_msix_range" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x946dd559, "sha224_zero_message_hash" },
	{ 0x7b5a4926, "sha1_zero_message_hash" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0x7523e0c4, "devm_free_pages" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x617b026c, "hwrng_register" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xd64bbf87, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0xe07b4f38, "dma_async_device_unregister" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x4c681602, "firmware_request_nowarn" },
	{ 0xd57fbd31, "hwrng_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x3ec726dd, "dma_pool_create" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xe4ec892b, "devm_platform_ioremap_resource" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x388d81e8, "filp_open" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d00001537sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001456sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001468sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001486sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000015DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001649sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000014CAsv*sd*bc*sc*i*");
MODULE_ALIAS("acpi*:AMDI0C00:*");

MODULE_INFO(srcversion, "C5881EF38BF3E3BF20737C6");
