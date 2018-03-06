# Distributed Storage Engine
We need to store and [retrieve](https://en.wikipedia.org/wiki/Information_retrieval) data in multi model! We don't have any schema forces in storage engine layer like [FileSystems](https://en.wikipedia.org/wiki/File_system) or RDBMS.

### Read & Write from HHD, SSD
We don't want to use [FileSystems](https://en.wikipedia.org/wiki/File_system) for security and performance reason. We must connect to device (Raw data) without any additional layer.
#### Pros
- Improve security because naked device (without FileSystems) can't read by any os.
- Improve performance because no additional layer.
- Have distributed storage engine (file system)! becuase all device storage capabilities be as one storage capabilities in top layer of database.


### Storage Engine API
- If write new version of object, declare how many of that object must have version. e.g. 3 means just 3 version of that object must be in storage. 0 means no limit.
- Read priority. 0 to 10. 10 means very high read need and use SSD storages. We have future plan to automated this by statics.
- Replication
    - 000: no replication
    - 001: replicate once on the same rack
    - 010: replicate once on a different rack, but same data center
    - 100: replicate once on a different data center
    - 200: replicate twice on two different data center
    - 110: replicate once on a different rack, and once on a different data center