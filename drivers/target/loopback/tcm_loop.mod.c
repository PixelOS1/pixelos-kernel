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
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0xe4824534, "target_unregister_template" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0xca7402b2, "target_register_template" },
	{ 0x7549c36, "driver_register" },
	{ 0x5b7424d5, "bus_register" },
	{ 0xf3d30378, "__root_device_register" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x6063c97e, "core_tpg_deregister" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xddb0d119, "target_remove_session" },
	{ 0x3b6b5425, "target_setup_session" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xa916b694, "strnlen" },
	{ 0x907a06f4, "root_device_unregister" },
	{ 0xbb6269b0, "bus_unregister" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xbf022713, "scsi_add_device" },
	{ 0x3d80fde7, "transport_generic_free_cmd" },
	{ 0xb372cdf0, "target_execute_cmd" },
	{ 0xa6257a2f, "complete" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x40b38a0f, "scmd_printk" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xccad7d3b, "target_queue_submission" },
	{ 0x98a3ba1c, "target_submit_prep" },
	{ 0x683a00d6, "target_init_cmd" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x4dc1c329, "target_put_sess_cmd" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9aea1f81, "target_submit_tmr" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xdaf02d94, "device_register" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x754d539c, "strlen" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x776c87fd, "device_unregister" },
	{ 0xea83187f, "core_tpg_register" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0x66e829a5, "scsi_remove_device" },
	{ 0x44a86bca, "scsi_device_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x845d2494, "core_allocate_nexus_loss_ua" },
	{ 0x5a921311, "strncmp" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "C75FD9D7A6F7FBCE1C814A0");
