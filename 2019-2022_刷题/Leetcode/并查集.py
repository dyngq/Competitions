class UnionFind:
    def __init__(self):
        self.father = {}
    def add(self,x):
        if x not in self.father:
            self.father[x] = None
    def find(self,x):
        root = x
        while self.father[root] != None:
            root = self.father[root]
        # 路径压缩
        while x != root:
            original_father = self.father[x]
            self.father[x] = root
            x = original_father
            # x, self.father[x] = self.father[x], root
        return root


    def is_connected(self,x,y):
        return self.find(x) == self.find(y)


    
    def merge(self,x,y,val):
        root_x, root_y = self.find(x), self.find(y)
        if root_x != root_y:
            self.father[root_x] = root_y