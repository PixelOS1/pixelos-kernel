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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9aeba451, "mlxsw_core_res_valid" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x4b0bae55, "mlxsw_core_kvd_sizes_get" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xaa2e485d, "mlxsw_core_ptp_transmitted" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0x9bb4e317, "ioread32be" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x9ee72ea1, "mlxsw_core_resources_query" },
	{ 0x24cce038, "mlxsw_core_skb_receive" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5cf3dd79, "mlxsw_core_bus_device_unregister" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbb7e9ba4, "mlxsw_core_bus_device_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x484489a4, "mlxsw_cmd_exec" },
	{ 0x8c15c473, "mlxsw_core_res_get" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8854d198, "mlxsw_reg_write" },
};

MODULE_INFO(depends, "mlxsw_core");


MODULE_INFO(srcversion, "138DED5E01D252209374A93");
