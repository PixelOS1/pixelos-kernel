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
	{ 0xa4e1f88e, "genphy_suspend" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x1194b4a6, "genphy_read_status" },
	{ 0x817f296c, "phy_trigger_machine" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x29181f8d, "phy_drivers_register" },
	{ 0x13240c2b, "phy_select_page" },
	{ 0xf881344d, "mdiobus_write" },
	{ 0xa1eb43a, "__genphy_config_aneg" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x61f6ca8f, "macsec_pn_wrapped" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xe1c1701c, "netif_rx_ni" },
	{ 0x7220fc0a, "phy_modify" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5c0ace65, "devm_phy_package_join" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfc4d8f04, "phy_modify_paged" },
	{ 0xd6611206, "skb_complete_tx_timestamp" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xf0d40089, "ptp_clock_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x6d849403, "__phy_modify" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x562f7286, "genphy_aneg_done" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x9f14a8c0, "genphy_resume" },
	{ 0xf1546621, "__mdiobus_write" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf999dc3d, "phy_drivers_unregister" },
	{ 0xfec4b87c, "genphy_soft_reset" },
	{ 0x73c5ed0a, "phy_restore_page" },
	{ 0x8cf2592f, "phy_read_paged" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e4b27d0, "ptp_clock_index" },
	{ 0x1564421, "request_firmware" },
	{ 0x1fbb70c0, "__mdiobus_read" },
	{ 0x34340150, "gpiod_set_value" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x61495404, "phy_error" },
	{ 0xcbcfe96c, "genphy_restart_aneg" },
};

MODULE_INFO(depends, "libphy,macsec");

MODULE_ALIAS("mdio:0000000000000111000001001100????");
MODULE_ALIAS("mdio:0000000000000111000001100111????");
MODULE_ALIAS("mdio:0000000000000111000001010110????");
MODULE_ALIAS("mdio:0000000000000111000001010111????");
MODULE_ALIAS("mdio:0000000000000111000001110110????");
MODULE_ALIAS("mdio:0000000000000111000001110111????");
MODULE_ALIAS("mdio:0000000000000111000001001110????");
MODULE_ALIAS("mdio:0000000000000111000001111110????");
MODULE_ALIAS("mdio:0000000000000111000001001101????");
MODULE_ALIAS("mdio:0000000000000111000001001010????");
MODULE_ALIAS("mdio:0000000000000111000001111101????");
MODULE_ALIAS("mdio:0000000000000111000001111011????");
MODULE_ALIAS("mdio:0000000000000111000001111100????");

MODULE_INFO(srcversion, "77F87A546215771E0158EAF");
