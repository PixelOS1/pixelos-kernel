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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb563e547, "snd_hdac_i915_set_bclk" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0x38ce402b, "azx_interrupt" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xccf2840, "param_get_int" },
	{ 0xee111615, "param_ops_int" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0xdecf6288, "snd_hda_lock_devices" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xab7e4787, "snd_hdac_bus_alloc_stream_pages" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0x9c0687f5, "snd_hdac_set_codec_wakeup" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xe14e9084, "azx_codec_configure" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x8adca48b, "pci_match_id" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7f42571f, "snd_pci_quirk_lookup" },
	{ 0x9a908c6, "pci_get_class" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0xf2c82101, "param_set_int" },
	{ 0x928bce91, "snd_hdac_bus_parse_capabilities" },
	{ 0xc5d9d883, "pm_runtime_forbid" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0x41f11d50, "azx_stop_chip" },
	{ 0x5940f56, "snd_hdac_acomp_exit" },
	{ 0xea6e2497, "snd_hda_set_power_save" },
	{ 0xbd5b6eac, "snd_card_disconnect" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x9aed847b, "vga_switcheroo_register_audio_client" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x8c0d9cc, "vga_switcheroo_unregister_client" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x7c04012c, "snd_hdac_display_power" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x6fc0cfdf, "snd_device_new" },
	{ 0x1398b16b, "bpf_trace_run1" },
	{ 0x74e33f2e, "azx_init_chip" },
	{ 0x2d8a9a52, "snd_hda_load_patch" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x17317902, "azx_free_streams" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0xb2a82b2, "azx_bus_init" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2901806, "pci_get_domain_bus_and_slot" },
	{ 0x7c34f8cb, "azx_get_pos_posbuf" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa2545864, "pci_pr3_present" },
	{ 0x868319dd, "request_firmware_nowait" },
	{ 0x9145cc02, "snd_hda_unlock_devices" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0xa13e8de6, "param_ops_bint" },
	{ 0x6a971edd, "snd_card_new" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x37f7ea07, "snd_hdac_i915_init" },
	{ 0xa916b694, "strnlen" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc4fd1679, "pci_intx" },
	{ 0x18e79345, "azx_get_pos_lpib" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xf9e6c2ab, "snd_hdac_bus_exit" },
	{ 0x727fc9dd, "snd_hdac_bus_free_stream_pages" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0xf249991, "azx_stop_all_streams" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xa2e19f3b, "snd_intel_dsp_driver_probe" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe2e2070b, "azx_init_streams" },
	{ 0xe4161ca3, "snd_card_free" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbcee5d64, "azx_probe_codecs" },
	{ 0x826b624c, "snd_hdac_bus_enter_link_reset" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x83453188, "vga_switcheroo_get_client_state" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec,snd-pcm,snd,snd-intel-dspcfg");

MODULE_ALIAS("pci:v00008086d00001C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008CA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A270sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A171sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D71sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A348sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F0C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003DC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000038C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000490Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004F90sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004F91sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004F92sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B58sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003198sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B56sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000811Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000080Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002284sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002668sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000269Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000284Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000293Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000293Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A3Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A6Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00001002d0000437Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004383sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000780Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001457sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001487sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000157Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000015E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001308sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000157Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000015B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000793Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007919sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000960Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000970Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009840sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA58sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA88sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA90sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009902sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAA8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAD8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAE0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAE8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAF0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAF8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AB00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AB08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AB10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AB18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AB20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AB28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AB38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003288sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009140sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00007502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005461sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00006549d00001200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00006549d00002200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00005011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017F3d00003010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015ADd00001977sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00001022d*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00001D17d00003288sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E275813CA894F5E71E4B097");
