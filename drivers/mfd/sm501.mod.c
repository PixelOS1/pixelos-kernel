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
	{ 0xd5596d10, "device_remove_file" },
	{ 0x85bd1608, "__request_region" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x77358855, "iomem_resource" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x38aa1397, "gpiod_add_lookup_table" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x837887c6, "gpiochip_remove" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x27d9398f, "gpiochip_add_data_with_key" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf92c8476, "gpiochip_get_data" },
	{ 0x2af975fa, "device_create_file" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x49870137, "platform_device_register" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa7a199fb, "pci_ioremap_bar" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000126Fd00000501sv*sd*bc*sc*i*");
MODULE_ALIAS("of:N*T*Csmi,sm501");
MODULE_ALIAS("of:N*T*Csmi,sm501C*");

MODULE_INFO(srcversion, "7E8D74753E012AEAC4BCC6B");
