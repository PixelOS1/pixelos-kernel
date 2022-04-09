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
	{ 0x8c3f37f9, "devm_rtc_nvmem_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x6971447a, "rtc_month_days" },
	{ 0x65cc7b69, "rtc_add_group" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xd349d253, "seq_printf" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x4859b8bb, "rtc_year_days" },
	{ 0x30e7fdd6, "rtc_update_irq" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x76af4d48, "devm_rtc_allocate_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0xa01d5cf6, "__devm_rtc_register_device" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xe4ec892b, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F00FF4974EFF65773EA3F4F");
