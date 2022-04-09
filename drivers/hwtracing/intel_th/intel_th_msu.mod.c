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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x81188c30, "match_string" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xbc0bf17b, "intel_th_driver_unregister" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x68e97ab8, "intel_th_trace_disable" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x419905b5, "intel_th_driver_register" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8371509, "nonseekable_open" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa07a37f0, "memchr" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0xf2011c31, "split_page" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdfbcf889, "module_put" },
	{ 0xcfc9deaf, "atomic_dec_and_mutex_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x21075824, "__free_pages" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xff3c08ca, "intel_th_trace_enable" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0x96848186, "scnprintf" },
	{ 0x91607d95, "set_memory_wb" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc7e3427c, "intel_th_trace_switch" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xab65ed80, "set_memory_uc" },
};

MODULE_INFO(depends, "intel_th");


MODULE_INFO(srcversion, "EBFD2CF073BE9370A23BD46");
