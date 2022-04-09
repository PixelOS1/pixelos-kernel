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
	{ 0x229d0e87, "hid_unregister_driver" },
	{ 0x357c7c39, "__hid_register_driver" },
	{ 0x2d43c3f7, "hid_parse_report" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcf2a6966, "up" },
	{ 0xa8b52982, "hid_hw_open" },
	{ 0xcb2cb33d, "hid_hw_start" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x6789dfbe, "hid_compare_device_paths" },
	{ 0x677f83f1, "usb_hid_driver" },
	{ 0x8d97594e, "hid_open_report" },
	{ 0x42ad8fea, "hid_hw_stop" },
	{ 0x29b7c46d, "hid_hw_close" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x90635166, "hid_add_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8a16e529, "hid_allocate_device" },
	{ 0xe04dd75c, "hid_destroy_device" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4a9bfc75, "hid_input_report" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeefcded2, "hid_hw_request" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x64acaa9d, "hid_hw_raw_request" },
	{ 0x92997ed8, "_printk" },
	{ 0x5495392, "hid_debug" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v0000046Dp0000C52B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C532");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C52F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C534");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C531");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C537");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C539");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C53A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C53F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C513");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C517");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C51B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C70E");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C70A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71C");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C713");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C714");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71E");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71F");

MODULE_INFO(srcversion, "1EDBA919DEC7B92DE057E86");
