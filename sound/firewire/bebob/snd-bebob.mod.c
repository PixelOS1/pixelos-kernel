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
	{ 0x3b081a8, "amdtp_domain_start" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7549c36, "driver_register" },
	{ 0x7486e70, "amdtp_domain_destroy" },
	{ 0xab68f087, "amdtp_domain_stream_pcm_ack" },
	{ 0xee111615, "param_ops_int" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x6dc50487, "fw_csr_string" },
	{ 0x977386c2, "avc_general_set_sig_fmt" },
	{ 0x6ea00aa2, "snd_info_create_card_entry" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3ff92c06, "fw_bus_type" },
	{ 0x5b5611cb, "amdtp_am824_set_midi_position" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xad32a2ab, "amdtp_am824_set_pcm_position" },
	{ 0x19a8efcb, "fw_schedule_bus_reset" },
	{ 0xd7ad819, "snd_rawmidi_set_ops" },
	{ 0xdd64e639, "strscpy" },
	{ 0x66d0ccc1, "snd_rawmidi_new" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xe31306b3, "cmp_connection_destroy" },
	{ 0xbee8f749, "fcp_avc_transaction" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0x16fbc86b, "avc_general_get_plug_info" },
	{ 0x46db7366, "amdtp_stream_get_max_payload" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xc606cefb, "cmp_connection_establish" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7829717a, "avc_general_get_sig_fmt" },
	{ 0xef9a91b9, "amdtp_domain_add_stream" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x8ef4044f, "snd_ctl_notify" },
	{ 0xf0d06086, "amdtp_stream_destroy" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6721d0f8, "snd_hwdep_new" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6a971edd, "snd_card_new" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0xe62ce96e, "amdtp_domain_stop" },
	{ 0x967336a7, "snd_pcm_hw_rule_add" },
	{ 0xa916b694, "strnlen" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe9969226, "amdtp_stream_pcm_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x817d2986, "snd_pcm_set_sync" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x16e6d67f, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x931b40a3, "amdtp_domain_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x12248497, "amdtp_domain_stream_pcm_pointer" },
	{ 0xc31a3eae, "fcp_bus_reset" },
	{ 0xd15123bb, "cmp_connection_break" },
	{ 0x7c3bda2b, "snd_pcm_hw_constraint_minmax" },
	{ 0x60fadfc9, "cmp_connection_init" },
	{ 0xa03973cb, "amdtp_am824_add_pcm_hw_constraints" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe4161ca3, "snd_card_free" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0x1d0ecd96, "amdtp_am824_init" },
	{ 0x3c250a16, "cmp_connection_release" },
	{ 0x450434c6, "amdtp_am824_midi_trigger" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0xd15aab8c, "cmp_connection_check_used" },
	{ 0xb0e602eb, "memmove" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0xffa7e5cf, "snd_fw_transaction" },
	{ 0x50dc2370, "amdtp_am824_set_parameters" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x962c98ce, "fw_run_transaction" },
	{ 0x1e606972, "cmp_connection_reserve" },
};

MODULE_INFO(depends, "snd-firewire-lib,firewire-core,snd,snd-rawmidi,snd-pcm,snd-hwdep");

MODULE_ALIAS("ieee1394:ven000040ABmo00010049sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven000040ABmo00010048sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00000A92mo00010000sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00000A92mo00010066sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00000A92mo00010001sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven000007F5mo00010048sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven000007F5mo00010049sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00000FF2mo00010065sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00000FF2mo00010067sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00001260mo00000001sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven0000022Emo00010067sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00001564mo00001204sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00001564mo00001604sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00001564mo00000006sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00001564mo00001616sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00001564mo00000610sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven000003DBmo00010048sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven000003DBmo0001EEEEsp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00000F1Bmo00010064sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven0000000Amo00030000sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00001496mo00050000sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00001496mo00060000sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00001496mo00070000sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00001496mo00080000sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00001496mo00000000sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven000019E5mo00000001sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00001A9Emo00000001sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00001198mo00010048sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00001198mo0000ADA8sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000003sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000004sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000007sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000005sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000002sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven0000A0DEmo0010000Bsp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven0000A0DEmo0010000Csp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven0000130Emo00000003sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven0000130Emo00000006sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven0000130Emo00000000sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven000007F5mo00010058sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven000007F5mo00010046sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010060sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010062sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo0000000Asp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010081sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo000100A1sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010070sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010071sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010091sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven0000A07Emo000000A9sp0000A02Dver*");
MODULE_ALIAS("ieee1394:ven00002327mo00020002sp0000A02Dver*");

MODULE_INFO(srcversion, "3855ABB5366E10F65D81ADF");
