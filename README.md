# PersiaOS
OS can be used by many type of devices such as servers, clients by Users Manager, PXE client, UI, ..., routers by IPv6 Sub Networking router, PXE server, ...

## Architecture
Distributed Operating System on [Monolithic](https://en.wikipedia.org/wiki/Monolithic_kernel), [Unikernel](https://en.wikipedia.org/wiki/Unikernel), [Exokernel](https://en.wikipedia.org/wiki/Exokernel), [Microkernel](https://en.wikipedia.org/wiki/Microkernel) and [Container Concepts](https://en.wikipedia.org/wiki/Operating-system-level_virtualization) but not tools that use them like docker, ... concepts. Tools like docker just born because file systems and networks problem in isolation and we fix that problem on related layer not invent new tools.

## Memory Model
All apps can access to Kernel shared memory by libOS(libraryOS). It will use to mux network packets, storages caches, ... without need to copy it multiple time. We must separate protection from management.

## Device Drivers
Live in libOS(libraryOS)

## How to install and use
Not implement yet to install or use.

## Read more about kernels concept
- https://unikernel.org/
- https://www.ece.cmu.edu/~ganger/papers/exo-sosp97/exo-sosp97.html
- https://keetmalin.wixsite.com/keetmalin/single-post/2017/09/01/An-Introduction-on-Exokernel-Operating-Systems
- https://www.slideshare.net/hawxchen/talk-exokernel-vs-24940177
- https://www.slideshare.net/VimukthiWickramasing/exokernels-group-a
- https://www.inso.tuwien.ac.at/uploads/media/OSKP_MonoMicroExo.pdf
- https://wiki.osdev.org
- https://slideplayer.com/slide/4703158/

### Other Implementation
- https://github.com/nanovms/nanos
- https://www.qubes-os.org
- https://github.com/HawxChen/-LibraryOS-Exokernel_Implementation
- MirageOS
- IncludeOS
- Solo5
- https://github.com/unikraft/unikraft

## Production Ready!?
This OS is under development and not ready to use in real production. It can have breakable changes until version 1 release.
But we are glad to hear your experience or idea about this concept.
