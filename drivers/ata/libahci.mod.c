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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0xd53865e8, "ata_dummy_port_ops" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5ea58f95, "ata_port_freeze" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xee111615, "param_ops_int" },
	{ 0xc2645fdb, "dev_attr_sw_activity" },
	{ 0x3fc79c4c, "sata_pmp_error_handler" },
	{ 0xa7778ae6, "sata_link_scr_lpm" },
	{ 0x4df0d2e7, "sata_pmp_qc_defer_cmd_switch" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1dd69ef9, "ata_port_desc" },
	{ 0x8004f2c3, "dev_attr_ncq_prio_enable" },
	{ 0x4f110491, "dev_attr_em_message" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xd149ce00, "sata_pmp_port_ops" },
	{ 0x55160d97, "ata_ehi_push_desc" },
	{ 0xdfb7bf50, "ata_port_classify" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x2b628719, "ata_dev_set_feature" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb3387447, "ata_wait_register" },
	{ 0x6453d015, "acpi_storage_d3" },
	{ 0xc3d7094a, "ata_std_qc_defer" },
	{ 0x825f111, "ata_host_start" },
	{ 0x61f4ce7b, "ata_link_abort" },
	{ 0x66d886d7, "dev_attr_unload_heads" },
	{ 0xb206a086, "ata_msleep" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x89e4046, "devm_kfree" },
	{ 0xad9b3442, "ata_ehi_clear_desc" },
	{ 0x5fd9e584, "sata_link_hardreset" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x4317b31c, "ata_host_activate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0x92997ed8, "_printk" },
	{ 0xf5913754, "ata_host_register" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6de20195, "dev_attr_ncq_prio_supported" },
	{ 0x58273510, "dev_attr_em_message_type" },
	{ 0x493b3e3d, "sata_lpm_ignore_phy_events" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfd55c691, "ata_wait_after_reset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x897fa23c, "ata_qc_complete_multiple" },
	{ 0x3c2acfa5, "ata_link_next" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x25931696, "ata_std_postreset" },
	{ 0xd64bbf87, "dmam_alloc_attrs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdc6ee065, "dev_attr_link_power_management_policy" },
	{ 0x87ca1dfa, "ata_port_abort" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x4318731f, "sata_async_notification" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CA28EE32EB0A6BBCE6E6354");
