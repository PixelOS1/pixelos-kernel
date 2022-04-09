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
	{ 0x85bd1608, "__request_region" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x7e5db80b, "pstore_name_to_type" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xee111615, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x2dc1d86, "pstore_unregister" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0xfd581da1, "free_rs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xde80cd09, "ioremap" },
	{ 0xbc9f459f, "vmap" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xeb2f825c, "init_rs_gfp" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x96848186, "scnprintf" },
	{ 0x3532426b, "pstore_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x1d29b9e1, "decode_rs8" },
	{ 0x63adbf92, "encode_rs8" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x60a293d7, "param_ops_ulong" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xbe4ed559, "param_ops_ullong" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "reed_solomon");


MODULE_INFO(srcversion, "1D8277710E3C0AB062E49E1");
