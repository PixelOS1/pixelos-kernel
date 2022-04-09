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
	{ 0x376289aa, "rtw_set_channel_mac" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xf9788f1e, "rtw_phy_write_rf_reg_mix" },
	{ 0xe5bcfdc5, "rtw_parse_tbl_bb_pg" },
	{ 0x6578229e, "rtw_rx_fill_rx_status" },
	{ 0x42cface, "rtw_phy_load_tables" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x48106877, "rtw_bf_phy_init" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xac28ed50, "rtw_phy_set_edcca_th" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xde7f2d8a, "rtw_parse_tbl_txpwr_lmt" },
	{ 0x519c8ba9, "rtw_rate_size" },
	{ 0xe1b88147, "rtw_bf_set_gid_table" },
	{ 0x440b7589, "rtw_phy_rf_power_2_rssi" },
	{ 0xdaef8cce, "rtw_phy_pwrtrack_avg" },
	{ 0x58210e60, "rtw_rate_section" },
	{ 0x5575e520, "rtw_fw_do_iqk" },
	{ 0x460e93f9, "rtw_read8_physical_efuse" },
	{ 0xe6a5d992, "rtw_bf_enable_bfee_su" },
	{ 0xf1d9f7b4, "rtw_dump_fw" },
	{ 0xe349891d, "rtw_phy_parsing_cfo" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x13d67304, "rtw_phy_read_rf" },
	{ 0x6ac29650, "rtw_phy_pwrtrack_need_lck" },
	{ 0xd7a98767, "rtw_phy_cfg_agc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x21639808, "rtw_coex_read_indirect_reg" },
	{ 0xb1c7a986, "rtw_bf_enable_bfee_mu" },
	{ 0x95000727, "rtw_bf_remove_bfee_su" },
	{ 0x107c5ce2, "rtw_bf_remove_bfee_mu" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd3a72af1, "rtw_set_rx_freq_band" },
	{ 0x2de98433, "rtw_bf_cfg_csi_rate" },
	{ 0xf17bbf85, "rtw_restore_reg" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd9e36837, "rtw_phy_cfg_bb" },
	{ 0xcce2857a, "rtw_phy_cfg_rf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x83e87f27, "rtw_phy_pwrtrack_get_delta" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x567e3216, "check_hw_ready" },
	{ 0x7993a65b, "rtw_coex_write_indirect_reg" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x7e347c0e, "rtw_phy_cfg_mac" },
	{ 0x31812898, "rtw_phy_pwrtrack_get_pwridx" },
	{ 0xbabd4849, "rtw_parse_tbl_phy_cond" },
	{ 0x60770c9d, "rtw_dump_reg" },
	{ 0x23978e5f, "rtw_fw_inform_rfk_status" },
	{ 0x3454da93, "rtw_phy_init" },
	{ 0xf8439c6a, "rtw_phy_config_swing_table" },
};

MODULE_INFO(depends, "rtw88_core");


MODULE_INFO(srcversion, "12327A16B75419B668C5611");
