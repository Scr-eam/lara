# lara
a beautiful kexploit.
> star this repo please :P

## support
lara will at its absolute best only ever support versions up to iOS 26.0.1/iOS 18.7.1. the exploit was patched after those versions.

currently tested on iOS 17.2.1 - 26.0.1.
If you run lara on your device, and it ends up working, please contact me on [discord](https://discord.com/users/919268666305024010) (@roooot.dev) and tell me:
1. your device
2. your iOS version
4. what you tested in lara (eg. Run Exploit, Init KFS, etc.)

If lara doesnt work on your device, and you want to help the project, please also provide your logs and iOS version.

## features:
### implemented:
- Font Overwrite
- 3 App Bypass
- File Manager (Full Disk r/w)
- DirtyZero 2 (Broken)

### coming soon:
- MobileGestalt Editor

## known issues:
- on iOS 17.x, the kernel may panic when lara is closed from the app switcher.
- downloading OTA updates does not work.
- dirtyzero does not work.
- ui is buggy on 17.x
- doesnt work on ipad m2?
- doesnt work on a18 pro?
- kernelcache download broken for some versions.

## installation:
<a href="https://celloserenity.github.io/altdirect/?url=https://raw.githubusercontent.com/rooootdev/lara/refs/heads/main/source.json" target="_blank">
   <img src="https://github.com/CelloSerenity/altdirect/blob/main/assets/png/AltSource_Blue.png?raw=true" alt="Add AltSource" width="200">
</a>
<a href="https://github.com/rooootdev/lara/releases/download/latest/lara.ipa" target="_blank"><img src="https://github.com/CelloSerenity/altdirect/blob/main/assets/png/Download_Blue.png?raw=true" alt="Download .ipa" width="200"></a>

## tips:
deleting and redownloading kernelcache is known to fix many issues. do this before asking me for support.  
closing and reopening the app can fix font change issues.
respringing is needed to apply springboard changes such as font changes.

## credits:
- opa334 for the kernel exploit poc, ChOma and XPF
- AppInstaller iOS for help with offsets
- AlfieCG for libgrabkernel2
