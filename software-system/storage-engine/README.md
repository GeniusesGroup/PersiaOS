# Distributed Storage Engine
We need to store and [retrieve](https://en.wikipedia.org/wiki/Information_retrieval) data in multi model! We don't have any schema forces in storage engine layer like [FileSystems](https://en.wikipedia.org/wiki/File_system) or RDBMS.

### Read & Write from HHD, SSD
We don't want to use [FileSystems](https://en.wikipedia.org/wiki/File_system) for security and performance reason. We must connect to device (Raw data) without any additional layer.

#### Pros
- Improve security because naked device (without FileSystems) can't read by any os.
- Improve performance because no additional layer.
- Have distributed storage engine (file system)! becuase all device storage capabilities be as one storage capabilities in top layer of database.


### Storage Engine API


## Distributed data Index Engine
We need to store and [retrieve](https://en.wikipedia.org/wiki/Information_retrieval) data in any query that we index data! We must use SSD and DRAM for index data to speed up data lookup.