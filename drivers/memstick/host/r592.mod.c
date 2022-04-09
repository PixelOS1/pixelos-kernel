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
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xd3faa88a, "memstick_alloc_host" },
	{ 0xd74f363, "memstick_free_host" },
	{ 0xee111615, "param_ops_int" },
	{ 0x508199ea, "memstick_suspend_host" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0x2650441a, "memstick_detect_change" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x9b9a640d, "memstick_resume_host" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x5012a70, "pv_ops" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf30c39b4, "memstick_remove_host" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x23906fc1, "sg_miter_start" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xa78c92d7, "sg_miter_stop" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfd1d5018, "sg_miter_next" },
	{ 0x4ac44daa, "memstick_next_req" },
	{ 0x99d97b98, "memstick_add_host" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xa7a199fb, "pci_ioremap_bar" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xa6257a2f, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "memstick");

MODULE_ALIAS("pci:v00001180d00000592sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BF381A25C6C36BEA02D0891");
