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
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0xf5fa5da, "cdev_del" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xacb32f2d, "cdev_init" },
	{ 0x53b954a2, "up_read" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x522f5db8, "mtd_block_isbad" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0xa6b9a850, "seq_open" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x9cfbbd76, "mtd_get_device_size" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xd349d253, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc053ddc8, "mtd_write" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x94216657, "seq_read" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0xca3952f9, "mtd_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa164df89, "misc_register" },
	{ 0xa611ebbc, "kern_path" },
	{ 0xfb578fc5, "memset" },
	{ 0xdaf02d94, "device_register" },
	{ 0xc23477d, "current_task" },
	{ 0x9604dda, "freezing_slow_path" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5bc67763, "mtd_read" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x52d91e96, "class_unregister" },
	{ 0xdeb07d79, "put_mtd_device" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x48ba271b, "fixed_size_llseek" },
	{ 0x5a921311, "strncmp" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x22749e72, "simple_open" },
	{ 0xce807a25, "up_write" },
	{ 0x97ac8144, "__class_register" },
	{ 0x57bc19d2, "down_write" },
	{ 0x1fc5276e, "mtd_block_markbad" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x3b09f2ee, "cdev_add" },
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xdfbcf889, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa916b694, "strnlen" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x1000e51, "schedule" },
	{ 0x1fdba44b, "cdev_device_add" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xec84e406, "get_mtd_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xb8f9689f, "path_put" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7ba23748, "get_mtd_device_nm" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x16e6d67f, "get_device" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0xca9360b5, "rb_next" },
	{ 0x776c87fd, "device_unregister" },
	{ 0x60805a2, "cdev_device_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7da295e7, "seq_release" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xf0d3e720, "vfs_getattr" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0x760a0f4f, "yield" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "ABF2581FE878F060846B730");
