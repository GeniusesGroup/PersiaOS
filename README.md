# PersiaOS
OS can be used by 3 type of computers:
- servers: 
- clients: Users Manager, PXE client, UI,
- routers: IPv6 Sub Networking router, PXE server, 
Each build has specific features.

## Architecture
Distributed Operating System on [Monolithic](https://en.wikipedia.org/wiki/Monolithic_kernel) [Unikernel](https://en.wikipedia.org/wiki/Unikernel), [Exokernel](https://en.wikipedia.org/wiki/Exokernel), [Microkernel](https://en.wikipedia.org/wiki/Microkernel) and [Container Concepts](https://en.wikipedia.org/wiki/Operating-system-level_virtualization).

### User Authentication
Each user must have valid public key. New CPU structures have a unique immutable key that we use to improve security.

### Services Manager
Each services(application) must have validated domain space e.g. my.sabz.city

#### Resources Authorization
Authorization can set to specific resource on specific domain. It looks like [FreeBSD JAIL](https://en.wikipedia.org/wiki/FreeBSD_jail) or [Linux CGroups](https://en.wikipedia.org/wiki/Cgroups) or [Linux LXC](https://en.wikipedia.org/wiki/LXC) or [Docker](https://en.wikipedia.org/wiki/Docker_(software)) that implement [Operating System Level Virtualization](https://en.wikipedia.org/wiki/Operating-system-level_virtualization)
Services can get minimum and maximum resource for accounting purpose e.g. RAM-min:1Gb, RAM-max:2Gb

### Data Packet Routing
- OS don't change or cut any data, just routing!


#### USB
Nature of [USB protocol](https://en.wikipedia.org/wiki/USB_(Communications)#Protocol_layer) have enough data to route data packet easily and secure between services and devises.

#### IP
- OS support multi IPv6 on multi NIC (Network interface controller). OS route ip packet between services(app) and NICs.
- OS use resource authorization mechanism to [schedule](https://en.wikipedia.org/wiki/Network_scheduler) packet in each NIC by service registration data.
- Each IP has public key that made by ::/64 router and send to owner of IP.
- Each IP packet encrypt by paired EncryptionKey before send over MAC link. Due nature of MAC frame, MAC header can't be encrypted.
- OS doesn't support fragmentation in any layer. App must respect MTU value from related method
and just send max packet size otherwise packet will be drop at upper layer.
- Just support IPv6! due IPv4 must deprecated along time ago! So every where you see IP it means IPv6!
- Each service(app) has unique IP, So OS don't bother to do upper layer like transport layer!
We strongly suggest don't use old ipv4 idea protocols like udp or tcp!
- Developers can use auto-generation mechanism to decrease developing process overhead. We introduce [ChaparKhane](https://github.com/sabzcity/ChaparKhane).
- OS doesn't have any local IP! Detect device MAC after ARP lookup and Maybe packet route internally!
So we don't have something like localhost or 127.0.0.1 due different in architecture.

##### Firewall
We suggest do firewall in ::/64 subnet router network level. each IP can send block signal to router. With this approach we can have both physical and upper layer security. If abuser send data to inner network services, It will easy to locate physically and remove it from router.


### Storage Engine
We need to store and [retrieve](https://en.wikipedia.org/wiki/Information_retrieval) data in multi model! So OS don't have any schema forces in storage engine layer like [FileSystems](https://en.wikipedia.org/wiki/File_system) or RDBMS for security and performance reason. Services(apps) can connect to device (Raw data) without any additional layer.

#### Pros
- It is very easy to have distributed storage with [PersiaDB](https://github.com/sabzcity/PersiaDB)
- Improve security because naked device (without FileSystems) can't read by any OS.
- Improve performance because no additional layer.
- Have distributed storage engine (file system)! because all device storage capabilities be as one storage capabilities in top layer of database.


## How to install and use
Not implement yet to install or use!

## Read more about kernels concept
- https://www.ece.cmu.edu/~ganger/papers/exo-sosp97/exo-sosp97.html
- https://keetmalin.wixsite.com/keetmalin/single-post/2017/09/01/An-Introduction-on-Exokernel-Operating-Systems
- https://www.slideshare.net/hawxchen/talk-exokernel-vs-24940177
- https://www.slideshare.net/VimukthiWickramasing/exokernels-group-a
- https://www.inso.tuwien.ac.at/uploads/media/OSKP_MonoMicroExo.pdf

### Other Implementation
- https://github.com/HawxChen/-LibraryOS-Exokernel_Implementation

## Production Ready!?
This OS is under development and not ready to use in real production. It can have breakable changes until version 1 release.
But we are glad to hear your experience or idea about this concept.