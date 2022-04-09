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
	{ 0xf9a482f9, "msleep" },
	{ 0xc3e06838, "snd_sof_dsp_panic" },
	{ 0x28e09af1, "iosf_mbi_available" },
	{ 0x85df9b6c, "strsep" },
	{ 0x99aade60, "snd_sof_ipc_reply" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x97e5c1d2, "snd_sof_ipc_get_reply" },
	{ 0x37cd21cb, "sof_print_oops_and_stack" },
	{ 0x2fd650e3, "snd_sof_ipc_msgs_rx" },
	{ 0x83ff4c07, "snd_soc_acpi_find_machine" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xeb5f1bee, "sof_mailbox_read" },
	{ 0x60b79061, "sof_mailbox_write" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6f488baa, "devm_kstrdup" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1ea89e72, "snd_sof_dsp_update_bits64_unlocked" },
	{ 0xc01e43a8, "snd_sof_dsp_update_bits64" },
	{ 0xcea381dd, "x86_match_cpu" },
};

MODULE_INFO(depends, "snd-sof,snd-soc-acpi");


MODULE_INFO(srcversion, "6A268EB6EE13021023B0A5C");
