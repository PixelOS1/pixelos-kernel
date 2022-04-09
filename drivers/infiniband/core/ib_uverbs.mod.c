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
	{ 0xea778fab, "sg_pcopy_to_buffer" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xacb32f2d, "cdev_init" },
	{ 0x59ceb925, "put_pid" },
	{ 0x2f57f48e, "ib_destroy_wq_user" },
	{ 0xcc5d22d9, "can_do_mlock" },
	{ 0x53b954a2, "up_read" },
	{ 0x12df4493, "rdma_umap_priv_init" },
	{ 0xb227b9ca, "ib_attach_mcast" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x68574d69, "rdma_restrack_put" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe7d0ef87, "get_task_pid" },
	{ 0x6674daf1, "rdma_query_gid_table" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xd2e8445, "rdma_restrack_new" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x6f8d407f, "rdma_port_get_link_layer" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0xa05726b4, "rdma_get_gid_attr" },
	{ 0xf6f7fd3a, "ib_dealloc_pd_user" },
	{ 0x4c24ac8c, "ib_open_qp" },
	{ 0xc40956ec, "mmu_interval_notifier_insert" },
	{ 0xa0a0cb18, "stream_open" },
	{ 0x3e41032d, "dma_buf_detach" },
	{ 0xca3cdf75, "ib_dealloc_xrcd_user" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x6b9d4237, "rdma_set_cq_moderation" },
	{ 0xcfb17d1b, "__srcu_read_unlock" },
	{ 0x5b3e282f, "xa_store" },
	{ 0x25428646, "ib_alloc_xrcd_user" },
	{ 0x84d47ae9, "__mmap_lock_do_trace_released" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbb0e6fc, "__tracepoint_mmap_lock_start_locking" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x27e2f863, "dma_map_sgtable" },
	{ 0x72b37550, "mmput" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xcd3e5f93, "ib_dma_virt_map_sg" },
	{ 0x1c06d09e, "igrab" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x66c5a4b5, "ib_rdmacg_uncharge" },
	{ 0x3136913f, "__mmap_lock_do_trace_start_locking" },
	{ 0x745a981, "xa_erase" },
	{ 0xa64c3892, "set_page_dirty" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa0ebc08, "__xa_cmpxchg" },
	{ 0x7fb6d16, "rdma_restrack_del" },
	{ 0x6230172c, "__mmdrop" },
	{ 0x668b19a1, "down_read" },
	{ 0x52047082, "ib_destroy_cq_user" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x6aa13255, "dma_buf_pin" },
	{ 0xf5461416, "rdma_destroy_ah_user" },
	{ 0x5d6c6cec, "rdma_create_user_ah" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb794833f, "rdma_restrack_set_name" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xfb578fc5, "memset" },
	{ 0xfba04b08, "ib_destroy_qp_user" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe8aa5306, "cleanup_srcu_struct" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0xffb7c514, "ida_free" },
	{ 0x10958611, "dma_buf_put" },
	{ 0xc7851b78, "ib_qp_usecnt_inc" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x7dd49bd0, "fasync_helper" },
	{ 0x203aaa7d, "ww_mutex_lock" },
	{ 0x7d11271e, "nla_put" },
	{ 0x810bef7e, "sg_free_append_table" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4925daa7, "ib_query_port" },
	{ 0x53425a69, "dma_buf_get" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x138d06cc, "init_on_alloc" },
	{ 0x32f0f57c, "rdma_put_gid_attr" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x28d87421, "__srcu_read_lock" },
	{ 0x2c541e7b, "radix_tree_next_chunk" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xfff7ae26, "dma_buf_unmap_attachment" },
	{ 0xce807a25, "up_write" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xc5067ebf, "ib_set_client_data" },
	{ 0xf0785fc6, "fput" },
	{ 0xe167dc3d, "init_srcu_struct" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0x1a9ba1, "__task_pid_nr_ns" },
	{ 0x6a4f623b, "mmu_notifier_synchronize" },
	{ 0x8f933fb0, "ib_create_srq_user" },
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd1a7a58, "ib_register_client" },
	{ 0xdfbcf889, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa1aa83c6, "ib_unregister_event_handler" },
	{ 0x21075824, "__free_pages" },
	{ 0xa546efce, "dma_buf_map_attachment" },
	{ 0x3bd15d28, "ib_detach_mcast" },
	{ 0xd04820ea, "ib_register_event_handler" },
	{ 0xb42a4e59, "ib_modify_qp_with_udata" },
	{ 0x41efdeaf, "radix_tree_lookup_slot" },
	{ 0x761527a1, "put_device" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1b779870, "rdma_restrack_add" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x1fdba44b, "cdev_device_add" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5ace8674, "hmm_range_fault" },
	{ 0x5bd92059, "rdma_read_gid_attr_ndev_rcu" },
	{ 0x88445a61, "ib_destroy_srq_user" },
	{ 0x6dc35b25, "radix_tree_iter_delete" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8592de4, "class_create_file_ns" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0x23dacb4f, "dma_buf_dynamic_attach" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3e7f32c3, "__tracepoint_mmap_lock_released" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x6d343dff, "ib_query_qp" },
	{ 0x16e6d67f, "get_device" },
	{ 0x6a4c3f75, "rdma_dev_access_netns" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x14c8dfb3, "synchronize_srcu" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x79cc1590, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xdb105065, "ib_dereg_mr_user" },
	{ 0xbf8e87c0, "zap_vma_ptes" },
	{ 0x1e21fd3f, "dma_buf_unpin" },
	{ 0xb732c3f4, "iput" },
	{ 0xf23fb169, "unpin_user_page_range_dirty_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xb5a64262, "sg_alloc_append_table_from_pages" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1c4150c0, "fd_install" },
	{ 0x7fb1a0a3, "ib_rdmacg_try_charge" },
	{ 0x729c708b, "__dynamic_ibdev_dbg" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0x8d1571d4, "ww_mutex_unlock" },
	{ 0x6e85579c, "ib_query_srq" },
	{ 0xf8af7c22, "__put_task_struct" },
	{ 0x6f3b0bf5, "fget" },
	{ 0xe4d7f2a7, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x4195254f, "class_destroy" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x76abb595, "kill_fasync" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x355386c1, "get_pid_task" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x60805a2, "cdev_device_del" },
	{ 0x98d9e779, "ib_create_qp_user" },
	{ 0xb2d2f1c4, "mmu_interval_read_begin" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xa6257a2f, "complete" },
	{ 0x3baa377, "ibdev_warn" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0x1aafecfe, "__class_create" },
	{ 0xd174fd2a, "unpin_user_pages_dirty_lock" },
	{ 0x4d7dd3c0, "show_class_attr_string" },
	{ 0xc906ef7d, "ib_unregister_client" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xd8cef6e1, "clear_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6f5445fe, "anon_inode_getfile" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xb570d09d, "mmu_interval_notifier_remove" },
	{ 0xf562eb58, "pin_user_pages_fast" },
};

MODULE_INFO(depends, "ib_core");


MODULE_INFO(srcversion, "F9F0B793EAB1D2BC40CBDD4");