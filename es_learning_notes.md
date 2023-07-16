####  查询
```
Match Query（全文搜索查询）

关键字：match
SQL类比：LIKE
Term Query（精确值匹配查询）

关键字：term
SQL类比：=
Range Query（范围查询）

关键字：range
SQL类比：BETWEEN、>、<、>=、<=
Bool Query（布尔查询）

关键字：bool、must、must_not、should
SQL类比：AND、NOT、OR
Wildcard Query（通配符查询）

关键字：wildcard
SQL类比：LIKE（使用通配符）
Match Phrase Query（短语匹配查询）

关键字：match_phrase
SQL类比：LIKE（需要按照指定顺序连续出现）
Prefix Query（前缀匹配查询）

关键字：prefix
SQL类比：LIKE（以指定前缀开始）
Exists Query（字段存在性查询）

关键字：exists
SQL类比：IS NOT NULL
Aggregations（聚合查询）

关键字：aggs（或aggregations）
SQL类比：GROUP BY
Match None Query（匹配空查询）

关键字：match_none
SQL类比：SELECT * FROM table WHERE 1 = 0
Script Query（脚本查询）

关键字：script
SQL类比：使用自定义脚本进行查询
Exists Query（字段存在性查询）

关键字：exists
SQL类比：IS NOT NULL
Geo Shape Query（地理形状查询）

关键字：geo_shape
SQL类比：根据地理形状进行查询
More Like This Query（相似文档查询）

关键字：more_like_this
SQL类比：根据相似文档进行查询

#### 过滤

Term 过滤器：精确匹配，类似于SQL中的等于（=）。

Terms 过滤器：匹配多个值，类似于SQL中的IN。

Range 过滤器：范围查询，类似于SQL中的BETWEEN和比较运算符。

Exists 过滤器：检查字段是否存在，类似于SQL中的IS NOT NULL。

Missing 过滤器：检查字段是否缺失，类似于SQL中的IS NULL。

Bool 过滤器：组合多个过滤条件，类似于SQL中的AND、OR和NOT。

Prefix 过滤器：前缀匹配，类似于SQL中的LIKE。

Wildcard 过滤器：通配符匹配，类似于SQL中的LIKE。

Regexp 过滤器：正则表达式匹配，类似于SQL中的正则表达式匹配。

Fuzzy 过滤器：模糊匹配，类似于SQL中的模糊匹配。

Type 过滤器：按类型过滤，类似于SQL中的按表名过滤。

Script 过滤器：使用自定义脚本进行过滤，类似于SQL中的自定义脚本过滤。

Geo Distance 过滤器：地理位置距离查询，类似于SQL中的地理位置查询。

Geo Bounding Box 过滤器：地理边界框查询，类似于SQL中的地理位置查询。

Geo Polygon 过滤器：地理多边形查询，类似于SQL中的地理位置查询。

#### 聚合

Avg Aggregation（平均值聚合）

SQL类比：AVG
Sum Aggregation（求和聚合）

SQL类比：SUM
Min Aggregation（最小值聚合）

SQL类比：MIN
Max Aggregation（最大值聚合）

SQL类比：MAX
Cardinality Aggregation（基数聚合）

SQL类比：COUNT(DISTINCT)
Value Count Aggregation（计数聚合）

SQL类比：COUNT
Extended Stats Aggregation（扩展统计聚合）

SQL类比：统计函数（如COUNT、SUM、AVG、STDDEV等）
Percentiles Aggregation（百分位数聚合）

SQL类比：百分位数计算（如PERCENTILE_CONT、PERCENTILE_DISC）
Histogram Aggregation（直方图聚合）

SQL类比：GROUP BY + 范围聚合（如COUNT、SUM）
Date Histogram Aggregation（日期直方图聚合）

SQL类比：GROUP BY + 日期范围聚合（如COUNT、SUM）
Terms Aggregation（术语聚合）

SQL类比：GROUP BY
Top Hits Aggregation（前N个结果聚合）

SQL类比：TOP N
Nested Aggregation（嵌套聚合）

SQL类比：嵌套子查询
Filter Aggregation（过滤聚合）

SQL类比：WHERE子句
Range Aggregation（范围聚合）

SQL类比：CASE WHEN
```
#### 索引模块
Index Modules（索引模块）：Index Modules是Elasticsearch用于管理索引的模块。它提供了索引创建、配置和删除等功能。

