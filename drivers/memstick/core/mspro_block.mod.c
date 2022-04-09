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
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x6610a158, "memstick_unregister_driver" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x1d59830, "memstick_register_driver" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0xa9bc5712, "put_disk" },
	{ 0xa5abf0ca, "blk_cleanup_queue" },
	{ 0xdaada13, "del_gendisk" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x606db81c, "blk_mq_start_request" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4a4e5778, "memstick_init_req_sg" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x96155d3f, "__blk_mq_end_request" },
	{ 0xed759704, "__blk_rq_map_sg" },
	{ 0xe3eb4747, "blk_update_request" },
	{ 0x92997ed8, "_printk" },
	{ 0x9c5937c, "blk_cleanup_disk" },
	{ 0x75587220, "blk_mq_free_tag_set" },
	{ 0x2dc6b6ad, "device_add_disk" },
	{ 0x292d5851, "set_capacity" },
	{ 0x728fda38, "blk_queue_logical_block_size" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x20e7f7f7, "blk_queue_max_segment_size" },
	{ 0xf3e5664f, "blk_queue_max_segments" },
	{ 0x7f1218d3, "blk_queue_max_hw_sectors" },
	{ 0x545f9a57, "__blk_mq_alloc_disk" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x4db180ad, "blk_mq_alloc_sq_tag_set" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfa733058, "memstick_set_rw_addr" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x96848186, "scnprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8cc2a0ef, "memstick_new_req" },
	{ 0xae50437c, "memstick_init_req" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x45bfb450, "blk_mq_stop_hw_queues" },
	{ 0x42b94174, "blk_mq_start_hw_queues" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "memstick");


MODULE_INFO(srcversion, "0DE29FC2192AD1CD6661790");
