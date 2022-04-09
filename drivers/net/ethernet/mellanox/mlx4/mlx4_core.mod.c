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
	{ 0xe9779ce9, "devlink_port_register" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x53b954a2, "up_read" },
	{ 0xe5855ceb, "pci_enable_sriov" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xee111615, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x754d539c, "strlen" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xc44992ee, "devlink_param_driverinit_value_get" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x677eba74, "pci_disable_msix" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xebb49c23, "pci_disable_sriov" },
	{ 0x6e3347ec, "devlink_priv" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x3b3d2c1e, "pcie_print_link_status" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x23c009f0, "devlink_params_register" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4e53e4c4, "devlink_param_value_changed" },
	{ 0xece784c2, "rb_first" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4166aaa4, "__alloc_pages" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xde80cd09, "ioremap" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6626afca, "down" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x949b5176, "devlink_region_snapshot_create" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xce807a25, "up_write" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x942c9fdc, "devlink_port_unregister" },
	{ 0x199c4833, "__irq_apply_affinity_hint" },
	{ 0xe273d75d, "alloc_cpu_rmap" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0x5f8d3f24, "devlink_param_driverinit_value_set" },
	{ 0xfca7f934, "devlink_region_create" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x7732159c, "free_irq_cpu_rmap" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x2af975fa, "device_create_file" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x21075824, "__free_pages" },
	{ 0x7fde4ef0, "kmem_cache_alloc_node_trace" },
	{ 0x618911fc, "numa_node" },
	{ 0x9ee5e79e, "pci_enable_msix_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x715a43ce, "priv_to_devlink" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xcc795932, "devlink_region_snapshot_id_put" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xf3e6402e, "__bitmap_equal" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x9493fc86, "node_states" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xb34fdfcf, "param_ops_byte" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x44a6e90a, "irq_cpu_rmap_add" },
	{ 0x660eb6bd, "devlink_free" },
	{ 0xc498bdc9, "devlink_register" },
	{ 0xff59ec38, "pci_sriov_get_totalvfs" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x3e4e0a9e, "devlink_alloc_ns" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xd4ba1b3f, "pci_num_vf" },
	{ 0xedc03953, "iounmap" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0xcf2a6966, "up" },
	{ 0xb73e37e3, "devlink_params_unregister" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xca9360b5, "rb_next" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x8ff7ea2f, "devlink_region_snapshot_id_get" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0xa410a295, "devlink_region_destroy" },
	{ 0x3ec726dd, "dma_pool_create" },
	{ 0x946c0028, "devlink_unregister" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x54101891, "pcie_capability_write_word" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xbcbe3339, "devlink_set_features" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000015B3d00006340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000634Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006354sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006732sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000673Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006368sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000675Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006764sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006746sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000676Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D9330E81CDD2EF28572F183");
