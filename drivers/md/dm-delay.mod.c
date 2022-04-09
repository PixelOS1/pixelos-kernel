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
	{ 0x664ef11f, "dm_unregister_target" },
	{ 0x42f01a2e, "dm_register_target" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x224a96de, "dm_get_device" },
	{ 0x9154ba67, "dm_table_get_mode" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x838c1975, "submit_bio_noacct" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8a2e4c43, "dm_bio_from_per_bio_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0xc76edc06, "dm_put_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5d2b0351, "bio_associate_blkg" },
	{ 0xf72d0e8a, "dm_per_bio_data" },
	{ 0x96848186, "scnprintf" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "51844FE39A8FB664E3128BE");
