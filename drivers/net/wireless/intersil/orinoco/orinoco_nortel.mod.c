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
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x27890c62, "orinoco_if_add" },
	{ 0x2142157a, "orinoco_init" },
	{ 0xa74c2dc5, "hermes_struct_init" },
	{ 0x46167ef1, "alloc_orinocodev" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0x85862401, "free_orinocodev" },
	{ 0x42f1cc7d, "wiphy_unregister" },
	{ 0x16485da1, "orinoco_if_del" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6f2088b9, "orinoco_down" },
	{ 0x92997ed8, "_printk" },
	{ 0xe3f70f1b, "orinoco_up" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xffe27bca, "orinoco_interrupt" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "orinoco,cfg80211");

MODULE_ALIAS("pci:v0000126Cd00008030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001562d00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1101178A579A1CFFADDEA70");
