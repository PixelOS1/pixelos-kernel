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
	{ 0x5b7424d5, "bus_register" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0x7549c36, "driver_register" },
	{ 0x80a30e6, "sysfs_remove_bin_file" },
	{ 0xee111615, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0xc5e74216, "release_resource" },
	{ 0xf5c4f8e7, "pcmcia_put_socket" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xd474fdbc, "pcmcia_socket_class" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x2f2009ce, "bus_rescan_devices" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xe1927de2, "pcmcia_parse_uevents" },
	{ 0xdaf02d94, "device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf0240fcb, "class_interface_register" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xde80cd09, "ioremap" },
	{ 0xa41ee6e0, "class_interface_unregister" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xbb6269b0, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdfbcf889, "module_put" },
	{ 0x92b37480, "pccard_register_pcmcia" },
	{ 0xb3f9e0ab, "security_locked_down" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xdf918de4, "bus_for_each_dev" },
	{ 0x40cdf542, "driver_create_file" },
	{ 0x761527a1, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x16e6d67f, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xbcbcc6a1, "sysfs_create_bin_file" },
	{ 0x1564421, "request_firmware" },
	{ 0x776c87fd, "device_unregister" },
	{ 0x91f11b5f, "driver_attach" },
	{ 0xd4e8d3e0, "driver_remove_file" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6a851093, "pcmcia_get_socket" },
	{ 0x13110126, "request_resource" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "pcmcia_core");


MODULE_INFO(srcversion, "5D9F4BFBD4160A39F03B400");
