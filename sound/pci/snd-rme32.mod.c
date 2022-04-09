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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xfffd89db, "copy_from_user_toio" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0x342a2354, "copy_to_user_fromio" },
	{ 0xd349d253, "seq_printf" },
	{ 0x2967824e, "snd_pcm_lib_mmap_iomem" },
	{ 0xfe520adf, "snd_devm_card_new" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0x28b94e4, "snd_pcm_hw_constraint_list" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0x8ef4044f, "snd_ctl_notify" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x817d2986, "snd_pcm_set_sync" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7108062d, "snd_card_rw_proc_new" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x7c3bda2b, "snd_pcm_hw_constraint_minmax" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0x12566df4, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "snd,snd-pcm");

MODULE_ALIAS("pci:v0000EA60d00009896sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000EA60d00009898sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000EA60d00009897sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C6A90F6AE70FCAB8090B3E6");
