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
	{ 0xa6b25eeb, "deregister_atm_ioctl" },
	{ 0x35cac49d, "register_atm_ioctl" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xf91c8bc0, "skb_realloc_headroom" },
	{ 0x459f3f88, "skb_push" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x30598a28, "vcc_process_recv_queue" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x33def6bb, "ppp_register_channel" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x623f6dd, "ppp_unit_number" },
	{ 0xe7f6db49, "ppp_channel_index" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x978e8f2d, "ppp_output_wakeup" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x487a712d, "ppp_input_error" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xdfbcf889, "module_put" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0x5e0b04e8, "ppp_unregister_channel" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xed18bb02, "ppp_input" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm,ppp_generic");


MODULE_INFO(srcversion, "624DB693C091F1C66D94F7A");
