public void DFSInOrder(TreeNode root) {
    Stack<TreeNode> stack = new Stack<>();
    TreeNode current = root;
    
    // Start from the root node and push it to the stack
    stack.push(root);
    
    // Continue the loop until the stack is empty
    while(!stack.isEmpty()) {
        // Traverse to the leftmost node and push all nodes on the path to the stack
        while(current.left != null) {
            current = current.left;                
            stack.push(current);                
        }
        
        // Pop the top node from the stack, which is the leftmost node in the current subtree
        current = stack.pop();
        
        // Process the current node, here we just print its value
        System.out.print(current.value);
        
        // If the current node has a right child, set the current node to its right child
        // and push the right child to the stack. This will start traversing the right subtree.
        if(current.right != null) {
            current = current.right;                
            stack.push(current);
        }
    }
}

// BFS（广度优先搜索）和DFS（深度优先搜索）是用于遍历或搜索图或树的两种不同算法。每种算法都有其独特的优势和使用场景：

// BFS适用于以下情况：

// 寻找最短路径：BFS逐层遍历所有节点，适用于从源节点到目标节点寻找最短路径。当第一次遇到目标节点时，找到的路径将是最短路径。

// 确定路径的存在：BFS保证如果两个节点之间存在路径，它将找到它，因为它以广度优先的方式遍历所有节点。

// 二分图：BFS可用于检查图是否是二分图。二分图是指图的顶点可以划分为两个不相交的集合，使得任意两个相邻的顶点不在同一集合中。

// 较少层次上找解：在解决方案预期存在于较浅层次而不是较深层次的情况下，BFS可能更高效。

// DFS适用于以下情况：

// 穷尽所有可能性：DFS在回溯之前尽可能深入地遍历一个分支，适用于穷尽地搜索所有可能性以找到最佳解决方案或所有解决方案。

// 计数所有可能的路径：DFS可用于计算源节点到目标节点之间的所有可能路径，因为它以深度优先的方式遍历所有路径。

// 回溯：DFS经常在回溯算法中使用，其中按照特定顺序探索所有可能的选择，并在遇到死胡同或找到解决方案时进行回溯。

public void BFS(TreeNode root) {
    // 创建一个队列用于BFS遍历
    Queue<TreeNode> queue = new LinkedList<>();
    // 将根节点加入队列
    queue.add(root);

    // 开始BFS遍历
    while (!queue.isEmpty()) {
        // 获取当前层级的节点数
        int size = queue.size();

        // 遍历当前层级的所有节点
        for (int i = 0; i < size; i++) {
            // 从队列中取出一个节点
            TreeNode currentNode = queue.poll();

            // 输出当前节点的值（这里可以进行其他操作，比如判断是否满足条件）
            System.out.print(currentNode.val);

            // 将当前节点的左子节点加入队列（如果存在的话）
            if (currentNode.left != null)
                queue.add(currentNode.left);

            // 将当前节点的右子节点加入队列（如果存在的话）
            if (currentNode.right != null)
                queue.add(currentNode.right);
        }
    }
}
// https://leetcode.com/discuss/study-guide/1072548/A-Beginners-guid-to-BFS-and-DFS