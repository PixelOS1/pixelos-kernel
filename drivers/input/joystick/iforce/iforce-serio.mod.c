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
	{ 0xfbfb0f09, "serio_unregister_driver" },
	{ 0x789f1c2d, "__serio_register_driver" },
	{ 0x36b0bf49, "iforce_init_device" },
	{ 0xcbd8b7e8, "serio_open" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7b284313, "iforce_process_packet" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb0a7aeba, "iforce_send_packet" },
	{ 0x37a0cba, "kfree" },
	{ 0x53a2aa95, "serio_close" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "iforce");

MODULE_ALIAS("serio:ty02pr1Did*ex*");

MODULE_INFO(srcversion, "10CA2E8E98A592BF193A7E7");
