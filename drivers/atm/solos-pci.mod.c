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
	{ 0xee111615, "param_ops_int" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x979bd4e8, "atm_charge" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x2cc2d52d, "vcc_hash" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x44c6e633, "vcc_sklist_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x11089ac7, "_ctype" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x5a921311, "strncmp" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc23477d, "current_task" },
	{ 0x754d539c, "strlen" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xcd34d80, "skb_unlink" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0x459f3f88, "skb_push" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x24e48d13, "skb_put" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x7efced49, "atm_dev_signal_change" },
	{ 0x2af975fa, "device_create_file" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x61faf07c, "atm_dev_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x1564421, "request_firmware" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xd1e29523, "atm_dev_deregister" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");

MODULE_ALIAS("pci:v000010EEd00000300sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CF441E45521C3CA05F2A54F");
