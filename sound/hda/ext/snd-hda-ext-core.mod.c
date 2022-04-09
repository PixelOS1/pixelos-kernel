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
	{ 0x7549c36, "driver_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8060ef8f, "snd_hdac_device_exit" },
	{ 0xfe95e1e6, "snd_hda_bus_type" },
	{ 0xc76ea736, "snd_hdac_bus_init_cmd_io" },
	{ 0xa431f6c8, "snd_hdac_bus_stop_cmd_io" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x665c1d52, "snd_hdac_stream_assign" },
	{ 0x4ded1ecc, "snd_hdac_device_init" },
	{ 0xcb5ce62, "snd_hdac_device_unregister" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x2e6ab600, "snd_hdac_stream_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd8e0d5d1, "snd_hdac_bus_init" },
	{ 0xd23a130b, "snd_hdac_device_register" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xf9e6c2ab, "snd_hdac_bus_exit" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc473cf04, "snd_hdac_bus_link_power" },
	{ 0x89fc6fe4, "snd_hdac_stream_release" },
};

MODULE_INFO(depends, "snd-hda-core");


MODULE_INFO(srcversion, "1EAD7C4AB90D35A05A0F015");
