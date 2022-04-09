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
	{ 0x61fc1b5, "sbc_attrib_attrs" },
	{ 0xa8acb2ea, "sbc_get_device_type" },
	{ 0x622f0de0, "target_backend_unregister" },
	{ 0x1abe28c, "transport_backend_register" },
	{ 0x20815a6b, "sbc_dif_verify" },
	{ 0xe0ee4361, "iov_iter_zero" },
	{ 0x486023bf, "vfs_iter_read" },
	{ 0x87b8798d, "sg_next" },
	{ 0x8a298a5e, "vfs_iter_write" },
	{ 0x597f340a, "iov_iter_bvec" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbf6f49b7, "sbc_get_write_same_sectors" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd4a5c79e, "target_configure_unmap_from_queue" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0x4e3567f7, "match_int" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7432662d, "vfs_fsync_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x326109d0, "target_complete_cmd" },
	{ 0xe6f19b34, "blkdev_issue_discard" },
	{ 0x19c06657, "target_to_linux_sector" },
	{ 0xea1424f0, "I_BDEV" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xfbb44ee2, "sbc_parse_cdb" },
	{ 0x388d81e8, "filp_open" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x999e8297, "vfree" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x104c672, "kernel_write" },
	{ 0xfb578fc5, "memset" },
	{ 0x62eb8a7e, "filp_close" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "9E79DD672F2C324ACB26F4D");
