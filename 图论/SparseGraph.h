#include<iostream>
#include<vector>
#include<caccert>

using namespace std;

class SparseGraph{
	private :
	int n ,m;
	bool directed;
	vector<vector<int>> g;

	public: 
	SparseGraph( int n , bool directed ){
		this->n = n;
		this->m = m;
		this->directed = directed;
		for( int i =0 ; i< n ; i++){
			g.push_back( vector<int>() );
		}
	} 

	~SparseGraph(){

	}

	int v(){ return n; }
	int E(){ return m; }

	 void addEdge( int V , int W ){
	 	
	 	assert( V >= 0 && V <= n );
		assert( E >= 0 && E <= n );

		g[V].push_back(W);
		//在利用邻接表时应当考虑自环问题，所以应当检测是否指向自己
		if( V != W && !directed )
			g[W].push_back(V);

		m++;
	 }

	 bool hasEdge( int V , int W ){

	 	assert( V >= 0 && V <= n );
		assert( E >= 0 && E <= n );

		for( int i = 0 ; i <= g[V].size() ;i++ )
			if( g[V][i] == w )
				return true;
			return false;
	 }

}