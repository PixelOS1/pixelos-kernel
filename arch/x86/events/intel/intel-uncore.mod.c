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
	{ 0x73c98c2d, "pci_bus_type" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0xc0013398, "__cpuhp_remove_state" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x828e22f4, "hrtimer_forward" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x7bbccd05, "nr_node_ids" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x309945c3, "pci_find_next_ext_capability" },
	{ 0x450110e8, "perf_assign_events" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x6e841389, "cpu_info" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdb16b170, "topology_phys_to_logical_pkg" },
	{ 0x5012a70, "pv_ops" },
	{ 0xb6cb556a, "_find_first_and_bit" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0xece784c2, "rb_first" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xde80cd09, "ioremap" },
	{ 0x6f105db5, "perf_pmu_unregister" },
	{ 0x2901806, "pci_get_domain_bus_and_slot" },
	{ 0x6feabb13, "__cpuhp_setup_state" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x3c427f67, "cpu_die_map" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x1389619c, "__max_die_per_package" },
	{ 0x4a4cc052, "perf_pmu_register" },
	{ 0xb25b2846, "perf_pmu_migrate_context" },
	{ 0x5f56663b, "rdmsrl_on_cpu" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0x1511e6f3, "bus_register_notifier" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x1905849, "pci_find_next_bus" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x39081193, "__max_logical_packages" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x68c4b824, "cpumask_any_but" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0xca9360b5, "rb_next" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xaaea90fd, "bus_unregister_notifier" },
	{ 0xcea381dd, "x86_match_cpu" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod001A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod001E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0025:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0045:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0046:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0047:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0056:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0057:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0085:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0055:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A6:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A5:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A7:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0097:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0086:feature:*");

MODULE_INFO(srcversion, "05F4F1324B754A562D88DC9");
