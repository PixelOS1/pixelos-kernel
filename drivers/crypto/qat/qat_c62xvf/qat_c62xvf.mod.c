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
	{ 0xa24f23d8, "__request_module" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x1f7f91e1, "adf_gen2_init_vf_pfvf_ops" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x144e315f, "adf_dev_init" },
	{ 0xf88d1f08, "adf_vf_isr_resource_free" },
	{ 0xe80722fa, "adf_devmgr_update_class_index" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x24b24697, "adf_flush_vf_wq" },
	{ 0xfa45e37c, "adf_dev_stop" },
	{ 0xfc3fcf50, "adf_devmgr_rm_dev" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x44e67ffc, "adf_dev_shutdown" },
	{ 0x39b975fd, "adf_cfg_dev_add" },
	{ 0x5308d26b, "adf_vf2pf_notify_init" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x2c991cd5, "adf_cfg_dev_remove" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x34bfe62a, "adf_devmgr_add_dev" },
	{ 0x1d0d3a05, "pci_select_bars" },
	{ 0x7fde4ef0, "kmem_cache_alloc_node_trace" },
	{ 0x6478448e, "adf_dev_start" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc3b167a, "adf_clean_vf_map" },
	{ 0x7a622ea4, "adf_vf2pf_notify_shutdown" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x35948b1f, "adf_devmgr_pci_to_accel_dev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x607013d5, "pci_iomap" },
	{ 0xc1125db9, "adf_vf_isr_resource_alloc" },
	{ 0xd64519f1, "adf_gen2_init_hw_csr_ops" },
	{ 0xa5008494, "pci_enable_device" },
};

MODULE_INFO(depends, "intel_qat");

MODULE_ALIAS("pci:v00008086d000037C9sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5AD0F5DE2B388C7ADB7ED68");
