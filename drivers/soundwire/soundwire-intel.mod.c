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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x9d9b8927, "sdw_compute_params" },
	{ 0x6cf2c320, "sdw_master_read_prop" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0xe4345174, "single_open" },
	{ 0x34712074, "sdw_cdns_irq" },
	{ 0xee111615, "param_ops_int" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x22ed6971, "sdw_cdns_check_self_clearing_bits" },
	{ 0x3bdbf38f, "__auxiliary_driver_register" },
	{ 0x9b02585d, "single_release" },
	{ 0x37c32427, "sdw_bus_master_delete" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0xdc966f00, "acpi_bus_get_device" },
	{ 0xd349d253, "seq_printf" },
	{ 0xb7164eab, "sdw_cdns_probe" },
	{ 0x1598fb9d, "device_get_named_child_node" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x43f35120, "sdw_stream_add_master" },
	{ 0x5e089f52, "snd_soc_register_component" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x94216657, "seq_read" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0x339c0a66, "device_del" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe75568c5, "cdns_xfer_msg" },
	{ 0x316544d9, "cdns_xfer_msg_defer" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf69e6ad1, "sdw_cdns_clock_stop" },
	{ 0xc8bd5a83, "sdw_cdns_alloc_pdi" },
	{ 0x27f5d7e8, "__auxiliary_device_add" },
	{ 0xe283cb34, "simple_attr_release" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x8d52a17f, "sdw_cdns_exit_reset" },
	{ 0x76dda3d6, "snd_soc_unregister_component" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x129125da, "sdw_stream_remove_master" },
	{ 0x6d5cd7ee, "debugfs_attr_read" },
	{ 0xbc731bbe, "sdw_clear_slave_status" },
	{ 0xeb6eb87, "add_taint" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x485b0aa5, "fwnode_property_read_u32_array" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0x96e623d5, "cdns_set_sdw_stream" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf5e452f7, "cdns_bus_conf" },
	{ 0xebc94807, "auxiliary_driver_unregister" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe4121ce1, "sdw_cdns_config_stream" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xbd508a26, "device_for_each_child" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0xfdf3ef5a, "sdw_cdns_is_clock_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0xc5edb9d8, "sdw_cdns_enable_interrupt" },
	{ 0x48fdc50, "sdw_bus_master_add" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x865e063a, "sdw_cdns_debugfs_init" },
	{ 0xe8d813fd, "sdw_cdns_clock_restart" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x56fbade5, "sdw_cdns_init" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xdcad3ced, "auxiliary_device_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x246cd242, "debugfs_attr_write" },
	{ 0xd2db1200, "cdns_reset_page_addr" },
	{ 0x45db6081, "simple_attr_open" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xb3b170a, "sdw_cdns_pdi_init" },
};

MODULE_INFO(depends, "snd-pcm,soundwire-generic-allocation,soundwire-bus,soundwire-cadence,snd-soc-core");

MODULE_ALIAS("auxiliary:soundwire_intel.link");

MODULE_INFO(srcversion, "E82EC739F1FAFE7CC49F3CD");
