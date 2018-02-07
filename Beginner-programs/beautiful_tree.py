class graph_node:
	def __init__(self, name):
		self.parent = None
		self.name = name
		self.adj = []
		self.initial_value = 0
		self.goal = 0
		self.chance_to_change = False
		self.visited = False
		self.numberOfChanges = 0
	def addConnectionNode(self, x):
		self.adj.append(x)
	def setVals(self, init_val, goal):
		self.initial_value = init_val
		self.goal = goal
	def has_node_been_checked(self):
		return self.chance_to_change
	def getter_adjs(self):
		return self.adj
	def mark_node_as_visited(self):
		self.visited = True 
	def getter_visited(self):
		return self.visited
	def setParent(self, par):
		self.parent = par
	def getter_parent(self):
		return self.parent
	def getter_numberOfChanges(self):
		return self.numberOfChanges
	def handle_changes(self, numberPrevChanges):
		self.numberOfChanges = numberPrevChanges
		if self.numberOfChanges %2 ==1:
			if self.initial_value ==1:
				self.initial_value = 0
			else:
				self.initial_value = 1
		self.chance_to_change = True
		if self.initial_value == self.goal:
			return False
		else:
			self.numberOfChanges += 1
			self.initial_value = self.goal
		return True




class graph:
	def __init__(self, n):
		self.changed = []
		self.numberOfChanges = 0
		self.nodes = {}
		for i in range(1, n+1):
			nG = graph_node(i)
			self.nodes[i] = nG
	def addConnection(self, m, n):
		self.nodes[m].addConnectionNode(n)
		self.nodes[n].addConnectionNode(m)
	def addValues(self, i, init_val, goal):
		self.nodes[i].setVals(init_val, goal)
	def visit(self, start):
		if self.nodes[start].visited():
			return 
		self.nodes[start].needs_changing()
	def has_key(self, s):
		if s in self.nodes:
			return True
		return False
	def find_adjs(self, s):
		return self.nodes[s].getter_adjs()
	def mark_as_visited(self, s):
		self.nodes[s].mark_node_as_visited()
	def isVisited(self, s):
		return self.nodes[s].getter_visited()
	def set_node_parent(self, vertex, par):
		self.nodes[vertex].setParent(self.nodes[par])
	def do_changing(self, vertex):
		parent_node = self.nodes[vertex].getter_parent()
		if  parent_node== None:
			numberPrevChanges = 0
		else:
			grand_parent = parent_node.getter_parent()
			if(grand_parent==None):
				numberPrevChanges = 0
			else:
				numberPrevChanges = grand_parent.getter_numberOfChanges()
		BC = self.nodes[vertex].handle_changes(numberPrevChanges)
		if BC:
			self.changed.append(vertex)
			self.numberOfChanges +=1 
	def has_been_checked(self, vertex):
		return self.nodes[vertex].has_node_been_checked()






def push_node(G, path):
	for x in path:
		if G.has_been_checked(x)==False:
			G.do_changing(x)




def DFS(G, start, path):
	G.mark_as_visited(start)
	path.append(start)
	adjacents = G.find_adjs(start)
	for v in adjacents:
		if (G.isVisited(v)==False):
			G.set_node_parent(v, start)
			DFS(G, v, path)





def read_input(G, n):
	for i in range(n-1):
		m, n= input().split(' ')
		m, n = int(m), int(n)
		G.addConnection(m, n)
	initial_values_line = []
	goal_values = []
	initial_values_line = input().split(' ')
	goal_values = input().split(' ')
	for i in range(len(goal_values)):
		G.addValues(i+1, int(initial_values_line[i]), int(goal_values[i]))
	return G






if __name__ == '__main__':
	n = int(input())
	G = graph(n)
	G = read_input(G, n)
	path = []	
	DFS(G, 1, path)
	push_node(G, path)
	print(G.numberOfChanges)
	for u in G.changed:
		print(u)


