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
	{ 0x830afbe6, "nfc_hci_recv_frame" },
	{ 0x754d539c, "strlen" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x28b2ea29, "devm_gpiod_get" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x9bac0432, "pn544_hci_remove" },
	{ 0x459f3f88, "skb_push" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf8db5365, "devm_acpi_dev_add_driver_gpios" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0x550b738c, "nfc_fw_download_done" },
	{ 0x1564421, "request_firmware" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6f018719, "pn544_hci_probe" },
};

MODULE_INFO(depends, "hci,i2c-core,pn544,nfc");

MODULE_ALIAS("of:N*T*Cnxp,pn544-i2c");
MODULE_ALIAS("of:N*T*Cnxp,pn544-i2cC*");
MODULE_ALIAS("acpi*:NXP5440:*");
MODULE_ALIAS("i2c:pn544");

MODULE_INFO(srcversion, "F46C881865A2C6CAD8944DD");
