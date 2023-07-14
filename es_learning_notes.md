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
