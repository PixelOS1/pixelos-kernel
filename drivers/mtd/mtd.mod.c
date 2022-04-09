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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xe4345174, "single_open" },
	{ 0x350e1083, "proc_create_single_data" },
	{ 0xeb69ab62, "nvmem_register" },
	{ 0x9b02585d, "single_release" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb62889fc, "deactivate_locked_super" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc0a7a96f, "sysfs_create_files" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x90ce49bd, "device_destroy" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3be38d4c, "__register_chrdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x94216657, "seq_read" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x34c7cdbc, "lookup_bdev" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xdaf02d94, "device_register" },
	{ 0x80d1da32, "bdi_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x52d91e96, "class_unregister" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x48ba271b, "fixed_size_llseek" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4dce8ff3, "device_create" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x3a6a0e57, "debugfs_create_bool" },
	{ 0x97ac8144, "__class_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xdfbcf889, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7dbaa259, "bdi_put" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x28abcbaa, "sysfs_remove_files" },
	{ 0x1abfb4a7, "logfc" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e07af32, "sget_fc" },
	{ 0xcc39c03e, "nvmem_unregister" },
	{ 0x776c87fd, "device_unregister" },
	{ 0x8591d7d5, "ledtrig_mtd_activity" },
	{ 0x108a809b, "bdi_register" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x60a31ea9, "bdi_unregister" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x20978fb9, "idr_find" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xaacf7e81, "generic_shutdown_super" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A04392DE812588BD0A09715");
