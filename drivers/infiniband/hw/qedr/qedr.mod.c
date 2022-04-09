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
	{ 0x10824778, "rdma_user_mmap_entry_put" },
	{ 0xe0b7b8ff, "ib_set_device_ops" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb4652521, "ipv6_chk_addr" },
	{ 0xa5f2b1f7, "vlan_dev_vlan_id" },
	{ 0x28674aa3, "dst_release" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x8ef0abf1, "neigh_destroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x505682ae, "qede_rdma_unregister_driver" },
	{ 0x745a981, "xa_erase" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x294ec602, "qed_get_rdma_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb8ba76e4, "rdma_user_mmap_io" },
	{ 0x2b283c36, "ib_dealloc_device" },
	{ 0x1ea9df4b, "__neigh_event_send" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4845be4e, "ib_umem_get" },
	{ 0x71a330d6, "ib_device_set_netdev" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf88cf3ce, "init_net" },
	{ 0xe0f60c6d, "rdma_destroy_ah_attr" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb7852a05, "ib_ud_header_init" },
	{ 0xf03ea1a1, "vm_insert_page" },
	{ 0xf0506269, "ib_dispatch_event" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6991febb, "rdma_user_mmap_entry_remove" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3a65c791, "qede_rdma_register_driver" },
	{ 0x93d2be24, "rdma_user_mmap_entry_get" },
	{ 0x7ec60e66, "ip6_route_output_flags" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d6e31a2, "ib_register_device" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x1bfe4e87, "rdma_user_mmap_entry_insert" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xb6d49b28, "ib_unregister_device" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x86f86292, "_ib_alloc_device" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e7528da, "__rdma_block_iter_next" },
	{ 0x965bfe42, "ib_sg_to_pages" },
	{ 0x69acdf38, "memcpy" },
	{ 0x729c708b, "__dynamic_ibdev_dbg" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0x73baf9a2, "ib_modify_qp_is_ok" },
	{ 0x3dce5d9, "__ip_dev_find" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe9e799fc, "ib_ud_header_pack" },
	{ 0x28f094d7, "rdma_read_gid_l2_fields" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x86f15040, "pci_enable_atomic_ops_to_root" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1b037462, "__rdma_block_iter_start" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xaab4ecdb, "ib_umem_release" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb30caa34, "rdma_copy_ah_attr" },
};

MODULE_INFO(depends, "ib_core,qede,qed,ib_uverbs");


MODULE_INFO(srcversion, "A88BEB259F8C25096B4282D");
