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
	{ 0x5426eab, "vb2_core_streamoff" },
	{ 0xee111615, "param_ops_int" },
	{ 0xc4dbed78, "vb2_core_dqbuf" },
	{ 0x436560f9, "vb2_mmap" },
	{ 0xf32952d9, "vb2_core_qbuf" },
	{ 0x2e33edf2, "vb2_core_querybuf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xabc685dd, "vb2_core_streamon" },
	{ 0x7216fa3b, "vb2_core_poll" },
	{ 0x7698c5d0, "vb2_read" },
	{ 0x2e6407fc, "vb2_core_prepare_buf" },
	{ 0xfb578fc5, "memset" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x8834fe98, "video_unregister_device" },
	{ 0xc5cb0bb9, "v4l2_event_pending" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa85f262, "v4l2_fh_release" },
	{ 0x897db409, "media_request_put" },
	{ 0x4b5e966a, "vb2_core_queue_release" },
	{ 0x3a88b218, "vb2_request_buffer_cnt" },
	{ 0x592e9227, "vb2_write" },
	{ 0x3931120c, "media_request_get_by_fd" },
	{ 0x761527a1, "put_device" },
	{ 0x3fbdc840, "video_devdata" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x16e6d67f, "get_device" },
	{ 0x9965d71c, "vb2_core_create_bufs" },
	{ 0x50a3a39b, "vb2_core_expbuf" },
	{ 0xf967c912, "vb2_core_reqbufs" },
	{ 0xb2c5f0ab, "vb2_verify_memory_type" },
	{ 0xa959da80, "vb2_core_queue_init" },
	{ 0x4f22ad07, "vb2_buffer_in_use" },
};

MODULE_INFO(depends, "videobuf2-common,videodev,mc");


MODULE_INFO(srcversion, "C8C5F2FE541114D792F61F0");
