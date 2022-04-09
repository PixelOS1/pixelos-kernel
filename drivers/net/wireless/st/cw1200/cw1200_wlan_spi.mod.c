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
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf9a482f9, "msleep" },
	{ 0x70a42da4, "cw1200_irq_handler" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x88786b87, "gpio_to_desc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0x52345e6e, "spi_setup" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xf55fc177, "cw1200_core_release" },
	{ 0x1ecf266d, "cw1200_can_suspend" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xbed205fd, "gpiod_direction_output_raw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x43469f8e, "spi_sync" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfe990052, "gpio_free" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xa6b4a11f, "gpiod_set_raw_value" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x379d33af, "cw1200_core_probe" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "cw1200_core");


MODULE_INFO(srcversion, "622501ACF5B95CFC6A411B6");
