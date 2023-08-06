def backtrack(路径, 选择列表):
  if 满足结束条件:
      添加路径到结果集
      return
  
  for 选择 in 选择列表:
      做出选择
      backtrack(路径, 选择列表)
      撤销选择