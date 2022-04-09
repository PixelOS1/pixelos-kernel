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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0xf6f7fd3a, "ib_dealloc_pd_user" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc48a80ce, "ib_free_cq" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x666d096e, "ib_cq_pool_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x6ca0d38a, "rdma_destroy_qp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x31de1a15, "inet_pton_with_scope" },
	{ 0x7aad950, "rdma_notify" },
	{ 0x4d1fd0fd, "__ib_alloc_cq" },
	{ 0x5a921311, "strncmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7464f9e3, "ib_cq_pool_put" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x713b4db1, "rdma_create_qp" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x96848186, "scnprintf" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x16fb069e, "__ib_alloc_pd" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
};

MODULE_INFO(depends, "ib_core,rdma_cm");


MODULE_INFO(srcversion, "D60A466005DA71331711AAD");
