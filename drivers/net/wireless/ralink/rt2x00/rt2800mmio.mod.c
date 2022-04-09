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
	{ 0xc23b1a86, "rt2800_disable_wpdma" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5118f8fa, "rt2x00lib_beacondone" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x2140e15, "rt2800_txdone" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xefe66057, "rt2800_config" },
	{ 0xa7168dec, "rt2800_get_txwi_rxwi_size" },
	{ 0xffba5303, "rt2x00lib_pretbtt" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x38d72a89, "rt2800_wait_wpdma_ready" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xba7220c5, "rt2800_process_rxwi" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xa6d414fb, "rt2800_txdone_nostatus" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x45dbcc64, "rt2800_probe_hw" },
	{ 0xe6960b2d, "rt2800_txstatus_timeout" },
	{ 0xfba3319d, "rt2x00queue_get_entry" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa41d2a2d, "rt2x00mmio_rxdone" },
	{ 0xba0e2c21, "rt2800_txstatus_pending" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6807a98a, "rt2800_enable_radio" },
};

MODULE_INFO(depends, "rt2800lib,rt2x00lib,rt2x00mmio");


MODULE_INFO(srcversion, "5F8F70691E993A14E1FB766");