Analysis（分析）：Analysis模块负责对文本进行分析和处理，包括分词、词性过滤、同义词处理等，以便在搜索和聚合时能够正确处理和匹配文本数据。

Index Shard Allocation（索引分片分配）：Index Shard Allocation负责将索引的分片（shard）分配到集群的不同节点上，以实现数据的分布和负载均衡。

Index Blocks（索引块）：Index Blocks用于阻止对索引的读写操作。可以通过索引块来控制索引的访问权限，或在进行维护操作时防止对索引的修改。

Mapper（映射器）：Mapper负责将文档的JSON数据映射到索引中的字段，并定义字段的类型、分析器等属性。

Merge（合并）：Merge模块用于合并索引分片中的小段（segments），以减少存储空间的使用和提高查询性能。

Similarity Module（相似度模块）：Similarity Module定义了在搜索和评分时使用的相似度算法，它影响了搜索结果的排序和相关性得分的计算。

Slow Log（慢日志）：Slow Log记录了执行时间较长的搜索请求和索引请求，以便进行性能分析和调优。

Store（存储）：Store模块负责索引数据的持久化存储，包括将文档和索引结构写入磁盘，以及从磁盘加载索引数据。

Translog（事务日志）：Translog用于记录索引的写操作，以实现数据的持久化和恢复能力，同时提供了较低的写入延迟。

History Retention（历史保留）：History Retention定义了索引操作的历史记录保留策略，可以配置保留操作历史的时间和数量。

Index Sorting（索引排序）：Index Sorting用于对索引中的数据进行排序，以优化搜索和聚合操作的性能。

Indexing Pressure（索引压力）：Indexing Pressure表示索引操作对系统资源的需求和影响程度，用于监控和调整索引的写入速率和资源分配。
#### 元数据

元数据是描述数据的数据，它包含关于数据的属性、结构、配置和其他相关信息。在上下文中，元数据指的是Elasticsearch索引的元数据，包括索引的名称、字段映射、设置和其他索引级别的信息。

保护元数据的重要性在于以下几个方面：

数据完整性：元数据定义了索引的结构和字段映射信息，它们对于正确解释和处理索引中的数据非常重要。保护元数据可以确保索引的结构不被意外修改，从而维护数据的完整性和一致性。

配置稳定性：元数据中包含了索引的设置和配置信息，如分片数量、副本数量、分析器设置等。保护元数据可以防止配置的意外更改，确保索引的稳定性和一致性。

安全性：元数据可能包含敏感信息，如字段名、索引别名等。保护元数据可以防止未经授权的修改或泄露敏感信息，提高数据的安全性。

系统稳定性：索引的元数据在Elasticsearch集群的运行和管理中起着重要的作用。保护元数据可以防止意外的修改、删除或损坏元数据，从而确保系统的稳定性和可靠性。
在Elasticsearch中，以下是一些常见的索引元数据的示例：

索引名称（Index Name）：索引的唯一标识符，用于区分不同的索引。

字段映射（Field Mapping）：定义索引中的字段和它们的数据类型、分析器等属性。

设置（Settings）：索引级别的配置信息，如分片数量、副本数量、分析器设置等。

别名（Aliases）：定义给索引的别名，可以通过别名来访问和操作索引。

生命周期策略（Lifecycle Policies）：定义了索引的生命周期管理策略，包括索引的创建、删除和数据迁移等操作。

索引模板（Index Templates）：定义了在创建新索引时自动应用的默认设置和映射。

搜索分析（Search Analysis）：定义了索引级别的搜索分析配置，如停用词、同义词等。

索引状态（Index Status）：记录了索引的健康状况、分片分配情况和索引的大小等统计信息。

Index Modules（索引模块）：Index Modules负责管理索引的创建、配置和删除，提供了对索引的整体控制和管理。

Analysis（分析）：Analysis模块负责对文本进行分析和处理，包括分词、词性过滤、同义词处理等，以便在搜索和聚合时能够正确处理和匹配文本数据。

Index Shard Allocation（索引分片分配）：Index Shard Allocation负责将索引的分片（shard）分配到集群的不同节点上，以实现数据的分布和负载均衡，提高系统的性能和可用性。

Index Blocks（索引块）：Index Blocks用于阻止对索引的读写操作，可以控制索引的访问权限、保护索引数据的完整性，或在进行维护操作时防止对索引的修改。

