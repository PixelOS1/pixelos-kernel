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
	{ 0x57bde2bf, "mmc_command_done" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x387dfe48, "mmc_detect_change" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x952dcf27, "mmc_free_host" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x5012a70, "pv_ops" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcc86972e, "regulator_is_supported_voltage" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x4820130b, "device_property_read_u64_array" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x23906fc1, "sg_miter_start" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0xd91e66af, "mmc_can_gpio_cd" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa78c92d7, "sg_miter_stop" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd0a5bcf3, "mmc_can_gpio_ro" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x89e4046, "devm_kfree" },
	{ 0x829ea692, "mmc_gpio_get_ro" },
	{ 0xfd1d5018, "sg_miter_next" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7795c027, "mmc_send_abort_tuning" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x10107c66, "regulator_get_current_limit" },
	{ 0x62ee4b0d, "mmc_gpio_get_cd" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xb721f941, "sdio_signal_irq" },
	{ 0x378246c8, "dma_max_mapping_size" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4ba0426b, "mmc_regulator_set_ocr" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x78075501, "mmc_regulator_set_vqmmc" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x67aeabe5, "mmc_add_host" },
	{ 0xd31491e9, "mmc_alloc_host" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xad5ac320, "mmc_regulator_get_supply" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6e7d67ae, "mmc_remove_host" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0xaa309cf, "synchronize_hardirq" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0xae48d48e, "dma_sync_sg_for_cpu" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0xb1031dd6, "mmc_request_done" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xfe96e022, "mmc_retune_timer_stop" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeff1f3dc, "regulator_enable" },
};

MODULE_INFO(depends, "mmc_core");


MODULE_INFO(srcversion, "4EA4CD4DDE3EEE6F168E537");
