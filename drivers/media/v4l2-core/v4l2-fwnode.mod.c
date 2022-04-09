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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x16163d75, "v4l2_async_register_subdev" },
	{ 0x79eaaf90, "fwnode_graph_get_remote_port_parent" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0x60d3c4cc, "v4l2_async_subdev_nf_register" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6418866f, "v4l2_async_nf_unregister" },
	{ 0x6647aece, "__v4l2_async_nf_add_subdev" },
	{ 0xbc6de8d9, "fwnode_device_is_available" },
	{ 0x34091051, "fwnode_property_present" },
	{ 0xf7583ed1, "v4l2_async_nf_cleanup" },
	{ 0x5963d5f4, "fwnode_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa8fba1ef, "__v4l2_async_nf_add_fwnode" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x353a2ab4, "is_acpi_data_node" },
	{ 0x60d2f39b, "fwnode_property_read_u64_array" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x510783b9, "fwnode_get_name" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0x759f3b97, "v4l2_async_nf_init" },
	{ 0x485b0aa5, "fwnode_property_read_u32_array" },
	{ 0x4645999d, "fwnode_graph_parse_endpoint" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x6cf7ef63, "fwnode_property_get_reference_args" },
	{ 0x4901bf50, "fwnode_get_next_child_node" },
	{ 0x2df06a40, "fwnode_graph_get_port_parent" },
	{ 0x37a0cba, "kfree" },
	{ 0xc23cd18b, "fwnode_graph_get_next_endpoint" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0x7e98e773, "fwnode_graph_get_remote_endpoint" },
	{ 0xa010ba68, "is_acpi_device_node" },
};

MODULE_INFO(depends, "v4l2-async");


MODULE_INFO(srcversion, "196751B7F22285112739EE1");
