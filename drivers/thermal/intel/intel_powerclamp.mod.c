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
	{ 0xccf2840, "param_get_int" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9b02585d, "single_release" },
	{ 0x94216657, "seq_read" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x25da57db, "thermal_cooling_device_unregister" },
	{ 0xc0013398, "__cpuhp_remove_state" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x4a7a7e28, "thermal_cooling_device_register" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x6feabb13, "__cpuhp_setup_state" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x3546ab7b, "kthread_destroy_worker" },
	{ 0xa8386eb0, "kthread_cancel_delayed_work_sync" },
	{ 0xc500c54e, "kthread_cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x5012a70, "pv_ops" },
	{ 0x2394899, "play_idle_precise" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xd349d253, "seq_printf" },
	{ 0xe4345174, "single_open" },
	{ 0x84069b6b, "kthread_queue_work" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf86f560, "kthread_delayed_work_timer_fn" },
	{ 0xe4dc4fd9, "sched_set_fifo" },
	{ 0xf888261d, "kthread_create_worker_on_cpu" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xd23de6c5, "kthread_queue_delayed_work" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam*mod*:feature:*0083*");

MODULE_INFO(srcversion, "25679FB3B8F4C82C3D87778");
