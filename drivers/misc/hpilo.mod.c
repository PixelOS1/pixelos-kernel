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
	{ 0x45a41106, "noop_llseek" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x4195254f, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x1aafecfe, "__class_create" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf5fa5da, "cdev_del" },
	{ 0x90ce49bd, "device_destroy" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x4dce8ff3, "device_create" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0x3b09f2ee, "cdev_add" },
	{ 0xacb32f2d, "cdev_init" },
	{ 0xb19b445, "ioread8" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4213e52a, "pci_iomap_range" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8adca48b, "pci_match_id" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x848d372e, "iowrite8" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00000E11d0000B204sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003307sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9B29BD203BB0B7D12244393");
