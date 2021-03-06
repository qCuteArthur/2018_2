拓扑排序

没有环的有向图——无环图
顶点表示活动的有向图叫做AOV网
AOV中的弧表示顶点（活动）之间存在一个制约关系。

AOV图就是先干啥，后干啥。
AOV是没有任何的回路的，也就是一个无环图。

如果在G（V，E）的有向图中，顶点的序列满足从Vi到Vj有一个路径，
则顶点序列中顶点Vi必定在顶点Vj之前。
。——这种顶点的序列，就叫做拓扑序列。

拓扑排序==有向图构造一个拓扑序列。

例子就是课程的学习，存在着一个顺序。
拓扑排序就是说i一定要在j之前，先辈必定在后生前面。

构造的方式：
选择一个没有前驱的顶点（入度为0），存储到result
从图中删除顶点，并且删除这个顶点的出度的边。
重复上面两步，直到这个网中没有任何的前驱的顶点。

【邻接表的使用可以删除顶点？】
(入度为0)——（入度为1）——（入度为2）
其实这个就是一个不断的优化的过程，原来是很复杂的过程，然后不断的辈简化。

adjacent表示临街的意思，然后顶点的度是和顶点相关的边的数目。
