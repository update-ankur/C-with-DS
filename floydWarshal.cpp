// Input:
//        graph[][] = { {0,   5,  INF, 10},
//                     {INF,  0,  3,  INF},
//                     {INF, INF, 0,   1},
//                     {INF, INF, INF, 0} }
// which represents the following graph
//              10
//        (0)------->(3)
//         |         /|\
//       5 |          |
//         |          | 1
//        \|/         |
//        (1)------->(2)
//             3       
// Note that the value of graph[i][j] is 0 if i is equal to j 
// And graph[i][j] is INF (infinite) if there is no edge from vertex i to j.

// Output:
// Shortest distance matrix
//       0      5      8      9
//     INF      0      3      4
//     INF    INF      0      1
//     INF    INF    INF      0





// C++ Program for Floyd Warshall Algorithm 
#include <bits/stdc++.h> 
using namespace std; 
#define V 4 

#define INF 99999 


void printSolution(int dist[][V]); 

void floydWarshall (int graph[][V]) 
{ 
	
	for (i = 0; i < V; i++) 
		for (j = 0; j < V; j++) 
			dist[i][j] = graph[i][j]; 

	
	for (k = 0; k < V; k++) 
	{ 
		// Pick all vertices as source one by one 
		for (i = 0; i < V; i++) 
		{ 
			// Pick all vertices as destination for the 
			// above picked source 
			for (j = 0; j < V; j++) 
			{ 
				// If vertex k is on the shortest path from 
				// i to j, then update the value of dist[i][j] 
				if (dist[i][k] + dist[k][j] < dist[i][j]) 
					dist[i][j] = dist[i][k] + dist[k][j]; 
			} 
		} 
	} 

	// Print the shortest distance matrix 
	printSolution(dist); 
} 

/* A utility function to print solution */
void printSolution(int dist[][V]) 
{ 
	cout<<"The following matrix shows the shortest distances"
			" between every pair of vertices \n"; 
	for (int i = 0; i < V; i++) 
	{ 
		for (int j = 0; j < V; j++) 
		{ 
			if (dist[i][j] == INF) 
				cout<<"INF"<<"	 "; 
			else
				cout<<dist[i][j]<<"	 "; 
		} 
		cout<<endl; 
	} 
} 

// Driver code 
int main() 
{ 
	
	int graph[V][V] = { {0, 5, INF, 10}, 
						{INF, 0, 3, INF}, 
						{INF, INF, 0, 1}, 
						{INF, INF, INF, 0} 
					}; 

	// Print the solution 
	floydWarshall(graph); 
	return 0; 
} 

// This code is contributed by aanchal singh