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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xb042c0f3, "nvme_fc_register_localport" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd12e564, "nvme_fc_register_remoteport" },
	{ 0xb98123d, "nvmet_fc_rcv_ls_req" },
	{ 0x3884f8b8, "nvme_fc_unregister_localport" },
	{ 0xad0413d4, "match_hex" },
	{ 0x90ce49bd, "device_destroy" },
	{ 0x44e9a829, "match_token" },
	{ 0x87b8798d, "sg_next" },
	{ 0x85df9b6c, "strsep" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc6911995, "device_create_with_groups" },
	{ 0x7fa5302a, "nvmet_fc_rcv_fcp_abort" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xfca9dc99, "nvme_fc_unregister_remoteport" },
	{ 0x9ef76d99, "nvmet_fc_unregister_targetport" },
	{ 0x4e3567f7, "match_int" },
	{ 0x1048b92a, "nvmet_fc_rcv_fcp_req" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5ce77a67, "nvmet_fc_register_targetport" },
	{ 0xa916b694, "strnlen" },
	{ 0x761527a1, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbb0e18a6, "nvme_fc_rcv_ls_req" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x16e6d67f, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0x4195254f, "class_destroy" },
	{ 0x3e33ac54, "nvme_fc_rescan_remoteport" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x1aafecfe, "__class_create" },
};

MODULE_INFO(depends, "nvme-fc,nvmet-fc");


MODULE_INFO(srcversion, "5DA93C745B2AB78E6BA6095");
