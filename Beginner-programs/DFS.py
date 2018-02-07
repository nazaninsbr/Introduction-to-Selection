def DFS(G, start, path):
	G.mark_as_visited(start)
	path.append(start)
	adjacents = G.find_adjs(start)
	for v in adjacents:
		if (G.isVisited(v)==False):
			G.set_node_parent(v, start)
			DFS(G, v, path)