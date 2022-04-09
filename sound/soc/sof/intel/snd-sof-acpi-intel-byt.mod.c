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
	{ 0xeacbcb77, "atom_get_mailbox_offset" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x704432b3, "sof_acpi_remove" },
	{ 0xc0755f5d, "sof_ipc_pcm_params" },
	{ 0x28e09af1, "iosf_mbi_available" },
	{ 0x802467c2, "snd_intel_acpi_dsp_driver_probe" },
	{ 0x759dbbcb, "sof_machine_unregister" },
	{ 0xf3cf2de5, "sof_ipc_msg_data" },
	{ 0x79eea832, "sof_stream_pcm_close" },
	{ 0x527a0374, "sof_stream_pcm_open" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x6be2dd94, "sof_io_read" },
	{ 0x2354deb7, "atom_set_mach_params" },
	{ 0xf752e98c, "acpi_match_device" },
	{ 0xcd130c6b, "sof_fw_ready" },
	{ 0xefa4a41a, "atom_irq_handler" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0xb0fbe61a, "atom_reset" },
	{ 0xd16d27aa, "atom_get_window_offset" },
	{ 0xb361efd9, "sof_acpi_probe" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xeb5f1bee, "sof_mailbox_read" },
	{ 0x60b79061, "sof_mailbox_write" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8d37ad0a, "snd_soc_acpi_intel_cherrytrail_machines" },
	{ 0x755923ea, "atom_dai" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0x7f315ff0, "sof_io_read64" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x502ccbb8, "sof_block_write" },
	{ 0x16c1fc93, "snd_soc_acpi_intel_baytrail_machines" },
	{ 0xd2404c85, "snd_sof_parse_module_memcpy" },
	{ 0x710124f1, "atom_send_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf29f6a07, "sof_acpi_pm" },
	{ 0x8d31eb, "atom_run" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3503e0b1, "atom_irq_thread" },
	{ 0xe455f3dc, "sof_xtensa_arch_ops" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0xc01e43a8, "snd_sof_dsp_update_bits64" },
	{ 0xd8e07fe0, "sof_io_write64" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0xbbe5164f, "snd_sof_debugfs_add_region_item_iomem" },
	{ 0x304a1d19, "sof_block_read" },
};

MODULE_INFO(depends, "snd-sof,snd-sof-intel-atom,snd-sof-acpi,snd-intel-dspcfg,snd-soc-acpi-intel-match,snd-sof-xtensa-dsp");

MODULE_ALIAS("acpi*:80860F28:*");
MODULE_ALIAS("acpi*:808622A8:*");

MODULE_INFO(srcversion, "54B0F956B88C1732344361B");
