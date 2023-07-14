####  查询
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
