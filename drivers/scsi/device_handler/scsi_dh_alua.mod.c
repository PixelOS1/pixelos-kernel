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
	{ 0x73fec674, "param_ops_uint" },
	{ 0x9e12f048, "scsi_unregister_device_handler" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x81cbb87f, "scsi_register_device_handler" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x92997ed8, "_printk" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x5012a70, "pv_ops" },
	{ 0xd901397a, "scsi_print_sense_hdr" },
	{ 0x3ad8c1a2, "scsi_test_unit_ready" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9f37056, "__scsi_execute" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5a921311, "strncmp" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe2f99028, "scsi_vpd_lun_id" },
	{ 0x2f9662b, "scsi_vpd_tpg_id" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x5ac4b094, "scsi_device_get" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x37a0cba, "kfree" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4BDBC4D3870E1EA64F51A22");
