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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5b7424d5, "bus_register" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7549c36, "driver_register" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xee111615, "param_ops_int" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x3f4fc704, "input_alloc_absinfo" },
	{ 0x83af720c, "irq_create_mapping_affinity" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbade6d7, "serio_interrupt" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x331337dc, "input_event" },
	{ 0x70819b25, "serio_unregister_port" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x56c97f17, "__irq_domain_add" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x854dcea, "__irq_resolve_mapping" },
	{ 0x339c0a66, "device_del" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x9166fada, "strncpy" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0xf5c5e04e, "device_add" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x89e4046, "devm_kfree" },
	{ 0xbb6269b0, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xf8049ecb, "handle_simple_irq" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x761527a1, "put_device" },
	{ 0x1730f2e8, "irq_set_chip_and_handler_name" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x17b8f4ae, "irq_domain_simple_ops" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xb90213cd, "__serio_register_port" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0x96848186, "scnprintf" },
	{ 0x1564421, "request_firmware" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xfbafd50b, "irq_domain_remove" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x8f048bb0, "input_mt_sync_frame" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xb670b8a1, "input_mt_assign_slots" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "52BF3E288E13AB9B557E0FE");
