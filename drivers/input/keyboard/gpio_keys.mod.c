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
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x2365d364, "pm_relax" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x20dbf27, "bitmap_alloc" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x7ce0d551, "gpiod_get_value_cansleep" },
	{ 0x9a2a64b5, "gpiod_get_value" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x34091051, "fwnode_property_present" },
	{ 0x5963d5f4, "fwnode_property_read_string" },
	{ 0x485b0aa5, "fwnode_property_read_u32_array" },
	{ 0x69eb3786, "device_property_read_string" },
	{ 0x81f466c5, "device_property_present" },
	{ 0xc1da8a3f, "device_get_child_node_count" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0x5e9a3b01, "gpiod_cansleep" },
	{ 0x22160c22, "gpiod_set_debounce" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9f98429, "gpiod_is_active_low" },
	{ 0x88786b87, "gpio_to_desc" },
	{ 0x3cfdcf52, "devm_gpio_request_one" },
	{ 0xa2f7d24c, "devm_fwnode_gpiod_get_index" },
	{ 0x3024ba4b, "device_get_next_child_node" },
	{ 0x423d2e97, "devm_request_any_context_irq" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x5aff3b28, "pm_stay_awake" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb7214e95, "pm_wakeup_dev_event" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x96848186, "scnprintf" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x331337dc, "input_event" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x794d1829, "input_device_enabled" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-keys");
MODULE_ALIAS("of:N*T*Cgpio-keysC*");

MODULE_INFO(srcversion, "D8DBD221A795F8D7FCC2729");