Mapper（映射器）：Mapper负责将文档的JSON数据映射到索引中的字段，并定义字段的类型、分析器等属性，帮助构建索引的结构和元数据。

Merge（合并）：Merge模块用于合并索引分片中的小段（segments），以减少存储空间的使用和提高查询性能，优化索引的数据组织方式。

Similarity Module（相似度模块）：Similarity Module定义了在搜索和评分时使用的相似度算法，影响搜索结果的排序和相关性得分的计算，帮助提供更准确的搜索结果。

Slow Log（慢日志）：Slow Log用于记录执行时间较长的搜索请求和索引请求，以便进行性能分析、调优和故障排查。

Store（存储）：Store模块负责索引数据的持久化存储，包括将文档和索引结构写入磁盘，以及从磁盘加载索引数据，确保数据的持久性和可靠性。

Translog（事务日志）：Translog用于记录索引的写操作，实现数据的持久化和恢复能力，提供较低的写入延迟，保证数据的一致性和可靠性。

History Retention（历史保留）：History Retention定义了索引操作的历史记录保留策略，可以配置保留操作历史的时间和数量，用于追踪和审计索引操作。

Index Sorting（索引排序）：Index Sorting用于对索引中的数据进行排序，优化搜索和聚合操作的性能，提高查询效率。

Indexing Pressure（索引压力）：Indexing Pressure用于监测和管理索引操作对系统资源的压力，帮助调整索引的写入速率和资源分配，保持系统的稳定性。

### ELK
ingest 阶段：

Elastic Agent 和 Beats：用于收集和发送日志、度量和其他类型的数据到 Elasticsearch。可以实现数据的收集、传输和监控，并添加安全保护功能。
Fleet：用于集中管理 Elastic Agents 和它们的配置策略，监控 Elastic Agents 的状态，管理策略和更新。

Elastic APM：用于应用程序性能监控，收集详细的性能信息，包括请求响应时间、数据库查询、缓存调用、外部 HTTP 请求等。帮助快速定位和解决性能问题。
Store 阶段：

Elasticsearch：分布式搜索和分析引擎，用于存储、索引和提供全文搜索和分析功能。能够高效地存储和索引各种类型的数据。
Consume 阶段：

Kibana：用于查询和可视化存储在 Elasticsearch 中的数据，分析和可视化数据。同时还提供 Elastic Enterprise Search、Elastic Observability 和 Elastic Security 解决方案。
Elasticsearch 客户端：提供用于从常见编程语言直接访问 Elasticsearch 中的数据的 API 请求和响应管理机制。

ELK 组合适用于多种应用场景，包括但不限于以下情况：

日志管理与分析：ELK 提供了强大的日志收集、存储、搜索和分析能力，可帮助组织管理和分析大量的日志数据，实现日志监控、故障排查、安全审计等功能。

实时数据分析与监控：通过将实时数据存储在 Elasticsearch 中，结合 Kibana 的可视化功能，可以实时监控指标、生成报表和仪表板，以支持业务决策和性能优化。

搜索引擎应用：Elasticsearch 是一种强大的全文搜索引擎，适用于构建搜索功能和搜索引擎应用，如电子商务、内容管理系统、知识库和文档检索等。

数据分析与挖掘：Elasticsearch 提供了强大的聚合和复杂查询功能，可以进行高级的数据分析和挖掘，支持业务智能、用户行为分析和数据探索等应用。
Important Elasticsearch configuration: 这是指Elasticsearch的一些重要配置，包括节点和集群级别的设置，如节点名称、集群名称、数据路径、日志设置等。

Secure settings: 安全设置用于配置Elasticsearch的安全功能，例如身份验证、访问控制列表（ACL）、加密通信等。

Auditing settings: 审计设置用于配置Elasticsearch的审计功能，可以记录和跟踪对集群的操作和访问。

Circuit breaker settings: 断路器设置用于配置Elasticsearch的断路器，用于防止请求过载和资源耗尽。

Cluster-level shard allocation and routing settings: 集群级别的分片分配和路由设置用于控制分片在集群中的分配和路由方式，如分片副本数、分片分配策略等。

Miscellaneous cluster settings: 其他集群设置包括一些与集群操作和行为相关的配置项，如集群的最大节点数、最大并发操作数等。

Cross-cluster replication settings: 跨集群复制设置用于配置Elasticsearch中的跨集群数据复制功能，允许将索引数据复制到不同的集群中。

