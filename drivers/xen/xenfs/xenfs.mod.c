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
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x900e0646, "seq_open_private" },
	{ 0x754d539c, "strlen" },
	{ 0x7517ac2, "get_tree_single" },
	{ 0x696d21d0, "seq_release_private" },
	{ 0xd349d253, "seq_printf" },
	{ 0x86b8a52c, "xen_xenbus_fops" },
	{ 0x2bfb5546, "xen_privcmd_fops" },
	{ 0x94216657, "seq_read" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xfb578fc5, "memset" },
	{ 0x4a1a6708, "kill_litter_super" },
	{ 0x86632d5a, "default_llseek" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x54ea6dfe, "xen_start_flags" },
	{ 0x5187ac4b, "xen_store_evtchn" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa916b694, "strnlen" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4faa9e16, "remap_pfn_range" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x6a6decb2, "simple_fill_super" },
	{ 0x2b0765ca, "xen_store_interface" },
	{ 0xc25db9fa, "unregister_filesystem" },
};

MODULE_INFO(depends, "xen-privcmd");


MODULE_INFO(srcversion, "3739516DC0A7C250B380687");
