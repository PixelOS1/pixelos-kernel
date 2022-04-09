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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x32b511b1, "rt2x00mac_tx_frames_pending" },
	{ 0x4dbc1f20, "rt2x00mac_get_ringparam" },
	{ 0x45a317ad, "rt2x00mac_get_antenna" },
	{ 0x3f99c2c, "rt2x00mac_set_antenna" },
	{ 0x26721457, "rt2x00mac_flush" },
	{ 0x95b46ca7, "rt2x00mac_rfkill_poll" },
	{ 0x3fbdbb6f, "rt2x00mac_get_stats" },
	{ 0xf3b8ca70, "rt2x00mac_sw_scan_complete" },
	{ 0xd2f91674, "rt2x00mac_sw_scan_start" },
	{ 0x6dd1b6fc, "rt2x00mac_set_key" },
	{ 0xbb61f480, "rt2x00mac_configure_filter" },
	{ 0x7825579e, "rt2x00mac_bss_info_changed" },
	{ 0xde51ed82, "rt2x00mac_config" },
	{ 0x46db5334, "rt2x00mac_remove_interface" },
	{ 0x314148b6, "rt2x00mac_add_interface" },
	{ 0xd73fab62, "rt2x00mac_stop" },
	{ 0xa89d9690, "rt2x00mac_start" },
	{ 0x264f955, "rt2x00mac_tx" },
	{ 0x3e2f905f, "rt2x00mmio_flush_queue" },
	{ 0xc7ff3ca7, "rt2x00mmio_uninitialize" },
	{ 0xb1e1f305, "rt2x00mmio_initialize" },
	{ 0xb1f37ee0, "rt2x00pci_pm_ops" },
	{ 0xd8bc7e10, "rt2x00pci_remove" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xa41d2a2d, "rt2x00mmio_rxdone" },
	{ 0x5118f8fa, "rt2x00lib_beacondone" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xcc61b409, "rt2x00lib_set_mac_address" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x9b677a72, "rt2x00lib_txdone" },
	{ 0xfba3319d, "rt2x00queue_get_entry" },
	{ 0xed990c66, "rt2x00lib_txdone_noinfo" },
	{ 0xd819a524, "crc_itu_t_table" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xd44b38f4, "__skb_pad" },
	{ 0x66b04b83, "rt2x00debug_dump_frame" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0x4f6754a0, "rt2x00mac_conf_tx" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdb56d27d, "rt2x00mmio_regbusy_read" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc1f1b1be, "rt2x00pci_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2x00mmio,rt2x00pci,eeprom_93cx6,crc-itu-t");

MODULE_ALIAS("pci:v00001814d00000301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000401sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "24A8AEF91F4807550AEEF77");
