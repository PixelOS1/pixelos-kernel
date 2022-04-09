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
	{ 0xf9a482f9, "msleep" },
	{ 0xb2f5fe87, "snd_sof_load_firmware_memcpy" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x704432b3, "sof_acpi_remove" },
	{ 0xc0755f5d, "sof_ipc_pcm_params" },
	{ 0xc3e06838, "snd_sof_dsp_panic" },
	{ 0x802467c2, "snd_intel_acpi_dsp_driver_probe" },
	{ 0x759dbbcb, "sof_machine_unregister" },
	{ 0xf3cf2de5, "sof_ipc_msg_data" },
	{ 0x79eea832, "sof_stream_pcm_close" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x99aade60, "snd_sof_ipc_reply" },
	{ 0x527a0374, "sof_stream_pcm_open" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x6be2dd94, "sof_io_read" },
	{ 0xf752e98c, "acpi_match_device" },
	{ 0xcd130c6b, "sof_fw_ready" },
	{ 0x33a4d7e5, "snd_soc_acpi_intel_broadwell_machines" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xd8266b8, "snd_sof_dsp_update_bits" },
	{ 0x97e5c1d2, "snd_sof_ipc_get_reply" },
	{ 0x37cd21cb, "sof_print_oops_and_stack" },
	{ 0x8532c706, "snd_sof_dsp_update_bits_unlocked" },
	{ 0x2fd650e3, "snd_sof_ipc_msgs_rx" },
	{ 0x83ff4c07, "snd_soc_acpi_find_machine" },
	{ 0xb361efd9, "sof_acpi_probe" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xeb5f1bee, "sof_mailbox_read" },
	{ 0x60b79061, "sof_mailbox_write" },
	{ 0x7f315ff0, "sof_io_read64" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x502ccbb8, "sof_block_write" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd2404c85, "snd_sof_parse_module_memcpy" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf29f6a07, "sof_acpi_pm" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe455f3dc, "sof_xtensa_arch_ops" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0xd8e07fe0, "sof_io_write64" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xbbe5164f, "snd_sof_debugfs_add_region_item_iomem" },
	{ 0x304a1d19, "sof_block_read" },
};

MODULE_INFO(depends, "snd-sof,snd-sof-acpi,snd-intel-dspcfg,snd-soc-acpi-intel-match,snd-soc-acpi,snd-sof-xtensa-dsp");

MODULE_ALIAS("acpi*:INT3438:*");

MODULE_INFO(srcversion, "17FCD132A89BC42AA3CCAA1");
