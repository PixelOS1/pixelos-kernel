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
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa0a0cb18, "stream_open" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa164df89, "misc_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xde80cd09, "ioremap" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x69acdf38, "memcpy" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000104Cd00008000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B84B17356928BF9B428F894");
