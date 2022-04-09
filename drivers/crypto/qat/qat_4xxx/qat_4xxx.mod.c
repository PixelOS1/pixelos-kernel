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
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x49101509, "adf_cfg_section_add" },
	{ 0x81188c30, "match_string" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x144e315f, "adf_dev_init" },
	{ 0xc501ac82, "adf_gen4_init_hw_csr_ops" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xfa45e37c, "adf_dev_stop" },
	{ 0xfc3fcf50, "adf_devmgr_rm_dev" },
	{ 0xe4db0d2d, "adf_init_arb" },
	{ 0xd1180092, "adf_gen4_ring_pair_reset" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x44e67ffc, "adf_dev_shutdown" },
	{ 0x42255ea4, "adf_disable_aer" },
	{ 0x39b975fd, "adf_cfg_dev_add" },
	{ 0x8b310439, "adf_isr_resource_alloc" },
	{ 0xbfebbda3, "adf_gen4_set_ssm_wdtimer" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x2c991cd5, "adf_cfg_dev_remove" },
	{ 0x99272497, "adf_disable_sriov" },
	{ 0x149e1aa6, "pcim_iomap_regions_request_all" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x693d9ef7, "adf_reset_flr" },
	{ 0x73c13901, "adf_isr_resource_free" },
	{ 0xfa15cddc, "adf_cfg_get_param_value" },
	{ 0x34bfe62a, "adf_devmgr_add_dev" },
	{ 0x8510eb35, "adf_gen4_init_pf_pfvf_ops" },
	{ 0x1d0d3a05, "pci_select_bars" },
	{ 0xc2b59967, "adf_cfg_add_key_value_param" },
	{ 0x6478448e, "adf_dev_start" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7638b55, "adf_sriov_configure" },
	{ 0xb5538957, "adf_enable_aer" },
	{ 0xe06eace4, "adf_send_admin_init" },
	{ 0x92997ed8, "_printk" },
	{ 0xd1f7daa5, "adf_init_admin_comms" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x9493fc86, "node_states" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x23d98fca, "adf_err_handler" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x35948b1f, "adf_devmgr_pci_to_accel_dev" },
	{ 0x24488caa, "adf_exit_admin_comms" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x93434ae1, "adf_exit_arb" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xe9a18439, "pci_save_state" },
};

MODULE_INFO(depends, "intel_qat");

MODULE_ALIAS("pci:v00008086d00004940sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6F73273DD2A97A426650F14");
