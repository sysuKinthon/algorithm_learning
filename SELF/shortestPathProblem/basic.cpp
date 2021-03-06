/*
1)最短路径问题分为以下4种情况
1.1)求单源最短路径，且边权为非负的情况，使用Dijkstra算法，思想是每次从距源点最近且未标记的点出发，查找是否可以找到其他未标记点到源点更短的路径；贪心策略
1.2）求单源最短路径，且边权可以为负的情况，可以用于判断是否存在负权环，bellman-ford算法，该算法是使用动态规划，盲目地对所有的边进行最大为n-1次的拓展；
1.3）SPFA算法，是对bellman-ford的改进，使用队列对邻近点进行拓展，而不再是盲目扩展
1.4) 求多源最短路径，就是同时获取全部点，两两之间的最短路径，使用FloydWarsh算法
 */
