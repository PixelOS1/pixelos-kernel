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
	{ 0xa4b94fea, "iowrite8_rep" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x57c6c802, "nanddev_mtd_max_bad_blocks" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e2630ba, "mtd_ooblayout_get_eccbytes" },
	{ 0x81188c30, "match_string" },
	{ 0x1b8d4acd, "mtd_ooblayout_get_databytes" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x29770883, "mtd_ooblayout_find_eccregion" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5fc67252, "ioread16_rep" },
	{ 0x999e8297, "vfree" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x2bcdd77c, "mtd_ooblayout_set_databytes" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x204ce133, "mtd_expert_analysis_warning" },
	{ 0xfb578fc5, "memset" },
	{ 0x6fcb87a1, "touch_softlockup_watchdog" },
	{ 0x1c5823a9, "mtd_ooblayout_count_freebytes" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5bc67763, "mtd_read" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x531b604e, "__virt_addr_valid" },
	{ 0x780737d1, "mtd_expert_analysis_mode" },
	{ 0x3135cdf6, "nand_ecc_sw_hamming_correct" },
	{ 0x5a921311, "strncmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2d68e33d, "nand_get_small_page_ooblayout" },
	{ 0x990edfc7, "mtd_write_oob" },
	{ 0xc9efd38c, "nand_ecc_is_strong_enough" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x7eae9cb7, "nand_ecc_sw_hamming_cleanup_ctx" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xfbab1bb1, "ioread8_rep" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xafeaa279, "nand_ecc_sw_hamming_calculate" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9b1b4265, "mtd_ooblayout_set_eccbytes" },
	{ 0x3fc7a9fd, "nanddev_init" },
	{ 0x505f1eed, "nand_ecc_sw_hamming_init_ctx" },
	{ 0x37a0cba, "kfree" },
	{ 0xf3c169e0, "nand_get_large_page_ooblayout" },
	{ 0x69acdf38, "memcpy" },
	{ 0x50d38512, "nand_get_large_page_hamming_ooblayout" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x9d09d84f, "nanddev_cleanup" },
	{ 0x77bc13a0, "strim" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xad572882, "mtd_read_oob" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x7ce0d551, "gpiod_get_value_cansleep" },
};

MODULE_INFO(depends, "nandcore,mtd");


MODULE_INFO(srcversion, "D6E8B9940AB5576A6171369");
