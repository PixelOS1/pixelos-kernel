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
	{ 0x2d3385d3, "system_wq" },
	{ 0x1ec5a896, "em28xx_read_reg" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x88f2d039, "rc_unregister_device" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xee111615, "param_ops_int" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x36a42b, "em28xx_write_regs" },
	{ 0x89937627, "i2c_transfer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x56c8507e, "em28xx_register_extension" },
	{ 0xc410588, "rc_allocate_device" },
	{ 0x331337dc, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x453c3a6a, "em28xx_find_led" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x550c12a1, "rc_free_device" },
	{ 0xdbd297b3, "em28xx_toggle_reg_bits" },
	{ 0x73795756, "rc_keydown" },
	{ 0x7b86303e, "em28xx_unregister_extension" },
	{ 0x538003d4, "rc_register_device" },
	{ 0x55283f95, "em28xx_write_reg_bits" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x8a9b0b58, "i2c_probe_func_quick_read" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8aff2784, "em28xx_write_reg" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0xefc7653c, "input_allocate_device" },
};

MODULE_INFO(depends, "em28xx,rc-core,i2c-core");


MODULE_INFO(srcversion, "FA2160F9D4DCCF47832CC19");
