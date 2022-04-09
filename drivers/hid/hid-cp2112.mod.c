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
	{ 0xee111615, "param_ops_int" },
	{ 0x229d0e87, "hid_unregister_driver" },
	{ 0x357c7c39, "__hid_register_driver" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x96848186, "scnprintf" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x27d9398f, "gpiochip_add_data_with_key" },
	{ 0xf8049ecb, "handle_simple_irq" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x6626afca, "down" },
	{ 0x5c8bb90c, "i2c_add_adapter" },
	{ 0xcf2a6966, "up" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xa8b52982, "hid_hw_open" },
	{ 0xcb2cb33d, "hid_hw_start" },
	{ 0x8d97594e, "hid_open_report" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x2ebc17e6, "sysfs_chmod_file" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf92c8476, "gpiochip_get_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x64acaa9d, "hid_hw_raw_request" },
	{ 0x66d065e8, "hid_hw_output_report" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x42ad8fea, "hid_hw_stop" },
	{ 0x29b7c46d, "hid_hw_close" },
	{ 0x837887c6, "gpiochip_remove" },
	{ 0xd1aecac8, "gpiochip_free_own_desc" },
	{ 0x434b7816, "gpiochip_unlock_as_irq" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("hid:b0003g*v000010C4p0000EA90");

MODULE_INFO(srcversion, "E118C683F11DBF080CF80B8");
