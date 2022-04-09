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
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x87f867b6, "mei_irq_write_handler" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xb1fbcee8, "mei_write_is_idle" },
	{ 0xa6755c31, "mei_device_init" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0x723a5336, "__tracepoint_mei_pci_cfg_read" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x35431b69, "mei_restart" },
	{ 0x89f7fbff, "mei_irq_compl_handler" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe9c3317a, "__SCK__tp_func_mei_pci_cfg_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa697fccb, "mei_register" },
	{ 0xc0708b35, "mei_stop" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7a39a2b, "mei_irq_read_handler" },
	{ 0x361bdd0b, "mei_cancel_work" },
	{ 0xecfcc8a6, "mei_deregister" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe61f951, "mei_start" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x90a24af4, "mei_fw_status2str" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9cc1af8d, "dev_pm_domain_set" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x14dc7949, "__SCT__tp_func_mei_pci_cfg_read" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mei");

MODULE_ALIAS("pci:v00008086d00000F18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002298sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C97E05124C88E2D651C44B1");
