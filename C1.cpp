#include<iostream>
using namespace std;

int sizee(char a[]){
    int dem=0;
    for(char* it = a; *it != '\0';it++){
        dem++;
    }
    return dem;
}

string reverse(char a[]){
    string s;
    for(int i = 0; i <sizee(a);i++){
        s.push_back(*(a  +sizee(a) -1-i ));

    }
    return s;
}

char* delete_char(char a[], char c){
    for(int i =0; i<sizee(a) ; i++){
        if(*(a +i ) == c){
            for(int j =i;j< sizee(a)-1;j++){
                *(a + j) = *(a+j+1);
            }
            *(a+sizee(a) -1) = '\0';
        }

    }
    return a;
}

char* pad_right(char a[], int n){
    int  l = sizee(a);
    if(sizee(a) >= n) return a;
    else{
        for(int i = l ;i< n;i++ ){
                *(a +i ) = ' ';
        }
    }
    return a;
}

char* truncate(char a[], int n){
    int l = sizee(a);
    if( l <= n) {
        return a;
    } else {
        for(int i =l-1; i>= n;i--){
            *(a + i ) = '\0';
        }
    }
    return a;
}

bool is_palindrome(char a[]){
    int l =sizee(a);
    for(int i =0; i<  l/2;i++){
        if(*(a +i) != *(a+l-1-i)){
            return false;
        }
        return true;
    }

}

char* trim_left(char a[]){

    int l =sizee(a);
    for(int i =0; i <l;i++){
        int dem =0;
        if(* (a + i) == ' '){
                dem++;
            for(int j =i;j<l-1;j++){
                *(a + j ) = *(a+j+1);
            }
            *(a + l-dem) = '\0';
            i--;
        } else {
        return a;
        }
    }
    return a;
}

char*  trim_right(char a[]){
    int l = sizee(a);
    for(int i =l-1;i >=0;i--){
        if(*(a + i ) == ' '){
            *(a+i) = '\0';
        } else {
    return a;
    }
    }
    return a;
}

int main(){
    char a[] = "abcdefghi";
    cout << sizee(a) << endl;
    cout << reverse(a) << endl;
    cout << delete_char(a, 'a' ) << endl;
    cout << pad_right(a,14) << endl;
    cout << truncate(a, 6)<< endl;
    cout << is_palindrome(a) << endl ;
    char b[] = "   abc";
    cout << trim_left(b) << endl;
    char c[] = "abc   ";
    cout << trim_right(c);

}
