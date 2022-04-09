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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd93a9c2c, "release_sock" },
	{ 0xdf150c04, "sock_init_data" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x418dba4d, "sock_no_ioctl" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6ece8090, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf90d3ed4, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8371509, "nonseekable_open" },
	{ 0x5bdb7603, "sock_copy_user_timeval" },
	{ 0xfa225959, "sock_no_sendpage" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0xd0458486, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa164df89, "misc_register" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x6a551a05, "sock_no_socketpair" },
	{ 0xca1dc550, "sk_alloc" },
	{ 0xc23477d, "current_task" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0x23112f0a, "sock_no_listen" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xedd17b31, "sock_get_timeout" },
	{ 0x27a82dae, "sock_no_accept" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x87f244b9, "sk_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdfbcf889, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x15950b0c, "proto_register" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x2999843c, "sock_register" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6799d664, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x9fa69b02, "sk_error_report" },
	{ 0xed238617, "__put_cred" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf3fc8a70, "ns_capable_noaudit" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x96d01fb1, "__module_get" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7299BC81FBC3A0F427BDDCE");
