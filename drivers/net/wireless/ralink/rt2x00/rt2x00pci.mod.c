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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x37e88e86, "rt2x00lib_resume" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x5dac2d51, "ieee80211_alloc_hw_nm" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xec4ab464, "pci_set_mwi" },
	{ 0xfb66527a, "rt2x00lib_remove_dev" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa7a199fb, "pci_ioremap_bar" },
	{ 0x68d03a6, "pci_clear_mwi" },
	{ 0x37a0cba, "kfree" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x308add0e, "ieee80211_free_hw" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x5135626, "rt2x00lib_probe_dev" },
	{ 0x7614d970, "rt2x00lib_suspend" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "0F64E18BCE5FBBBADEA0D56");
