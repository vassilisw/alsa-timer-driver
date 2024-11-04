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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x367fcc51, "module_layout" },
	{ 0xab83d064, "simple_attr_release" },
	{ 0x13a9642a, "debugfs_attr_write" },
	{ 0x14282d6a, "debugfs_attr_read" },
	{ 0x9ac08f3a, "no_llseek" },
	{ 0x87fba148, "debugfs_create_file" },
	{ 0x5f915748, "debugfs_create_dir" },
	{ 0xb08c33d8, "snd_timer_instance_free" },
	{ 0x2947bf0f, "snd_timer_open" },
	{ 0xa147d834, "snd_timer_instance_new" },
	{ 0xf1407ee0, "snd_timer_start" },
	{ 0x9657ea73, "snd_timer_stop" },
	{ 0x2bd8a069, "simple_attr_open" },
	{ 0x92997ed8, "_printk" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-timer");


MODULE_INFO(srcversion, "652B4B69D50B9B2C63A3F31");