Discovery and cluster formation settings: 发现和集群形成设置用于配置Elasticsearch节点的发现方式和集群形成过程，包括单播、多播、Zen发现等。

Field data cache settings: 字段数据缓存设置用于配置Elasticsearch中的字段数据缓存，以提高聚合和排序操作的性能。

Health Diagnostic settings: 健康诊断设置用于配置Elasticsearch的健康检查和诊断功能，包括集群健康状态、节点健康状态等。

Index lifecycle management settings: 索引生命周期管理设置用于配置Elasticsearch中的索引生命周期策略，包括索引的创建、保留期限、删除等。

Index management settings: 索引管理设置用于配置Elasticsearch中的索引管理功能，包括索引模板、索引别名、索引分片和副本设置等。

Index recovery settings: 索引恢复设置用于配置Elasticsearch中索引的恢复行为，包括分片恢复阈值、恢复速度限制等。

Indexing buffer settings: 索引缓冲区设置用于配置Elasticsearch中的索引缓冲区大小和行为，以优化索引操作的性能。

License settings: 许可证设置用于配置Elasticsearch的许可证信息和功能限制。

Local gateway settings: 本地网关设置用于配置Elasticsearch中的本地数据网关，用于在节点重新启动后恢复数据。

Logging: 日志设置用于配置Elasticsearch的日志记录级别、格式和目标。

Machine learning settings: 机器学习设置用于配置Elasticsearch中的机器学习功能，如异常检测、预测分析等。

Monitoring settings: 监控设置用于配置Elasticsearch的监控功能，包括集群性能监控、指标记录和报告等。

Node: 节点设置用于配置单个Elasticsearch节点的行为和属性，如节点类型、节点角色、内存设置等。

Networking: 网络设置用于配置Elasticsearch节点之间的通信和网络参数，如绑定IP地址、端口号、跨域访问等。

Node query cache settings: 节点查询缓存设置用于配置Elasticsearch中的查询缓存，以提高查询性能。

Search settings: 搜索设置用于配置Elasticsearch中的搜索行为和参数，如搜索超时时间、分页设置、搜索排序等。

Security settings: 安全设置用于配置Elasticsearch中的安全功能，如身份验证、授权、加密通信等。

Shard request cache settings: 分片请求缓存设置用于配置Elasticsearch中的分片请求缓存，以提高搜索性能。

Snapshot and restore settings: 快照和恢复设置用于配置Elasticsearch中的数据快照和恢复功能，用于备份和还原索引数据。

Transforms settings: 转换设置用于配置Elasticsearch中的转换功能，允许对索引数据进行转换和处理。

Thread pools: 线程池设置用于配置Elasticsearch中的线程池，以控制并发操作和资源利用。

Watcher settings: 监视器设置用于配置Elasticsearch中的监视器和告警功能，允许监控集群和索引的状态和变化。

Advanced configuration: 高级配置项包括一些更高级和复杂的设置，用于调整和优化Elasticsearch的行为和性能。

#### 配置项
性能调优：通过配置各种缓存、线程池、断路器等设置，可以优化Elasticsearch的性能。根据集群的特定需求，可以调整这些配置项以提高查询速度、减少资源消耗等。

可伸缩性：Elasticsearch可以在一个或多个节点上组成集群。通过设置集群级别的配置项，如分片分配、副本设置、发现和集群形成等，可以实现集群的水平扩展和弹性。

安全性：Elasticsearch提供了许多安全功能，如身份验证、访问控制、加密通信等。通过安全设置，可以确保只有授权用户可以访问和操作集群，保护数据的机密性和完整性。

可靠性和恢复：配置项如快照和恢复设置、索引恢复设置等可以保证数据的可靠备份和快速恢复。在灾难恢复或节点故障时，这些设置可以确保集群和数据的可靠性。

监控和诊断：通过配置监控设置、健康诊断设置等，可以实时监控集群和节点的状态、性能指标，并进行故障排查和问题诊断。

数据管理：配置项如索引生命周期管理设置、索引管理设置等可以自动管理索引的生命周期、保留期限、删除过期数据等。这有助于数据的有效管理和存储成本的控制。

应用程序需求：根据特定的应用程序需求，可以通过配置项来定制和调整Elasticsearch的行为，以满足特定的搜索、索引、分析和数据处理需求。
性能优化：

