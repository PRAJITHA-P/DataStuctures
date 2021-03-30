#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_SIZE 5struct Graph *graph;
struct Graph *gr;
int stack[MAX_SIZE], top;
// A structure to represent an adjacency list node
struct adj_list_node{
	int dest;
	int weight;
	struct adj_list_node *next;
};
// A structure to represent an adjacency list
struct adj_list{
	struct adj_list_node *head;
};
// A structure to represent a graph
struct Graph{
	int V;
	int *visited;
	struct adj_list *array;
};
/*Declare functions to implement the graph, add edges to the
graph, implement transpose graph, fill the stack and do DFS
traversal*/
// Function to create a new adjacency list node
struct adj_list_node *new_adj_list_node(int dest, int weight){
	struct adj_list_node *newNode =(struct adj_list_node *)malloc(sizeof(struct adj_list_node));
	newNode->dest = dest;
	newNode->weight = weight;
	newNode->next = NULL;
	return newNode;
}
// Function to creates a graph with V vertices
struct Graph *create_graph(int V){
	struct Graph *graph = (struct Graph *)malloc(sizeof(structGraph));
	graph->V = V;
	graph->array = (struct adj_list *)malloc(V * sizeof(struct adj_list));
	int i;
	for (i = 0; i < V; ++i)
		graph->array[i].head = NULL;return graph;
}
// Fuction to add edges to graph
void add_edge(struct Graph *graph, struct Graph *gr, int src, int dest, int weight)
{
	struct adj_list_node *newNode = new_adj_list_node(dest, weight);
	newNode->next = graph->array[src].head;
	graph->array[src].head = newNode;
	get_transpose(gr, src, dest, weight);
}
// Function to print the graph
void print_graph(struct Graph *graph1)
{
	int v;
	for (v = 0; v < graph1->V; ++v)
	{
		struct adj_list_node *temp = graph1->array[v].head;
		while (temp)
		{
			printf(“(%d -> %d(%d))\t”, v, temp->dest, temp->weight);
			temp = temp->next;
		}
	}
}
// Fuction to fill the stack
void set_fill_order(struct Graph *graph, int v, bool visited[], int *stack)
{
	visited[v] = true;
	int i = 0;
	struct adj_list_node *temp = graph->array[v].head;
	while (temp)
	{
		if (!visited[temp->dest])
		{
			set_fill_order(graph, temp->dest, visited, stack);
		}
		temp = temp->next;
	}
	push(v);
}
// A recursive function to print DFS starting from v
void dfs_recursive(struct Graph *gr, int v, bool visited[])
{
	visited[v] = true;
	printf(“%d “, v);
	struct adj_list_node *temp = gr->array[v].head;
	while (temp)
	{
		if (!visited[temp->dest])
		{
			dfs_recursive(gr, temp->dest, visited);
		}
		temp = temp->next;
	}
}
// Fuction to add edges to transpose graph
void get_transpose(struct Graph *gr, int src, int dest, int weight)
{
	struct adj_list_node *newNode = new_adj_list_node(src, weight);
	newNode->next = gr->array[dest].head;
	gr->array[dest].head = newNode;
}
/* Find the strongly connected components*/
void strongly_connected_components(struct Graph *graph, struct Graph *gr, int V)
{
	bool visited[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;
	for (int i = 0; i < V; i++)
	{
		if (visited[i] == false)
		{
			set_fill_order(graph, i, visited, stack);
		}
	}int count = 1;
	for (int i = 0; i < V; i++)
		visited[i] = false;
	while (top != -1)
	{
		int v = stack[top];
		pop();
		if (visited[v] == false)
		{
				printf(“Strongly connected component %d: \n”, count++);
				dfs_recursive(gr, v, visited);
				printf(“\n”);
		}
	}
}

//Driver program to test above functions
int main()
{
	top = -1;
	int v = 5;
	struct Graph *graph = create_graph(v);
	struct Graph *gr = create_graph(v);
	add_edge(graph, gr, 1, 0, 2);
	add_edge(graph, gr, 0, 2, 2);
	add_edge(graph, gr, 2, 1, 2);
	add_edge(graph, gr, 0, 3, 2);
	add_edge(graph, gr, 3, 4, 2);
	strongly_connected_components(graph, gr, v);
	return 0;
}