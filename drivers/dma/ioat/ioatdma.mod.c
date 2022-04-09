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
	{ 0x2ec97348, "kobject_put" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0x73c98c2d, "pci_bus_type" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x38e432b9, "alloc_dca_provider" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x7b10176c, "dma_async_tx_descriptor_init" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb7208e8a, "kobject_del" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5012a70, "pv_ops" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc8a016aa, "param_ops_string" },
	{ 0x1a572bf1, "dma_async_device_register" },
	{ 0x574e440e, "dmaengine_unmap_put" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xa7299ff3, "pci_enable_pcie_error_reporting" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0xa50bcff0, "x86_cpu_to_apicid" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa980d013, "kobject_init_and_add" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeb6eb87, "add_taint" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0x21075824, "__free_pages" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x9ee5e79e, "pci_enable_msix_range" },
	{ 0xcbb3c845, "devm_free_irq" },
	{ 0x4d5f733f, "register_dca_provider" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x4e49e534, "unregister_dca_provider" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x483c84f3, "free_dca_provider" },
	{ 0x3cf47bb0, "pci_disable_pcie_error_reporting" },
	{ 0x37a0cba, "kfree" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe07b4f38, "dma_async_device_unregister" },
	{ 0xb3088b32, "pci_enable_device_mem" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d69151d, "pci_wake_from_d3" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x3ec726dd, "dma_pool_create" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x54101891, "pcie_capability_write_word" },
	{ 0x358bd703, "pcie_capability_read_word" },
	{ 0x8fc9c2fe, "dmam_pool_create" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe9a18439, "pci_save_state" },
};

MODULE_INFO(depends, "dca");

MODULE_ALIAS("pci:v00008086d00003430sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003431sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003432sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003433sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003429sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000342Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000342Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000342Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003710sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003712sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003713sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003714sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003715sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003716sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003717sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003718sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003719sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C51sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C52sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F51sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F52sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000B00sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "37FD6949ECAA8DEAC925631");
