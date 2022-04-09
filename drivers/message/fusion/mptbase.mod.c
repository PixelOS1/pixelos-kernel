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
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xccf2840, "param_get_int" },
	{ 0xee111615, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x350e1083, "proc_create_single_data" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x7b49e6f2, "pci_stop_and_remove_bus_device_locked" },
	{ 0x9852f12f, "pci_get_slot" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd349d253, "seq_printf" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6468b1b, "pci_enable_wake" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xf2c82101, "param_set_int" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaec7ed46, "dma_get_required_mask" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3c08c820, "proc_mkdir" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xde80cd09, "ioremap" },
	{ 0xf1e046cc, "panic" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x1d0d3a05, "pci_select_bars" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd46727d8, "pci_choose_state" },
	{ 0xb3088b32, "pci_enable_device_mem" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xe0aef0a6, "pci_release_selected_regions" },
	{ 0xe0cce0fe, "pci_request_selected_regions" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe9a18439, "pci_save_state" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "18C15009FD7A9648C3F0A05");
