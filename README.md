# PersiaOS
OS can be used by many type of devices such as servers, clients by Users Manager, PXE client, UI, ..., routers by IPv6 Sub Networking router, PXE server, ...

## Transition
Anyone know transition form old ecosystem to new one is not one night schedule! So we make PersiaOS transition version to run in exiting OS to help users and developers to ready for completely transfer to PersiaOS ecosystem.

## Services
All services work with [sRPC transport protocol](https://github.com/SabzCity/ChaparKhane-go/blob/master/OSI-application-sRPC.go). You can call them from any language with related SDK. As protocol standard each service categorized to get 32 bit identifier and each exported function inside each service get next 32 bit identifier, So each exported function have 64bit unique identifier in all life time of this codebase.

## Architecture
[See Architecture in Diagram](https://www.draw.io/?lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=Untitled%20Diagram.xml#R7VltT9swEP41kWASVV778pEWNhBjQxS0z27iJh5OnDkubfj1OydO28TpaKFQkCYh5Dyx73zPvfjiGs4oXnzjKI2uWYCpYZvBwnDODNvu92z4L4G8BFxvUAIhJ0EJWStgTJ6wAk2FzkiAs9pEwRgVJK2DPksS7Isahjhn8%2Fq0KaN1rSkKsQaMfUR19BcJRKTQrueuXlxgEkaVaqurDIxRNVuZkkUoYPM1yDk3nBFnTJSjeDHCVJJXEVOu%2B7rh7XJnHCdimwXKE4%2BIzpRxal8ir6ydR0TgcYp8%2BTwHhxrOMBIxhScLhiQGa0%2BztCTaBESJxFzgxcZtWUtjIUowi7HgOUxRC5yKn7zyvHqer%2Fh2egqL1qh2PQUi5eNwKXvFAgwUEe2kuBopGZo8dXwi8l3ZQRUxU7LAIH44JZSOGGW8WO4EHu4HLuCZ4OwBV28SloC8IQO5UinI2hexToNYSyfWcluIXYKvIbarERvnnc3cwmJIaUnEriy%2FE1NtEdjbA089jSfGw49KlGsejqi%2BRtT9pWF3KagYTjiMQlEY2URGLI5RAkJO9XeUQaXfRkhxuBE5uU3MCezrjGQpRZKrEUsgwVvEymk%2FmCBTECQIS9oU71Zy3iD27YHu0n5bkdiHT6vwWXPqLZsJzLfxyeWNYYMG8348LAedTuf1lL5J2tgv47i%2FB4oHz5%2F60JikckhJ8lAn4zcWIldNGZoJJs8pLiIWsgTR74yltTjEgdZLPcvQGgNeCwMVxjGFlHmsi2%2BjRWm4YQQUb%2BwxNGYzNuM%2BVqvWe6iGoO7gGUEC8RALTVDhpaXZ2%2BWGpXnuy0c9F7QDtP9%2B54Kl97W3uPQnoNcogZ41lnZ8yNLgWYcrDZbTUhtKkgLy2Cy8WYqSChsLxuWHk22eJyGB%2FlXNAY3r09bgmsDD0941D0i7%2Fs2xJe2nMxGBgY32YUvSt9Kw%2Bdzdp5ajm9mEEv8K58efPnKcllL3ZpHjvTRysjz7vOFyR2JcdniUhfU%2B79OETbPOv2vY6N%2BYbTT%2FHJefMYKTCfTgATxdwIcTbevGj8ZVI3K8Qwwc3g3NTvxd3fC%2FFTf0Vtxt9oAvbcU1Qftrxastb6q7ax7s%2FpnJ%2B9whhKg4QZSESXFjYPrAfpFI6v2%2F6t0F4sEc%2FAXLjq4wTzDd9Zh8u70ZvZH8%2Byjb%2BQkNEUw1Ze16zYkg91DPN44z8oQmxQR5IZvKOCoiyxsa3pmsT5CFWZmQRbkqLTijeCpFyTIlL4xOFSxkhsq9%2ByQJ74p0PXH3VNS8Ria0NLPLm7raDfruVQ0eV79YlKm0%2Bt3HOf8L)   
Distributed Operating System on [Monolithic](https://en.wikipedia.org/wiki/Monolithic_kernel) [Unikernel](https://en.wikipedia.org/wiki/Unikernel), [Exokernel](https://en.wikipedia.org/wiki/Exokernel), [Microkernel](https://en.wikipedia.org/wiki/Microkernel) and [Container Concepts](https://en.wikipedia.org/wiki/Operating-system-level_virtualization) but not docker, ... concepts! Tools like docker just born because file systems and networks problem in isolation and we fix that problem on related layer not invent new tools!

### User Authentication
Each user must have valid public key. New CPU structures have a unique immutable key that we use to improve security.

### Services Manager
Each services(application) must have validated domain space e.g. my.sabz.city

#### Resources Authorization
Authorization can set to specific resource on specific domain. It looks like [FreeBSD JAIL](https://en.wikipedia.org/wiki/FreeBSD_jail) or [Linux CGroups](https://en.wikipedia.org/wiki/Cgroups) or [Linux LXC](https://en.wikipedia.org/wiki/LXC) or [Docker](https://en.wikipedia.org/wiki/Docker_(software)) that implement [Operating System Level Virtualization](https://en.wikipedia.org/wiki/Operating-system-level_virtualization)
Services can get minimum and maximum resource for accounting purpose e.g. RAM-min:1Gb, RAM-max:2Gb

### Data Packet Routing
OS don't change or cut any data, just routing!
- [Overall Network Topology in world size not just OS!!](https://www.draw.io/?lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=Topolgy.xml#R7V1bc9u4Ff41nmkfoiHuwGPiJNvMZNvMpjO72xcPLTE2G1nUSnTs9NcXoAheAIiiKFCmbWh3HJukQBL4voNzw8EFurx7%2FGUTr29%2FzRbJ8gJGi8cL9P4CQgIxkf%2BoIz93RwBFaHfkZpMuymP1ga%2Fp%2F5LyYFQevU8XybZ1YZ5lyzxdtw%2FOs9UqmeetY%2FFmkz20L%2FuWLdt3Xcc3iXXg6zxe2kd%2FTxf5bXkUUFGf%2BEeS3tzqW1OCd2eu4%2Fn3m012vypveAHRt%2BKzO30X68bKN93exovsoXEIfbhAl5ssy3e%2F3T1eJkvVu7rfdt%2F7uOds9eCbZJX3%2BQIq3%2BhHvLxP9CMXD5b%2F1L1xm98t5W%2FgAr3L7vNlukouq36P5MFv6XJ5mS2zTXE5uiw%2B8vg232Tfk8YZyjl4h%2BSZm028SOUT6nOrbJU0Dr9PN7L1NFsVpzaqy8rG9GhAdeQ2XqsnvHu8UTCcrZL8Idt8387my%2Bx%2BoZ4rq%2B9QjwN6Z%2FdR2W0%2Fkk2ePDYOlX32S5LdJfnmp7ykPPsGAI5nJcw1ygVD%2BtBDjRrMyqG%2BbQJGlAfjEqk31S3qwZK%2FlOPlHjtoDd1H2XEPsbrIGEKjK6KI0mKI1BunEvdvl%2BmN6u08WzeOfo6vk%2BWXbJuWY3Gd5Xl2Jy9YGifmsicT2fa7uGynOvDcsPNN96AnmGCE2yBhWsY1IEIcCCEeAIIsgHzO4oU8IscpXs3lAEG6lPd7d61%2Bu8mrlw7IOR45S9m1V9e6Y33Bh4g2fCimDhkDIgeCkAcEEcfssIPMdh2vWkihf92rSauQum%2B2xZT%2BVl4A8Pqx6A19XiPts0Rn9Jsc2hqG8ml2zWos1ug84UbenvjTlx9UnldXqQs%2FUjz2gx%2Fiovo4uFix7RXTcbND1q63Sw0TYP132acOdckHSQkT5yQps0j69SHN57dBlg8Fz3bXf56EeAS5IcQhduADAmjjg%2BLT8cFtNUCJ8fhOjfLqeqv%2BCYiZEmIAtIwLxvk5ZYptFgbMjIaZ5pQU%2BQCQsI3TM%2BMHAAtAFlCe23jNs7u7K%2FmY36%2BShfIfNQH33yTPf5ZqRnyfZ%2Bqd5A2ym2wlsZ0pqBfXyafY%2FPxDveCs%2BvPP5rkvySaVva0AXXRC8pjmu%2BsFKf%2F8s%2Fgz0n%2Ba39gLoG12v5knrTkhjzc3Sd5SI3bv1gGyQ%2FCpDm6SZZynP9o%2BNReoynt8yVL5xM2JsxPGuqXda5Vfbrq6zPYcrKB2c7susZorAF%2F1Qj8O2A6awIEWpFuI3gPnBmNIL8b0wr94DvgnWAI2qj%2BwDV7B0WAuAIwtMnC7vT1keLvZxD8bl63VBdtOKlObyljfrqbYruHBhLMdXkE7GezPite7PvCj0WLDRhaRy1nuJBQxQDlIH8EBGt6gsZ57goVjRuaiJyqYDy3V5d8MqBiGCtVKdpVnD%2F7c34AY0RMsoENqaAHhnIVPwgcN%2BPBn7sa57N00T64W6daXq0Rg2kYIwi6EiC497SSE2M61gJChCLnfJpurb8ldkYfhyfdK20ozjDCw0IFHQ0cfN9rvstOWyVaqz9Hb%2BXz3S6k%2Fh%2BisL2g9lJ18dXt%2F7QlbHFHLpEE9lRfuQaXVKUTBvbDXxYaRP49B6R5oegy0ejAdlwGnYEYxiwjnEBEoUBufhEh9uzyFAWC0fYPe3gOGLL0dj%2BlJg8GbfAjq4lh3cuTTnewiB5kaOUAEpUioyaE1gYod3Ai29uaDmgokBaRYZ8VPg3ZY9HWsDeGGy%2Bm1UxyUdnDRNwNlb97MtT7wMb1WuTrRZwnaRubLtfkFeWx35z1Ki5xg8zbe2xwsedYkbHnIUkNMPecuXSwK5fHhVhoaX9dxAdAHyTx5rEjLTRaHcH2UeokMnyyJaC%2F1EvrI%2F%2BzhvXjtUvE4odiSiOwUgQieQ4CBE9spb4uq%2FvE1iGdMi0D102gajBhecLwJ8R1eQD0U7mCQ9ST6XXadejPzWe0WrP3IrviCXofSSrHyYIuhIIoPhHpFQ7aCUySrI3NBx%2F0mJFkd0dVouGTl%2FOkkq%2F0mjHqXrD387K%2BSPntyH6S5xg5beN4o59BldDx1QpSzfRLc5kV%2FyrFuysERKWe%2FCWPeKWdnjQfKdVBuQIIeOoVzWtlskU5MjXSMdrKEA9Hyi%2FChZOy%2BDUMjktGViu2bjDhYFv6kgIoibj0ZFo0Uu64A4mjhZdzD8R2AcUx42WNwmVPRBxyjRZe1GAxT%2BN4pvNKS%2B2vNRlxEnOQGdM3iaHqzOImsWgYRnglYT7mDI4WsMzLCUTSj9VldX8P%2FLA46PJ3eZvEe6cevnI%2BmFcuPc8nzk4KU2madOBm5TUZKZ6jWfpHRaH81GneSUYjO2%2FgjY9ThHPNGxh4J36%2BcjJC22aiG7NDs2JwcT%2FIpaZ%2FttMkour1AgvqZJQUSUjepmWlkPQvRaUb7IqYQHR40b7x8ia7eMxScgmYmq0SFa0XveOWmiG2LhhXgU6oaIIBVZ8JVLGi0OhPEtkdVtnMUUDIhlEBrGWkjSnKWklKOqmQwlJZ4LqUlADfnoXPjJyj2k64soWeBpmKvVYfpKPZSdd8P4%2BNX01uk6J%2BSMUCHJiHbaLKFJYjDrp0e%2FCGGbcBKtWB4YRWIjNakvdF3Ncjx7iNhhX8p92ykkrDu1x%2BzvRaSgBG0Vt0J2Lu0lY9SEqRH5kwAx7lLSdhTsNBrLM5RSYKEdeD%2BQDFCJQmOgCk2EHLZLaPVktBFYgNCplpLAlC9RKde1OqCyGjZPjSkgfmDyAjFJFSYxkz4of3W%2B%2FnBh%2B2BD%2BUkXko5CcCAEfZjtKcC46OahNaegk9h7wqmnl6yhl8hMvLPKj%2FDMNeC3gqp6VqYXMgcMC3%2F6nX1huzr71ejOlZVtTWmX42GBC5PZSaG45lPDs9cmGHVaOg6hsItzPZnYBEwYhEV6vIah0IR5ykUUW37VJkWxFWnbqxSEfQlZt28kFIR1CUGJxcxAMwsdcJtYXVEwCyCM9i1omvE%2BIH5Ioz5jh%2FQ4CL2x3OvlSIAZYYgFsAVPRirUATt4Sd%2BbgM00UIRzkSEyVXsAwyachWeIFcZfTq5ar5IvVeHN7n6EnerfTl1Ipy5D5OreiV1cZNxNiuOYBzpZhwekXHmizDhm3GsR0giMO7pykRQR%2BVNOj3jgeJOkqhyST7qREi2dZORjEhGK6868k5GeJiMwax4gjIRgGvOdcUFR4sbs7DvkV9c%2BKwSIWUSO4yN0WLGLKTLT71IhGsOx9MzVKm5jbGAwsvqV0BJZ1SEE3KWIhFc7PVwepvBQ%2Bb%2BpEtEkGdCRWJSUQAvFSKKuob7qQgj2Hkff1Tke51i3qgYQmKTLhChXbUTpyLvdv8I7mmO5IDOyN4SEVCVKTxDiQjAmUlM5J2YLzFEcoYKEYBwI8MdUGeFCE5tQnhZBMFc7vldqsci%2FXHhSjBRKR5vSptRZZiUZiPciYnIyD%2BBnfkn23W80sc%2BqWZk9yth8Ti%2FjVdSYMgOLuH8t09%2FfPl7Iwul%2BU1Xmmx1YfEavbNVisXXO4kL8UV7MTbwM%2BSRsa0uZMwZzcT2kGtRdcqI87Axk3MSNUe%2B4f3Vk2Kp3urgS0cWKcC9PMz9ZlXXviTTy7mzV2IANMM%2B5lFitoy6W%2FaXf6dV2sCVvlxh5jLuXhDXaRpTgjMiM2ksRQhjDhnhxp61GLKZqvWLmNhdNBjc3MwyNF2IHuEckqX7wbmxHMCwp%2FYuB6gpwDltzReQnWZUOXZPmaD459ZCKwD5CeU5CLPbIyMuJODBzXd01Lwffh25shOU99XKrXrJwOAlMAUXKBeUEMDkJGEsEkOcz2g9sRg6vUdIB3fZseKecxPjw%2FV2vZvqxAU3YbzlhjIVHQxbdU7ZYIEe0a66rGjMVWI87JxznB7fVmBIX8jDye3qBqQc7oQ38QTv6onPoce%2FRHfr%2BczS3qoLdCTHTi43VlhbmhSel%2BE7wqqK8uVe85hFhuuFED4rzxR7cht2r0eMh7zxIzG%2BC7tXUhv0WOzeXhp86mJ34Aj%2FTU%2FhUVseo%2BanDXAoUOv0YAM24nIMaP0xjVnYeR9%2FRBLB6XOsFTAguwzgC%2BQniA70suNp00jiW%2FKIYl7%2Bb8A7OmFTcmmSmBNaJGaq%2FGsECQIUE0NL80iWoFkdS5YhGSec%2B2MLfBZsIcTclVBRZChBkF0aD0bRePazCMrYsbRwqla1rtYOEXRGFfzNIhVZJkQMQKUBjhjX%2FxlZkuCUEt%2BYtZd4gKhnktUAioDIpWcdWauF982V%2BfD%2Blw%2FyC5fZ3fo%2BT1c3RyfGtBNvFE5uVbbNNr5T%2F3z68kPq8pF6KvVgH9VWI1GyWsifaq1FZ76N6%2F7NY5fqV9XMhcoV2hQYipdv8rS4c7xeb83yeKe93NcvstnfpEhSa4fg5UmNfc5i1Qfv4mW8mqt%2BOK05KVpuJYnTeVyIsVNbm8%2Bz%2B9UODae19Cn7d9FENJvNDjRk1QM6vmCh%2BlyEVU2Okrrz78YcQy9GyEiDwN5EDAvnBiHAMRV4KXYEorDm6UD41aFODPfURG5Hvaui0ZMmFQjDXc8hGa4OCGFkXo6640dFlhcF6XMkRUPUlkYYk7PmREulc68qF5Kix5iCmmnv5aAT4doIb7Ss6Mo0Cmw9VntApvZwfr7uN70CX0dRGSPattPPztaDhVHnFd7rYdPGRuPQYaMcQdfYv4%2FzWGOmX2XUIDycwsMqz39u2RGS5I51bR6%2F3NvjHuSurLop%2BjVZZGo0AJ9gu2CjWg0d0ZMJXNlyQbg%2BO%2BEKjdwGQc67thQAVzQ1AOm5AQlIne2pZ%2BkQgHxes7Rj0VLlEJvQLM05MZCNIjLjPvK%2FOIcd%2BV%2BYdd7G42wOX6IbctREyl7ZKYMyYHqSx1HRaIIpLVSY3GHQE3cw5q2G2no0lEZjg1mjJYMBaHsZPstniZoxZdttYwbPEWxe0yMLgLidTQZnQxy1bxx1N06mG6wlAUDnEpejynsQI8iEsGvXGCc3kQ9VCdrW28d%2F%2FXLhSBZpQFalZOzJ%2FUCF2OnM%2FTjKIUlsbbXCrjlCFvb82EXAFFxSpLji3Qg6FFrOfQySrc9eFpr84WGKVz%2FrUVpvkm%2Fpo5orshc3SsQ0OhBwWR3jDRIaO6wA6OGwQo%2F5wtnKh3h%2Ba0BCJVepZyqavSliFPer9C%2F5bgdzfFrxh%2BfSBaYkA6oa6lFvegxlAO2gjEUR%2FyFUYcXhIOAuh4%2BzcDFmPgjjSuIZhJa9UCnGygdaXA2VnJkAW57m%2FV8XYSJjCbraa%2BCcZPGwt2ORL1wKVqWIv9FPqc6q2vXEAfI9qcNPlSM8PB%2B4oRjtSfKtr9ifuVtfszcdt3GJK8e28RzuxNmQIfu8M2QlV01dFBB25gxZFALVfjJktaOvXdXxpBrklTCfdKUAGDEr0ZvSaKY8jhgxpurZDd7GJxLOwgDVfRCdVTUF5AXG0jePTjv01NHrf%2B7QLc%2F%2FR5HFnorS72pmk0I5e%2BicJV9VoNKc3KrpaxRdj3GnK0Ff1aKf8CK9w8Licyws9hjBdK2fRJOT6QAQ6ojCDI68QMuLAIBgZnsexTW2c%2B0%2FSlg%2BxOqyQ4px2BDLzcxvugc12i1Z6SBAly%2B2LlFeTejQlfFLHFgnPuSnlszNUJxp0h1vWAX8uPGzlF17da071hOIUGQbURTZJtRokTG835%2Ff23WG97jOirhwOyLckd9%2Fwo28PbHLfzPugw90c1R8e8WEbMewS%2F8pdvs6%2FNMU62WYI9BU%2FrnJFFBqBUK9%2Bq%2FZIlFX%2FB8%3D)

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
- [Diagram show how IP packets route in their way!](https://www.draw.io/?lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=Untitled%20Diagram.xml#R5Vrfd9ogFP5rfN0JIb987Fy39Zxu65kP2x6pYQlbIjmI1eyvHynEJKDWakptfFH4cgnw3Y%2FLBR3BSb7%2BxFCRfqExzkauE69H8MPIdYHnQ%2FFVIaVEIhBKIGEkVkYNMCX%2FsAIdhS5JjBcdQ05pxknRBWd0Pscz3sEQY3TVNftNs26vBUqwAUxnKDPRHyTmqUID32sefMYkSeuuQTCWT3JUW6upLFIU01ULgtcjOGGUclnK1xOcVezVxMh2H3c83YyM4Tk%2FpIEvGzygbKkmp8bFy3q2OBaTV1XKeEoTOkfZdYO%2BZ3Q5j3H1RkfUUp5noghE8Q%2FmvFT%2BQ0tOBdS84ZbSQtnJPquOdk5DQQu6ZDNlpYbKEUuwsvI2FArxYZpjzkphwnCGOHnovh0pFSQbu4YnUVBUbafNNWj7ejMxmBPOLarirMyIIIiJma5SwvG0QI9zWInl0SXsXjJ5e78B0Oxv8sjvtyUXb8EKjwkTyiZ0LuqCk0pVisUHzDhe7%2BfRZEg1qGVZ1lVVX7VlrrC0pfAaO4XT8A1L0TOlGFiS4vgsaBPksPJn1f6dX1d%2F9U1pdCKlqukdJaLfjeZh1BU9AJqY5RBUK80xm2Ec5Ctgxo03rXGwI5o8zyNXjKGyZVBUTC92O8wLtCgFtT3uCXsYOpof5QiO9apnOPW7iMgi3LtBxqsYXpWSqnRzZ2JD2DV0h9jcNoBJ%2F9tZU6BOX9uLClraOerOW8xdFcUgFeo7WgjwbCoUPitAiB4DlFcEyk%2BBTCfDDByh94pucU23nHfgaAcJOdbec6Gxvk5CjWgZvPrIhc7k6InXhLfyVlH7pV52ZESHW5x16rH0qDRpDPemPU%2Faa2nVyWnSmRzwrDj81MPfqzjcBz073DztTOSNXLWRGPuZH439YJDb3Dh6zW3uPC4IjltcciFpi%2BvUa4CDmQuepV%2FgOIHjhRehYC%2ByqGBonlOGsHFs0zZ0trvhZTcOAMK9O8HTDfq%2BUoHnkZtbcXkvmbx9lwd%2Bz9lCZLh8yhlGuRlQvUHGWKD%2F%2BmI3yJrJ2i76h5mkGfQHrk36nYPpdy%2BDfrtJsnmJvDfVG6QL9CTP6jW%2BGf0v5S7aZpQ3TzSXwvJLillUm3%2FsyNSn%2BeMTvP4P)

##### Firewall
We suggest do firewall in ::/64 subnet router network level. each IP can send block signal to router. With this approach we can have both physical and upper layer security. If abuser send data to inner network services, It will easy to locate physically and remove it from router.


### Storage Engine
Forget about the file systems! The Future of storage engines will be objects!! Future apps need to store and [retrieve](https://en.wikipedia.org/wiki/Information_retrieval) data in multi model so OS don't have any schema forces in storage engine layer like [FileSystems](https://en.wikipedia.org/wiki/File_system) or RDBMS for security and performance reason! You can use PersiaOS model even as block storage!
- OSD standard - https://www.kernel.org/doc/Documentation/scsi/osd.txt
- 

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
- https://wiki.osdev.org

### Other Implementation
- https://www.qubes-os.org
- https://github.com/HawxChen/-LibraryOS-Exokernel_Implementation

## Production Ready!?
This OS is under development and not ready to use in real production. It can have breakable changes until version 1 release.
But we are glad to hear your experience or idea about this concept.