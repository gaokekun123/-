 //在并查集当中实现的原理是在数组中给每一个数组一个id值，在一开始每个数的id值都不是一样的，当想要链接两个数的时候只需要更改他们的id值，
//当id值相同时表示两个节点相连。

//并查集的实现思路是及那个每一个元素都设一个代表元素并指向他，从而实现并查的效果

#include<iostream>
#include<cassert>

using namespace std;
namespace UF1{

	class UnionFind{
		private :
			int * id;
			int count;

		public :
			UnionFind ( int n ) {
				count = n;
				id = new int[n];
				for( int i= 0 ; i < n ; i++ )
					id[i] = i; 
			}

			~UnionFind(){
				delete[] id ;
			}

			int find( int p ){
				assert( p >= 0 && p < count );
				return id[p];
			}

			bool isConnected( int p , int q ){
				return  find[p] == find[q];
			}
			//union在c++中是一个关键字，所以使用unionElements
			void unionElements( int p , int q ){
				 int pID = find[p];
				 int qID = find[q];
				 //当两个的id值相等时，两个点已经链接所以返回空值
				 if( pID == qID ){
				 	return ;
				 }
				 //这里将两个点进行连接，我们将两个点的id值变成一样的，这样就可以表示两id值相等的点都是链接在一起的  
				 for ( int i = 0 ; i < count ; i++)
				 	if( id[i] == pID )
				 		id[i] = qID;				 
			}
	};














}
