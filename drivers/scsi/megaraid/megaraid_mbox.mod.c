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
	{ 0xee111615, "param_ops_int" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x87b8798d, "sg_next" },
	{ 0xbe277c8f, "scsi_dma_map" },
	{ 0x69acdf38, "memcpy" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x3ec726dd, "dma_pool_create" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0xb2cf7c01, "mraid_mm_unregister_adp" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xaeafaa63, "scsi_build_sense" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x9565eb39, "mraid_mm_register_adp" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa21fafb9, "mraid_mm_adapter_app_handle" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "megaraid_mm");

MODULE_ALIAS("pci:v00001028d0000000Esv00001028sd00000123bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00001960sv00001028sd00000520bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00001960sv00001028sd00000518bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000407sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001028d0000000Fsv00001028sd0000014Abc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd0000016Cbc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd0000016Dbc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd0000016Ebc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd0000016Fbc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd00000170bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000408sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000101Ed00001960sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00001960sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000409sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B53177C0D5605F49FD79A05");
