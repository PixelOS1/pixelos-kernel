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
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x88786b87, "gpio_to_desc" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x29332499, "__x86_indirect_thunk_rsi" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xadede681, "ath_printk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xf3f6dc84, "ath_hw_get_listen_time" },
	{ 0xb1ab353, "ath_regd_get_band_ctl" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x84edb417, "ath_hw_cycle_counters_update" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xb830146f, "ath_hw_setbssidmask" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa6b4a11f, "gpiod_set_raw_value" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x96848186, "scnprintf" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x4182f7ba, "gpiod_get_raw_value" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x9e7d6bd0, "__udelay" },
};

MODULE_INFO(depends, "ath");


MODULE_INFO(srcversion, "6D959336F79B830BC5AF043");
