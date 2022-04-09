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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xad122a99, "phy_init" },
	{ 0xd53865e8, "ata_dummy_port_ops" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0xea50dad3, "ahci_ignore_sss" },
	{ 0x815588a6, "clk_enable" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x5210970e, "ahci_save_initial_config" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa8417a24, "ata_host_suspend" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xac12dd03, "ahci_reset_em" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xee09ed35, "devm_ioremap_resource" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xc22a678d, "ata_host_resume" },
	{ 0x7622c3a9, "phy_set_mode_ext" },
	{ 0x1dd69ef9, "ata_port_desc" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x1e200e78, "ata_host_alloc_pinfo" },
	{ 0xf7c71ce9, "phy_power_off" },
	{ 0xc0c29915, "ahci_print_info" },
	{ 0xf9aa1869, "devres_open_group" },
	{ 0xdf956e9c, "phy_power_on" },
	{ 0x16720bc7, "__devres_alloc_node" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x8881c41f, "ahci_reset_controller" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0xb611b706, "phy_exit" },
	{ 0x270ccfc8, "ahci_host_activate" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc2d0b59f, "ahci_init_controller" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x95c8309c, "devm_reset_control_array_get" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa4faa6c8, "devres_add" },
	{ 0x571936c5, "ahci_set_em_messages" },
	{ 0xf906590d, "clk_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xf51a6622, "regulator_put" },
	{ 0xf1f40da0, "devm_of_phy_get" },
	{ 0x611fb8e1, "devres_remove_group" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0xf4fe9ee1, "regulator_get" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x627ac832, "devres_release_group" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0xf857123e, "ahci_ops" },
};

MODULE_INFO(depends, "libahci");


MODULE_INFO(srcversion, "4D0BDB795AAE9199595ED29");
