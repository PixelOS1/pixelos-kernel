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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe1363409, "nfc_hci_send_event" },
	{ 0xb8ad7a9d, "nfc_dep_link_is_up" },
	{ 0x7250d4e, "nfc_targets_found" },
	{ 0xe357fe1f, "nfc_hci_set_param" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7329706f, "nfc_hci_allocate_device" },
	{ 0xd9963c86, "nfc_tm_activated" },
	{ 0xe4abd4f1, "nfc_hci_get_clientdata" },
	{ 0xf589447f, "nfc_hci_send_cmd" },
	{ 0x459f3f88, "skb_push" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xd3dd3fce, "nfc_set_remote_general_bytes" },
	{ 0xda367748, "nfc_hci_register_device" },
	{ 0x3fa6ee9f, "nfc_get_local_general_bytes" },
	{ 0x11d4d96a, "nfc_hci_free_device" },
	{ 0xdd231c55, "nfc_hci_sak_to_protocol" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8fc60be8, "nfc_hci_unregister_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x74fe3670, "nfc_hci_result_to_errno" },
	{ 0x45b177ae, "nfc_tm_data_received" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x37a0cba, "kfree" },
	{ 0xa27d0855, "nfc_hci_send_cmd_async" },
	{ 0x26f324fd, "nfc_hci_get_param" },
	{ 0x24e48d13, "skb_put" },
	{ 0x1dca56fd, "nfc_hci_set_clientdata" },
};

MODULE_INFO(depends, "hci,nfc");


MODULE_INFO(srcversion, "88A2C0070B999B1A539081C");
