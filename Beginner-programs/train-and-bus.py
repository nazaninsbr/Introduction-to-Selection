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

def complement_shortest_path(graph, start, goal, visited, par):
	Q = []
	Q.insert(0, start)
	while not len(Q)==0:
		u = Q.pop()
		visited[u]=1
		for v in range(len(graph)):
			if graph[u][v]==0:
				if visited[v]==0:
					visited[v]=1
					par[v]=u
					if(v==goal):
						return par
					else:
						Q.insert(0, v)
	return par


def path_length(graph, start, end, x):
	par= {}
	visited ={}
	counter = 0
	for v in range(len(graph[0])):
		par[v]=-6 
		visited[v]= 0
	if x==1:
		par = bfs_path(graph, start, end, visited, par)
	else:
		par = complement_shortest_path(graph, start, end, visited, par)
	if par[end]==-6:
		return -1
	while not par[v]==-6:
		v = par[v]
		counter+=1
	return counter



if __name__ == '__main__':
	#reading m and n
	n, m =input().split(' ')
	n , m = int(n), int(m)
	#initializing graphs
	graph1 = [[0 for x in range(n)] for y in range(n)]
	for j in range(m):
		x , y = input().split(' ')
		x, y = int(x)-1, int(y)-1
		graph1[x][y] = 1
		graph1[y][x] = 1
	if graph1[0][n-1]==1:
		print(path_length(graph1, 0, n-1, 2))
	else:
		print(path_length(graph1, 0, n-1, 1))
