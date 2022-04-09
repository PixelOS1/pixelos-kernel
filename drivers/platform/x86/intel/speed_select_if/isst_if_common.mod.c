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
	{ 0xc0013398, "__cpuhp_remove_state" },
	{ 0x6851664e, "wrmsrl_safe_on_cpu" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5012a70, "pv_ops" },
	{ 0xa5e55057, "rdmsrl_safe_on_cpu" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa164df89, "misc_register" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc23477d, "current_task" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2901806, "pci_get_domain_bus_and_slot" },
	{ 0x6feabb13, "__cpuhp_setup_state" },
	{ 0xdfbcf889, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x618911fc, "numa_node" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x37a0cba, "kfree" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf32ea3d5, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F01664BDF830F9B678978DD");
