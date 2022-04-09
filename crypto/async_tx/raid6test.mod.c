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
	{ 0xa3db4c4, "dump_page" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa99b39c2, "prandom_bytes" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd932b1d, "async_syndrome_val" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x234e4423, "async_raid6_2data_recov" },
	{ 0xf76b1197, "async_raid6_datap_recov" },
	{ 0x71443196, "async_gen_syndrome" },
	{ 0x59f32a5, "async_xor" },
	{ 0xa6257a2f, "complete" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "async_pq,async_raid6_recov,async_xor");


MODULE_INFO(srcversion, "3AA171E2649CE5CC9DE5C87");
