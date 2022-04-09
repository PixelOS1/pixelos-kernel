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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x9b02585d, "single_release" },
	{ 0x94216657, "seq_read" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0xad74a67, "kill_anon_super" },
	{ 0x37a0cba, "kfree" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xdec4b7b5, "debugfs_lookup" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x311e3ba7, "unregister_shrinker" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x37bafcf3, "balloon_aops" },
	{ 0xf8df2930, "alloc_anon_inode" },
	{ 0x69829cde, "kern_mount" },
	{ 0x3d83bbbd, "register_shrinker" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x29ad8e33, "x86_hyper_type" },
	{ 0xb912560d, "static_key_disable" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0xf2011c31, "split_page" },
	{ 0xbcfd3ed0, "balloon_page_alloc" },
	{ 0x92997ed8, "_printk" },
	{ 0xb572e830, "vmci_doorbell_create" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x668b19a1, "down_read" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0xd098444a, "__SetPageMovable" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xa9da39f7, "__ClearPageMovable" },
	{ 0x53b954a2, "up_read" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x21075824, "__free_pages" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5e949e0a, "vmci_doorbell_destroy" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x44fa37dd, "balloon_page_list_dequeue" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xd349d253, "seq_printf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe9aaf799, "vm_event_states" },
	{ 0xa3db4c4, "dump_page" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3758c059, "balloon_page_list_enqueue" },
	{ 0xf2ae34e1, "kern_unmount" },
	{ 0xb732c3f4, "iput" },
	{ 0xe4345174, "single_open" },
	{ 0x3557e4c9, "init_pseudo" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "vmw_vmci");


MODULE_INFO(srcversion, "ECD69D409A352515CC15B45");
