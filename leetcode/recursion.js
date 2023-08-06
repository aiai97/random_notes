// 假设列表数据如下
const treeData = [
  {
    id: 1,
    name: "Node 1",
    children: [
      {
        id: 11,
        name: "Node 1-1",
        children: [
          { id: 111, name: "Node 1-1-1", children: [] },
          { id: 112, name: "Node 1-1-2", children: [] },
          { id: 113, name: "Node 1-1-3", children: [] },
        ],
      },
      {
        id: 12,
        name: "Node 1-2",
        children: [
          { id: 121, name: "Node 1-2-1", children: [] },
          { id: 122, name: "Node 1-2-2", children: [] },
        ],
      },
      {
        id: 13,
        name: "Node 1-3",
        children: [
          { id: 131, name: "Node 1-3-1", children: [] },
          { id: 132, name: "Node 1-3-2", children: [] },
        ],
      },
    ],
  },
  // More nodes...
];

// 递归函数，用于展示三级树形列表
function displayTree(node, level = 1) {
  console.log("  ".repeat(level - 1) + node.name); // 根据层级缩进
  if (node.children && node.children.length > 0 && level < 3) {
    for (const child of node.children) {
      displayTree(child, level + 1);
    }
  }
}

// 调用递归函数显示三级树形列表
for (const node of treeData) {
  displayTree(node);
}





