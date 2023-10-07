# PersiaOS
OS can be used by many type of devices such as servers, clients by Users Manager, PXE client, UI, ..., routers by IPv6 Sub Networking router, PXE server, ...

## Services
All services work with [sRPC protocol](https://github.com/SabzCity/internet/blob/master/sRPC.md). You can call them from any language with related SDK. As protocol standard each service categorized to get 32 bit identifier and each exported function inside each service get next 32 bit identifier, So each exported function have 64bit unique identifier in all life time of this codebase.

## Architecture
[See Architecture in Diagram](https://www.draw.io/?lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=Untitled%20Diagram.xml#R7VltT9swEP41kWASVV778pEWNhBjQxS0z27iJh5OnDkubfj1OydO28TpaKFQkCYh5Dyx73zPvfjiGs4oXnzjKI2uWYCpYZvBwnDODNvu92z4L4G8BFxvUAIhJ0EJWStgTJ6wAk2FzkiAs9pEwRgVJK2DPksS7Isahjhn8%2Fq0KaN1rSkKsQaMfUR19BcJRKTQrueuXlxgEkaVaqurDIxRNVuZkkUoYPM1yDk3nBFnTJSjeDHCVJJXEVOu%2B7rh7XJnHCdimwXKE4%2BIzpRxal8ir6ydR0TgcYp8%2BTwHhxrOMBIxhScLhiQGa0%2BztCTaBESJxFzgxcZtWUtjIUowi7HgOUxRC5yKn7zyvHqer%2Fh2egqL1qh2PQUi5eNwKXvFAgwUEe2kuBopGZo8dXwi8l3ZQRUxU7LAIH44JZSOGGW8WO4EHu4HLuCZ4OwBV28SloC8IQO5UinI2hexToNYSyfWcluIXYKvIbarERvnnc3cwmJIaUnEriy%2FE1NtEdjbA089jSfGw49KlGsejqi%2BRtT9pWF3KagYTjiMQlEY2URGLI5RAkJO9XeUQaXfRkhxuBE5uU3MCezrjGQpRZKrEUsgwVvEymk%2FmCBTECQIS9oU71Zy3iD27YHu0n5bkdiHT6vwWXPqLZsJzLfxyeWNYYMG8348LAedTuf1lL5J2tgv47i%2FB4oHz5%2F60JikckhJ8lAn4zcWIldNGZoJJs8pLiIWsgTR74yltTjEgdZLPcvQGgNeCwMVxjGFlHmsi2%2BjRWm4YQQUb%2BwxNGYzNuM%2BVqvWe6iGoO7gGUEC8RALTVDhpaXZ2%2BWGpXnuy0c9F7QDtP9%2B54Kl97W3uPQnoNcogZ41lnZ8yNLgWYcrDZbTUhtKkgLy2Cy8WYqSChsLxuWHk22eJyGB%2FlXNAY3r09bgmsDD0941D0i7%2Fs2xJe2nMxGBgY32YUvSt9Kw%2Bdzdp5ajm9mEEv8K58efPnKcllL3ZpHjvTRysjz7vOFyR2JcdniUhfU%2B79OETbPOv2vY6N%2BYbTT%2FHJefMYKTCfTgATxdwIcTbevGj8ZVI3K8Qwwc3g3NTvxd3fC%2FFTf0Vtxt9oAvbcU1Qftrxastb6q7ax7s%2FpnJ%2B9whhKg4QZSESXFjYPrAfpFI6v2%2F6t0F4sEc%2FAXLjq4wTzDd9Zh8u70ZvZH8%2Byjb%2BQkNEUw1Ze16zYkg91DPN44z8oQmxQR5IZvKOCoiyxsa3pmsT5CFWZmQRbkqLTijeCpFyTIlL4xOFSxkhsq9%2ByQJ74p0PXH3VNS8Ria0NLPLm7raDfruVQ0eV79YlKm0%2Bt3HOf8L)    
Distributed Operating System on [Monolithic](https://en.wikipedia.org/wiki/Monolithic_kernel), [Unikernel](https://en.wikipedia.org/wiki/Unikernel), [Exokernel](https://en.wikipedia.org/wiki/Exokernel), [Microkernel](https://en.wikipedia.org/wiki/Microkernel) and [Container Concepts](https://en.wikipedia.org/wiki/Operating-system-level_virtualization) but not tools that use them like docker, ... concepts! Tools like docker just born because file systems and networks problem in isolation and we fix that problem on related layer not invent new tools!

### User Authentication
Each user must have valid public key. New CPU structures have a unique immutable key that we use to improve security.

### Services Manager
Each services(application) must have validated domain space e.g. my.sabz.city

#### Resources Authorization
Authorization can set to specific resource on specific domain. It looks like [FreeBSD JAIL](https://en.wikipedia.org/wiki/FreeBSD_jail) or [Linux CGroups](https://en.wikipedia.org/wiki/Cgroups) or [Linux LXC](https://en.wikipedia.org/wiki/LXC) or [Docker](https://en.wikipedia.org/wiki/Docker_(software)) that implement [Operating System Level Virtualization](https://en.wikipedia.org/wiki/Operating-system-level_virtualization)
Services can get minimum and maximum resource for accounting purpose e.g. RAM-min:1Gb, RAM-max:2Gb

### Data Packet Routing
Read more in [internet](https://github.com/SabzCity/internet) repository

#### Ethernet
- OS support multi NIC (Network interface controller). OS pass frames to router service(app) that will route packets between services(app) and NICs.
- OS use resource authorization mechanism to [schedule](https://en.wikipedia.org/wiki/Network_scheduler) packet in each NIC by service registration data.
- OS doesn't support fragmentation in any layer. App must respect MTU value from related method and just send max packet size otherwise packet will be drop at upper layer.

#### Internet
- Just support dedicated [internet](https://github.com/SabzCity/internet) protocol! So every where you see IP it means dedicated IP!
- Each service(app) has unique IP, So OS don't bother to do upper layer like transport layer!
- OS doesn't have any local IP! Detect device MAC after ARP lookup and Maybe packet route internally!
So we don't have something like localhost or 127.0.0.1 due different in architecture.

#### USB
Nature of [USB protocol](https://en.wikipedia.org/wiki/USB_(Communications)#Protocol_layer) have enough data to route data packet easily and secure between services and devises.

#### Firewall
We suggest do firewall in ::/64 subnet router network level. each IP can send block signal to router. With this approach we can have both physical and upper layer security. If abuser send data to inner network services, It will easy to locate physically and remove it from router.

## How to install and use
Not implement yet to install or use!

## Read more about kernels concept
- https://www.ece.cmu.edu/~ganger/papers/exo-sosp97/exo-sosp97.html
- https://keetmalin.wixsite.com/keetmalin/single-post/2017/09/01/An-Introduction-on-Exokernel-Operating-Systems
- https://www.slideshare.net/hawxchen/talk-exokernel-vs-24940177
- https://www.slideshare.net/VimukthiWickramasing/exokernels-group-a
- https://www.inso.tuwien.ac.at/uploads/media/OSKP_MonoMicroExo.pdf
- https://wiki.osdev.org

### Other Implementation
- https://www.qubes-os.org
- https://github.com/HawxChen/-LibraryOS-Exokernel_Implementation

## Production Ready!?
This OS is under development and not ready to use in real production. It can have breakable changes until version 1 release.
But we are glad to hear your experience or idea about this concept.
