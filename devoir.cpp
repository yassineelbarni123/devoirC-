#include <iostream>
#include<vector>
#include<stdexcept>
using namespace std ;
void TestFonction(const vector<int>&params ){
	cout<<"nombre de parametres :"<<params.size() <<endl;
}
int main() {
	try{
		for(size_t i=1; ;i*=2){
			vector<int>parames(i,1);
			TestFonction(parames);
		}
	}catch (const bad_alloc& e){
	   cout<<"memory allocation error :"<< e.what()	<< endl;
	}
	return 0;
}