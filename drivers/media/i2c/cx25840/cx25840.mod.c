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
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xbe0367a5, "v4l2_ctrl_cluster" },
	{ 0xee111615, "param_ops_int" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0xd03e3ff5, "v4l2_subdev_call_wrappers" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x89937627, "i2c_transfer" },
	{ 0xcdef13f6, "v4l2_ctrl_handler_free" },
	{ 0x57220fb, "v4l2_ctrl_new_std" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xda48e803, "media_entity_pads_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x644796ad, "v4l2_device_unregister_subdev" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd595fd58, "v4l2_ctrl_handler_setup" },
	{ 0x59c574b2, "v4l2_ctrl_handler_log_status" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xc1c32573, "v4l2_ctrl_handler_init_class" },
	{ 0x1564421, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xfe577272, "v4l2_i2c_subdev_init" },
};

MODULE_INFO(depends, "videodev,i2c-core,mc");

MODULE_ALIAS("i2c:cx25840");

MODULE_INFO(srcversion, "EBC253B10C6FEE61DB63519");
