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
	{ 0x6d288956, "sof_machine_register" },
	{ 0x3fb7348, "sof_io_write" },
	{ 0x28cb657f, "atom_dump" },
	{ 0xb2f5fe87, "snd_sof_load_firmware_memcpy" },
	{ 0x6e361c2f, "atom_machine_select" },
	{ 0x4f09ac4d, "sof_pci_pm" },
	{ 0xeacbcb77, "atom_get_mailbox_offset" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xc0755f5d, "sof_ipc_pcm_params" },
	{ 0x377e2e26, "sof_pci_shutdown" },
	{ 0x759dbbcb, "sof_machine_unregister" },
	{ 0xf3cf2de5, "sof_ipc_msg_data" },
	{ 0x79eea832, "sof_stream_pcm_close" },
	{ 0x527a0374, "sof_stream_pcm_open" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x6be2dd94, "sof_io_read" },
	{ 0x2354deb7, "atom_set_mach_params" },
	{ 0xcd130c6b, "sof_fw_ready" },
	{ 0xefa4a41a, "atom_irq_handler" },
	{ 0xb0fbe61a, "atom_reset" },
	{ 0xd16d27aa, "atom_get_window_offset" },
	{ 0xcc6333ae, "sof_pci_remove" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xeb5f1bee, "sof_mailbox_read" },
	{ 0x60b79061, "sof_mailbox_write" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x755923ea, "atom_dai" },
	{ 0x7f315ff0, "sof_io_read64" },
	{ 0x502ccbb8, "sof_block_write" },
	{ 0xd2404c85, "snd_sof_parse_module_memcpy" },
	{ 0x710124f1, "atom_send_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf83efb27, "sof_pci_probe" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x8d31eb, "atom_run" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3503e0b1, "atom_irq_thread" },
	{ 0xe455f3dc, "sof_xtensa_arch_ops" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0xc01e43a8, "snd_sof_dsp_update_bits64" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd8e07fe0, "sof_io_write64" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xbbe5164f, "snd_sof_debugfs_add_region_item_iomem" },
	{ 0x304a1d19, "sof_block_read" },
};

MODULE_INFO(depends, "snd-sof,snd-sof-intel-atom,snd-sof-pci,snd-sof-xtensa-dsp");

MODULE_ALIAS("pci:v00008086d0000119Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B950D75686473D07DB214A0");
