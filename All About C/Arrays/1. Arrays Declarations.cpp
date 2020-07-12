// For & For each Loop in ARRAYS and



// ---------------------    Declaration Type 1           --------------------------//

#include<iostream>
using namespace std;
int main(){

      int a[5]={5, 6, 7, 4, 3};

      for(int i=0; i<5; i++){
        cout<<a[i]<<endl;
      }


  return 0;
}


// ---------------------    Declaration Type 2           --------------------------//

#include<iostream>
using namespace std;
int main(){

      int a[5]={5, 6};

      for(int i=0; i<5; i++){
        cout<<a[i]<<endl;
      }


  return 0;
}

// ---------------------    Declaration Type 3           --------------------------//


#include<iostream>
using namespace std;
int main(){

      int a[5]={0};

      for(int i=0; i<5; i++){
        cout<<a[i]<<endl;
      }


  return 0;
}


// ---------------------    Declaration Type 4           --------------------------//


#include<iostream>
using namespace std;
int main(){

      int a[]={0};

      for(int i=0; i<5; i++){
        cout<<a[i]<<endl;
      }


  return 0;
}


// ---------------------    Declaration Type 5           --------------------------//


#include<iostream>
using namespace std;
int main(){

      char a[]={'A', 68, 'B', 71};  //you can check using int also; then output will be ASCII code of A & B

      for(int i=0; i<5; i++){
        cout<<a[i]<<endl;
      }


  return 0;
}

// ---------------------    Declaration Type 6           --------------------------//
#include<iostream>
using namespace std;
int main(){

      int a[5]={5, 6, 7, 4, 3};       //you can check using "int a[]" also.

      for(int x:a){
        cout<<x<<endl;
      }


  return 0;
}

// ---------------------    Declaration Type 7           --------------------------//


#include<iostream>
using namespace std;
int main(){

      float a[]={5.4, 6.2, 7, 4.3, 3};

      for(int x:a){
        cout<<x<<endl;
      }

                      //output will be all truncated value(i.e.. floor value of each element)
                      //  to get  float., use  this
                      //  for(floor x:a){
                      //   cout<<a[i]<<endl;
                      //  }
  return 0;
}

// ---------------------    Declaration Type 8           --------------------------//


#include<iostream>
using namespace std;
int main(){

      char a[]={'A', 68, 'B', 71};  //you can check using int also; then output will be ASCII code of A & B

      for(auto x:a){
        cout<<x<<endl;
      }
                                  // for(auto x:a) Auto will check the Declaration type of a; and will assign that for x;

  return 0;
}