Heap size settings: 如果你的应用程序需要处理大量的数据和查询，你可能需要增加Java虚拟机（JVM）的堆大小，以便为Elasticsearch分配更多的内存。
Circuit breaker settings: 如果你的集群经常出现内存不足或请求过载的问题，你可以调整断路器的阈值，以便在达到内存或负载阈值时停止接受更多的请求。
Thread pools: 通过调整线程池的大小和队列长度，可以优化Elasticsearch的并发处理能力和请求响应时间。
安全设置：

Security settings: 如果你需要保护你的集群和数据，你可以配置身份验证和访问控制，例如启用基于用户名和密码的身份验证，设置角色和权限限制等。
Secure settings: 对于加密通信，你可以配置HTTPS，启用传输层安全性（TLS）/安全套接层（SSL）协议来保护集群节点之间的通信。
可靠性和恢复：

Snapshot and restore settings: 如果你希望定期备份和恢复你的索引数据，你可以配置快照和恢复设置，设置备份策略、目标存储位置等。
Index recovery settings: 当集群节点重新启动或索引发生故障时，你可以配置索引恢复设置，例如设置分片恢复的并发和速率限制，以控制恢复过程的资源消耗。
监控和诊断：

Monitoring settings: 如果你想实时监控集群和节点的性能指标，你可以配置监控设置，以便将指标记录到集中的监控系统，如Elastic Stack的Kibana和Elastic Metrics。
Health Diagnostic settings: 通过配置健康诊断设置，你可以获取集群的健康状态、节点状态等信息，帮助你快速诊断和解决集群问题。

#### 分片
分片分配是指将数据分片分配到Elasticsearch集群中的节点上。通过合理的分片策略，可以解决以下问题和应对不同的场景：

负载均衡：当集群中的节点数量增加或减少时，或者节点的资源负载不平衡时，分片分配可以实现负载均衡，将数据均匀地分布在各个节点上，确保每个节点处理的数据量相对均衡，提高整体性能和响应能力。

高可用性和故障容错：通过将主分片和副本分片分配到不同的节点上，分片分配可以提供数据的冗余性和高可用性。当主分片所在的节点发生故障时，副本分片可以接管服务，保证数据的可用性，从而提高系统的容错能力。

数据安全性：通过将分片分配到不同的机架或可用区，分片分配可以增加数据的安全性。在面对机架或可用区级别的故障或灾难时，数据的冗余分布可以保护数据不会丢失或不可用。

资源利用和扩展性：通过根据节点的资源容量和负载情况智能地分配分片，分片分配可以提高资源的利用效率和集群的扩展性。分片分配策略可以根据节点的处理能力和存储容量来动态调整分片的分布，确保节点的资源得到充分利用，同时支持集群的水平扩展。

这四种分片策略的具体作用如下：

Cluster-level shard allocation settings：用于控制整个集群级别的分片分配和重新平衡操作，以实现负载均衡和集群资源的优化分配。
Disk-based shard allocation settings：用于根据可用磁盘空间进行分片分配，以避免磁盘耗尽和集群不可用的情况。
Shard allocation awareness and Forced awareness：用于控制分片在不同的机架或可用区之间的分布，提供数据的冗余性和高可用性，以应对机架级别的故障或灾难。
Cluster-level shard allocation filtering：用于排除特定节点或节点组，以便将它们从分片分配过程中排除，以实现节点的维护、升级或退役。
通过合理配置这些分片策略，可以最大程度地优化Elasticsearch集群的性能、可用性、数据安全性和资源利用，以满足不同场景下的需求和挑战
Cluster-level shard allocation settings:

电商：当电商平台面临高流量和大量数据的情况时，可以配置分片分配策略来实现负载均衡和优化性能。例如，将cluster.routing.allocation.enable设置为all，以允许分配所有主分片和副本分片。
银行业务：对于银行的核心交易数据，可能需要高性能和高可用性。可以配置分片分配策略，以便将核心数据的主分片和副本分片分配到多个节点上，并使用cluster.routing.allocation.same_shard.host设置来确保每个分片在不同的节点上。
Disk-based shard allocation settings:

电商：当电商平台的存储空间有限时，可以配置分片分配策略来避免磁盘耗尽。例如，使用cluster.routing.allocation.disk.watermark.low和cluster.routing.allocation.disk.watermark.high设置来控制分片分配的阈值，当磁盘空间低于或超过这些阈值时，分片分配将受到限制。
银行业务：对于银行的交易日志数据，可以使用磁盘容量设置，确保足够的磁盘空间用于存储分片。根据预估的日志增长率，设置cluster.routing.allocation.disk.watermark.flood_stage，以确保在磁盘空间接近饱和时停止分片分配。
Shard allocation awareness and Forced awareness:

