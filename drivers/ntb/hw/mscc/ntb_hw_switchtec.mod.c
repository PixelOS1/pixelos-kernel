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
	{ 0x60a293d7, "param_ops_ulong" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xa41ee6e0, "class_interface_unregister" },
	{ 0xf0240fcb, "class_interface_register" },
	{ 0x39ce2658, "switchtec_class" },
	{ 0x4213e52a, "pci_iomap_range" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xd39f2e8, "ntb_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x607013d5, "pci_iomap" },
	{ 0xfb578fc5, "memset" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x7fde4ef0, "kmem_cache_alloc_node_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x332dc333, "ntb_link_event" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb19b445, "ioread8" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x88ebef3a, "ntb_db_event" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x848d372e, "iowrite8" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd21c5139, "iowrite64_lo_hi" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xfe052363, "ioread64_lo_hi" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5e96e08c, "ntb_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "switchtec,ntb");


MODULE_INFO(srcversion, "EAD46842FF1499E089FB421");
