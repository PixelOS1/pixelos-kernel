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
	{ 0xea5b8b4e, "rt2x00mac_reconfig_complete" },
	{ 0x32b511b1, "rt2x00mac_tx_frames_pending" },
	{ 0x4dbc1f20, "rt2x00mac_get_ringparam" },
	{ 0x26721457, "rt2x00mac_flush" },
	{ 0x95b46ca7, "rt2x00mac_rfkill_poll" },
	{ 0xdc7c1a75, "rt2800_get_survey" },
	{ 0x814a645e, "rt2800_ampdu_action" },
	{ 0xc6d2fb98, "rt2800_get_tsf" },
	{ 0x656b9d20, "rt2800_conf_tx" },
	{ 0xee1c6673, "rt2800_sta_remove" },
	{ 0xde43ef07, "rt2800_sta_add" },
	{ 0x7128ee32, "rt2800_set_rts_threshold" },
	{ 0x6a1a221d, "rt2800_get_key_seq" },
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
	{ 0x58ab2be9, "rt2800mmio_get_dma_done" },
	{ 0x1f784f73, "rt2800mmio_get_txwi" },
	{ 0x54c0b3a8, "rt2800mmio_init_registers" },
	{ 0xdb56d27d, "rt2x00mmio_regbusy_read" },
	{ 0x1f61f9b2, "rt2800_pre_reset_hw" },
	{ 0xefe66057, "rt2800_config" },
	{ 0x49e79f66, "rt2800_config_ant" },
	{ 0xbc805688, "rt2800_config_erp" },
	{ 0xf5b8e434, "rt2800_config_intf" },
	{ 0x865512cc, "rt2800_config_filter" },
	{ 0xa646554e, "rt2800_config_pairwise_key" },
	{ 0xc1516a03, "rt2800_config_shared_key" },
	{ 0x527f22bf, "rt2800mmio_fill_rxdone" },
	{ 0xd82e785b, "rt2800_clear_beacon" },
	{ 0x785d54a9, "rt2800_write_beacon" },
	{ 0xbb4bc51d, "rt2800_write_tx_data" },
	{ 0x993f7255, "rt2800mmio_write_tx_desc" },
	{ 0x60cbe5cf, "rt2800mmio_flush_queue" },
	{ 0x46194fae, "rt2800mmio_stop_queue" },
	{ 0x8b8dce2b, "rt2800mmio_kick_queue" },
	{ 0xe48ed6f, "rt2800mmio_start_queue" },
	{ 0x1a83cf31, "rt2800_watchdog" },
	{ 0x1c72016d, "rt2800_vco_calibration" },
	{ 0x939836f7, "rt2800_gain_calibration" },
	{ 0xb7150193, "rt2800_link_tuner" },
	{ 0xf5b2c96b, "rt2800_reset_tuner" },
	{ 0xa6b7037d, "rt2800_link_stats" },
	{ 0xf1afb1ab, "rt2800_rfkill_poll" },
	{ 0x7c90ea0, "rt2800mmio_clear_entry" },
	{ 0xa12815a3, "rt2800mmio_get_entry_state" },
	{ 0xc7ff3ca7, "rt2x00mmio_uninitialize" },
	{ 0xb1e1f305, "rt2x00mmio_initialize" },
	{ 0x60f99b66, "rt2800_load_firmware" },
	{ 0xbcd14f09, "rt2800_check_firmware" },
	{ 0xa4f895ec, "rt2800mmio_probe_hw" },
	{ 0x97e3c029, "rt2800mmio_autowake_tasklet" },
	{ 0x32ac3645, "rt2800mmio_rxdone_tasklet" },
	{ 0x5028bbb2, "rt2800mmio_tbtt_tasklet" },
	{ 0x3d741c87, "rt2800mmio_pretbtt_tasklet" },
	{ 0x9f3c8921, "rt2800mmio_txstatus_tasklet" },
	{ 0x5fa4db64, "rt2800mmio_interrupt" },
	{ 0x681be600, "rt2800_rt2x00debug" },
	{ 0xc6d695b1, "rt2800mmio_queue_init" },
	{ 0xb1f37ee0, "rt2x00pci_pm_ops" },
	{ 0xd8bc7e10, "rt2x00pci_remove" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x7e809f1, "rt2800mmio_toggle_irq" },
	{ 0x31b87e70, "rt2800_mcu_request" },
	{ 0x4a2387ee, "rt2800mmio_enable_radio" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x5e35acba, "rt2800_read_eeprom_efuse" },
	{ 0xecbca72c, "rt2800_efuse_detect" },
	{ 0xc1f1b1be, "rt2x00pci_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2800lib,rt2800mmio,rt2x00mmio,rt2x00pci,eeprom_93cx6");

MODULE_ALIAS("pci:v00001814d00000601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000781sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003092sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007708sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007728sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007738sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007748sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007758sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007768sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001462d0000891Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A3Bd00001059sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003290sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007722sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003592sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003593sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000359Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "65B0FCEACCA142AECED1C40");
