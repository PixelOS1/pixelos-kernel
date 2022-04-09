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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x79eaaf90, "fwnode_graph_get_remote_port_parent" },
	{ 0xe4345174, "single_open" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0x9b02585d, "single_release" },
	{ 0xd349d253, "seq_printf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x34091051, "fwnode_property_present" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x94216657, "seq_read" },
	{ 0xe44aecc1, "fwnode_handle_get" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa2d77e1a, "i2c_verify_client" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x644796ad, "v4l2_device_unregister_subdev" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbfcc9a58, "v4l2_device_register_subdev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x2df06a40, "fwnode_graph_get_port_parent" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a423ad8, "dev_fwnode" },
};

MODULE_INFO(depends, "i2c-core,videodev");


MODULE_INFO(srcversion, "9AF5DCE02BB137A0E5DC969");