电商：当电商平台的数据中心跨越多个机架或可用区时，可以使用分片分配感知策略来提供高可用性和故障容错。例如，使用cluster.routing.allocation.awareness.attributes设置来定义机架或可用区属性，并将主分片和副本分片分布在不同的机架上，以保护数据免受机架级别的故障影响。
银行业务：对于银行的分布式系统，可能需要在不同的地理区域部署节点，以确保业务的连续性。使用强制感知设置，如cluster.routing.allocation.awareness.force.zone.values，将主分片和副本分片强制分布在不同的可用区，以应对可用区级别的故障。
Cluster-level shard allocation filtering:

电商：当电商平台需要对节点进行维护、升级或退役时，可以使用分片分配过滤策略。使用cluster.routing.allocation.exclude._ip或cluster.routing.allocation.exclude._name设置来排除特定节点，确保这些节点不参与分片分配过程。
银行业务：对于银行的分支机构关闭或网络调整时，可以配置分片分配过滤策略来排除相应的节点，以便它们不再接收新的分片，并将现有的分片重新分配到其他节点。


#### 分类
Analysis: 这部分涉及 Elasticsearch 中的文本分析过程，包括字符过滤器、分词器和标记过滤器。如果你需要定义自定义的文本分析器或了解 Elasticsearch 的文本分析过程，可以查询此部分。

Index Shard Allocation: 这部分涉及 Elasticsearch 索引分片的分配和重新分配过程。如果你需要控制索引分片在集群中的分配或者遇到与索引分片分配相关的问题，可以查询此部分。

Index blocks: 索引块用于阻止对索引的某些操作。如果你遇到索引无法写入或无法查询的问题，可能需要查询此部分以了解索引块的设置和管理。

Mapper: 这部分涉及 Elasticsearch 的映射功能，用于将文档的字段映射到适当的数据类型。如果你需要定义或更改字段映射规则，可以查询此部分。

Merge: 合并操作用于将多个分段的索引合并为较少的分段。如果你遇到索引合并相关的性能问题或者想了解合并操作的工作原理，可以查询此部分。

Similarity module: 相似性模块用于计算文本查询的相关度得分。如果你对 Elasticsearch 的相关度算法或相似性评分感兴趣，可以查询此部分。

Slow Log: 慢日志记录了执行时间超过阈值的搜索请求和索引请求。如果你需要识别性能瓶颈或优化查询速度，可以查询慢日志相关的设置和分析方法。

Store: 这部分涉及 Elasticsearch 中索引数据的存储方式，包括不同的存储类型和压缩算法。如果你对索引数据的存储和压缩机制感兴趣，可以查询此部分。

Translog: 事务日志记录了索引的操作，用于在节点故障时的数据恢复。如果你遇到与事务日志相关的问题或想了解数据恢复机制，可以查询此部分。

History retention: 此部分涉及 Elasticsearch 中索引历史记录的保留策略和配置。如果你需要管理索引历史记录的保留期限或遇到与历史记录相关的问题，可以查询此部分。

Index Sorting: 索引排序允许你指定索引中文档的默认排序顺序。如果你需要对索引中的文档进行自定义排序，可以查询此部分。

Indexing pressure: 这部分涉及 Elasticsearch 中索引过程对系统资源的压力和资源管理策略。如果你遇到索引过程导致的性能问题或想了解索引过程的资源利用情况，可以查询此部分。
创建、配置和管理索引：Index modules、Mapping、Index templates、Data streams。这些部分提供了创建和管理索引的工具和功能，包括定义索引的结构、映射字段、配置索引模板以及管理数据流。

文本分析、搜索和查询：Text analysis、Search your data、Query DSL。这些部分涉及文本分析过程、搜索功能和查询语法。可以通过定义文本分析器、执行各种搜索操作和使用强大的查询DSL来优化文本搜索和数据查询的效率和准确性。

聚合、计算和分析数据：Aggregations、Geospatial analysis。这些部分提供了对数据进行聚合、计算和分析的功能。可以根据不同的聚合条件、地理空间查询和分析需求，生成有关数据集的汇总统计信息和可视化结果。

