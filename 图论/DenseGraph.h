#include<iostream>
#include<vector>
#include<caccert>

using namespace std;

class DenseGraph{
	// n 和 m 分别代表邻接矩阵的点数和边数
	private :
	int n ,m;
	bool directed;
	vector<vector<bool>> g;

	public: 
	DenseGraph( int n , bool directed ){
		this->n = n;
		this->m = m;
		this->directed = directed;
		for( int i =0 ; i< n ; i++){
			g.push_back( vector<bool>( n ,false ) );
		}
	} 

	~DenseGraph(){

	}

	int v(){ return n; }
	int E(){ return m; }

	void addEduge( int V ,int E ){

		assert( V >= 0 && V <= n );
		assert( E >= 0 && E <= n );
		
		g[V][E]  = true;
		if( ! directed ){
			g[E][V] = true;
			m++;
		}
		

	}

	bool hasEdge( int V , int W ){
		assert( V >= 0 && V <= n );
		assert( E >= 0 && E <= n );
		return g[V][W];
	}
}