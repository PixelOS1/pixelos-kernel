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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xe9eff1ff, "iio_trigger_notify_done" },
	{ 0xf3445b57, "spi_sync_locked" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc3434aab, "devm_iio_trigger_alloc" },
	{ 0xfb578fc5, "memset" },
	{ 0x50063258, "__devm_iio_trigger_register" },
	{ 0x9e32c99e, "iio_trigger_poll" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x43469f8e, "spi_sync" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x16351f4d, "spi_bus_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe1c64e92, "iio_device_id" },
	{ 0x16e6d67f, "get_device" },
	{ 0x96d01fb1, "__module_get" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x2bce9694, "iio_validate_scan_mask_onehot" },
	{ 0xa6257a2f, "complete" },
	{ 0x2a31a433, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xa79b67cc, "spi_bus_unlock" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "5D3E1296815F12AF3208C34");
