#include<iostream>
#include<map>
#include<list>

class Graph{
    std::map<int, std::list<int>> adjList;

    public:
        void add_Edge(int u, int v){
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        void print(){
            std::cout << "Lista de adjacência" << std::endl;
            for(auto i : adjList){
                std::cout << i.first << "->";
                for(auto j : i.second){
                    std::cout << j << " ";
                }
                std::cout << std::endl;
            }
        }
};

int main(){
    Graph g;

    g.add_Edge(1,0);
    g.add_Edge(2,0);
    g.add_Edge(1,2);
    g.print();
    
    return 0;
}