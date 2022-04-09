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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xacb32f2d, "cdev_init" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0xa3a48714, "devm_ioremap_wc" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa0a0cb18, "stream_open" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb19b445, "ioread8" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xffb7c514, "ida_free" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfe052363, "ioread64_lo_hi" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3c9e9462, "pci_clear_master" },
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x7fde4ef0, "kmem_cache_alloc_node_trace" },
	{ 0x761527a1, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1fdba44b, "cdev_device_add" },
	{ 0x92997ed8, "_printk" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x16e6d67f, "get_device" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x4195254f, "class_destroy" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x60805a2, "cdev_device_del" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x1aafecfe, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000011F8d00008531sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008531sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008532sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008532sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008533sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008533sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008534sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008534sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008535sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008535sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008536sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008536sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008541sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008541sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008542sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008542sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008543sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008543sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008544sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008544sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008545sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008545sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008546sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008546sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008551sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008551sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008552sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008552sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008553sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008553sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008554sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008554sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008555sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008555sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008556sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008556sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008561sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008561sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008562sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008562sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008563sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008563sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008564sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008564sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008565sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008565sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008566sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008566sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008571sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008571sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008572sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008572sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008573sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008573sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008574sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008574sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008575sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008575sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008576sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008576sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004000sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004000sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004084sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004084sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004068sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004068sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004052sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004052sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004036sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004036sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004028sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004028sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004100sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004100sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004184sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004184sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004168sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004168sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004152sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004152sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004136sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004136sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004128sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004128sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004200sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004200sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004284sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004284sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004268sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004268sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004252sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004252sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004236sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004236sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004228sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004228sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004352sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004352sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004336sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004336sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004328sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004328sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004452sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004452sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004436sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004436sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004428sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004428sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004552sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004552sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004536sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004536sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004528sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00004528sv*sd*bc06sc80i00*");

MODULE_INFO(srcversion, "35D33ADBCD116FA4AB29A58");
