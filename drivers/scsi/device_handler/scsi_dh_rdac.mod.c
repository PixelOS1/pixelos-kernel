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
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9e12f048, "scsi_unregister_device_handler" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x92997ed8, "_printk" },
	{ 0x81cbb87f, "scsi_register_device_handler" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9f37056, "__scsi_execute" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1259bddc, "scsi_get_vpd_page" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EC03F3D159D3ECBBA044409");
