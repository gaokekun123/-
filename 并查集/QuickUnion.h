/*
	这一版并查级 是将每一个节点都设置一个父节点，，每一个节点都指向她所连接的上一个节点知道找到它的根节点，根节点指向他自己
*/

#include<iostream>
#include<cassert>

using namespace std;
namespace UF2{
	class QuickUnion{
		private :
			int * parent;
			int count;

		public :
			QuickUnion( int count ){
				parent = new int[count];
				this -> count = count;
				for( int i = 0 ; i < count ; i++)
					parent[i] = i;
			}

			~QuickUnion(){
				delete[] parent;
 			}
 			//寻找当前节点的根节点，不断循环找到当前节点的根
 			//当找发现当前节点的父节点是他自己的时候，返回根节点
 			int find( int p ){
 				assert( p >= 0 && p< count );
 				while ( p != parent[p] )
 					p = parent[p];
 				return p;
 			}
 			//判断两个节点的根节点是否相连，以便判断这两个节点是否相连
 			bool idConnected( int p , int q ){
 				return find[p] == find[q];
 			}
 			//合并操作将两个节点的根节点任意一个赋值给另一个完成合并操作
 			void unionElement( int p , int q ){
 				pRoot = find[p];
 				qRoot = find[q];

 				if( pRoot == qRoot )
 					return ;
 				parent [pRoot] = qRoot;
 			}


	}
}