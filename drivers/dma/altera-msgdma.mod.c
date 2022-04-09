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
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x37a0cba, "kfree" },
	{ 0xe07b4f38, "dma_async_device_unregister" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x591c0306, "_dev_notice" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xcbb3c845, "devm_free_irq" },
	{ 0x1a572bf1, "dma_async_device_register" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x87b8798d, "sg_next" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7b10176c, "dma_async_tx_descriptor_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x3419636e, "platform_get_resource_byname" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6BF116E77CE79BC98B5B145");
