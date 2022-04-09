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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0xee111615, "param_ops_int" },
	{ 0x3baa83fd, "serial8250_register_8250_port" },
	{ 0x7517ac2, "get_tree_single" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc38b42ea, "generic_delete_inode" },
	{ 0x1151052, "dput" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xb16fd5d4, "d_add" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0x331337dc, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4a1a6708, "kill_litter_super" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x22749e72, "simple_open" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xda925de2, "simple_dir_operations" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa7a199fb, "pci_ioremap_bar" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x4de1b089, "current_time" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd811a9cf, "d_make_root" },
	{ 0x44368f55, "simple_statfs" },
	{ 0x94d4c15c, "d_alloc_name" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc25db9fa, "unregister_filesystem" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x27cb619b, "new_inode" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x71dbb2b, "simple_dir_inode_operations" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xefc7653c, "input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001014d0000010Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D67DC9954C26D58885D6698");
