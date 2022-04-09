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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x5a9b22b7, "mfd_remove_devices" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x87b8798d, "sg_next" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x826d3243, "pcie_capability_clear_and_set_word" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xb19b445, "ioread8" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xde80cd09, "ioremap" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x5d9dfb8d, "mfd_add_devices" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x954f099c, "idr_preload" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x232b032c, "device_wakeup_disable" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc4fd1679, "pci_intx" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xa6257a2f, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xb24a808, "pci_find_ext_capability" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x358bd703, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mfd-core");

MODULE_ALIAS("pci:v000010ECd00005209sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005229sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005289sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005227sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd0000522Asv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005249sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005287sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005286sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd0000524Asv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd0000525Asv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005260sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005261sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005228sv*sd*bcFFsc*i*");

MODULE_INFO(srcversion, "0E606EEDEBC35C04063DB44");
