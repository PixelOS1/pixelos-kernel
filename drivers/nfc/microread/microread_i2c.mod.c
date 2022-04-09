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
	{ 0x830afbe6, "nfc_hci_recv_frame" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x2c651a71, "microread_probe" },
	{ 0x459f3f88, "skb_push" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x966b5ec7, "microread_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "hci,i2c-core,microread");

MODULE_ALIAS("i2c:microread");

MODULE_INFO(srcversion, "AE3B3571165ED0EC5312C81");
