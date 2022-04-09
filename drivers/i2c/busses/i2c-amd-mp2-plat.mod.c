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
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x42041512, "i2c_get_dma_safe_msg_buf" },
	{ 0x8874c39d, "amd_mp2_rw" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x5c8bb90c, "i2c_add_adapter" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa17ef8db, "set_primary_fwnode" },
	{ 0x4438b72f, "i2c_acpi_find_bus_speed" },
	{ 0x685d5b31, "device_link_add" },
	{ 0x1137fa09, "amd_mp2_register_cb" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc2f7f59, "amd_mp2_find_device" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xa6257a2f, "complete" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0xc092f4f, "amd_mp2_unregister_cb" },
	{ 0x61acc2c7, "amd_mp2_bus_enable_set" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfd2d0a36, "amd_mp2_rw_timeout" },
	{ 0x4dae16e4, "i2c_put_dma_safe_msg_buf" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x249f0439, "amd_mp2_process_event" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,i2c-amd-mp2-pci");

MODULE_ALIAS("acpi*:AMDI0011:*");

MODULE_INFO(srcversion, "D53878BE3FBB86ECB42D34E");
