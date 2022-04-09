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
	{ 0xe0b7b8ff, "ib_set_device_ops" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x744cc79f, "ib_device_put" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xaffb0b75, "ib_get_eth_speed" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xe5406b09, "bnxt_ulp_probe" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x94bfce58, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2ba917f5, "ibdev_err" },
	{ 0xe2e1d20f, "pci_dev_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf617dd4c, "ib_unregister_device_queued" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xff50aee, "ibdev_info" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4845be4e, "ib_umem_get" },
	{ 0x71a330d6, "ib_device_set_netdev" },
	{ 0xc7570c6b, "dcb_ieee_getapp_mask" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcfbc053b, "ib_unregister_driver" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6b958320, "ib_ud_ip4_csum" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x199c4833, "__irq_apply_affinity_hint" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb7852a05, "ib_ud_header_init" },
	{ 0x47b47c05, "vlan_dev_real_dev" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0xf0506269, "ib_dispatch_event" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x41ce123c, "ib_device_get_by_netdev" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x761527a1, "put_device" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d6e31a2, "ib_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb6d49b28, "ib_unregister_device" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x86f86292, "_ib_alloc_device" },
	{ 0xd3354a6, "rdma_alloc_hw_stats_struct" },
	{ 0x16e6d67f, "get_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e7528da, "__rdma_block_iter_next" },
	{ 0x965bfe42, "ib_sg_to_pages" },
	{ 0x4faa9e16, "remap_pfn_range" },
	{ 0x69acdf38, "memcpy" },
	{ 0x729c708b, "__dynamic_ibdev_dbg" },
	{ 0xcfbd5b44, "ib_umem_find_best_pgsz" },
	{ 0xedc03953, "iounmap" },
	{ 0x73baf9a2, "ib_modify_qp_is_ok" },
	{ 0x6607cbfa, "rdma_read_gid_hw_context" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe9e799fc, "ib_ud_header_pack" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0x28f094d7, "rdma_read_gid_l2_fields" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x86f15040, "pci_enable_atomic_ops_to_root" },
	{ 0x3baa377, "ibdev_warn" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1b037462, "__rdma_block_iter_start" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xaab4ecdb, "ib_umem_release" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x358bd703, "pcie_capability_read_word" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "ib_core,bnxt_en,ib_uverbs");


MODULE_INFO(srcversion, "EC714D87DE1F453C1ABB5C8");