SQL 查询语法：SQL。通过支持 SQL 查询语法，可以直接使用熟悉的 SQL 语句来查询和分析 Elasticsearch 中的数据，提供了与传统关系型数据库类似的查询体验和语法。

监控集群状态和性能：Monitor a cluster。监控集群部分提供了实时监测集群状态、性能指标和健康状况的工具和功能。可以查看集群的运行状态、资源利用情况、节点健康状况等信息，帮助用户及时发现和解决集群中的问题。

数据备份和恢复：Snapshot and restore。这部分介绍了如何进行数据备份和恢复操作。可以创建快照以备份索引数据，并在需要时恢复数据到之前的状态，保证数据的可靠性和可恢复性。

高可用性、自动缩放和安全性设置：Set up a cluster for high availability、Autoscaling、Secure the Elastic Stack。这些部分提供了设置集群高可用性、自动缩放和安全性的指导和工具。可以配置集群的冗余机制、自动缩放策略和安全设置，以确保集群的稳定性、可扩展性和安全性。

警报规则和监控报警：Watcher。Watcher 部分介绍了如何设置警报规则和监控报警。可以根据自定义的条件和触发规则，监控集群中的事件和指标，并在满足条件时触发警报通知，帮助用户及时响应和处理潜在的问题。

##### index module
Analysis: 这部分涉及 Elasticsearch 中的文本分析过程，包括字符过滤器、分词器和标记过滤器。如果你需要定义自定义的文本分析器或了解 Elasticsearch 的文本分析过程，可以查询此部分。

Index Shard Allocation: 这部分涉及 Elasticsearch 索引分片的分配和重新分配过程。如果你需要控制索引分片在集群中的分配或者遇到与索引分片分配相关的问题，可以查询此部分。

Index blocks: 索引块用于阻止对索引的某些操作。如果你遇到索引无法写入或无法查询的问题，可能需要查询此部分以了解索引块的设置和管理。

Mapper: 这部分涉及 Elasticsearch 的映射功能，用于将文档的字段映射到适当的数据类型。如果你需要定义或更改字段映射规则，可以查询此部分。

Merge: 合并操作用于将多个分段的索引合并为较少的分段。如果你遇到索引合并相关的性能问题或者想了解合并操作的工作原理，可以查询此部分。

Similarity module: 相似性模块用于计算文本查询的相关度得分。如果你对 Elasticsearch 的相关度算法或相似性评分感兴趣，可以查询此部分。

Slow Log: 慢日志记录了执行时间超过阈值的搜索请求和索引请求。如果你需要识别性能瓶颈或优化查询速度，可以查询慢日志相关的设置和分析方法。

Store: 这部分涉及 Elasticsearch 中索引数据的存储方式，包括不同的存储类型和压缩算法。如果你对索引数据的存储和压缩机制感兴趣，可以查询此部分。

Translog: 事务日志记录了索引的操作，用于在节点故障时的数据恢复。如果你遇到与事务日志相关的问题或想了解数据恢复机制，可以查询此部分。

History retention: 此部分涉及 Elasticsearch 中索引历史记录的保留策略和配置。如果你需要管理索引历史记录的保留期限或遇到与历史记录相关的问题，可以查询此部分。

Index Sorting: 索引排序允许你指定索引中文档的默认排序顺序。如果你需要对索引中的文档进行自定义排序，可以查询此部分。

Indexing pressure: 这部分涉及 Elasticsearch 中索引过程对系统资源的压力和资源管理策略。如果你遇到索引过程导致的性能问题或想了解索引过程的资源利用情况，可以查询此部分。

文本分析和查询相关：Analysis、Mapper、Similarity module、Index Sorting。这些部分关注于处理和分析文本数据，包括定义和配置文本分析器、字段映射规则、相似性评分以及指定文档的排序顺序。

索引管理和性能优化：Index Shard Allocation、Index blocks、Merge、Store、Translog、History retention。这些部分关注于索引的管理、性能优化和存储机制，包括控制索引分片的分配、处理索引块、合并索引分段、存储和压缩数据、管理事务日志以及设置索引历史记录的保留策略。

性能监测和优化：Slow Log、Indexing pressure。这些部分关注于性能监测和优化，包括记录和分析慢查询日志以识别性能瓶颈、了解索引过程对系统资源的压力以及调整索引过程的资源管理策略。

