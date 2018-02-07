def bfs_path(graph, start, goal, visited, par):
	Q = []
	Q.insert(0, start)
	while not len(Q)==0:
		u = Q.pop()
		visited[u]=1
		for v in range(len(graph)):
			if graph[u][v]==1:
				if visited[v]==0:
					visited[v]=1
					par[v]=u
					if(v==goal):
						return par
					else:
						Q.insert(0, v)
	return par