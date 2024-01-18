//==================== EX1 ===================//

//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> use_array() {
//  //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//  //----WRITE YOUR CODE BELOW THIS LINE----
//    int arr[10] = {0};
//    
//    for(auto x:arr) {
//        cout << x <<" ";
//    }
//    cout << endl;
//    
//    arr[0] = 100;
//    arr[9] = 1000;
//
//    for (auto x:arr) {
//        cout << x << " ";
//    }
//
//  //-----WRITE YOUR ABOVE THIS LINE----
//  //-----DO NOT CHANGE THE CODE BELOW THIS LINE----
//    vector<int> v(arr, arr + sizeof arr / sizeof arr[0]);
//    // chuyen mang arr thanh vecto:
//    // vector<int> v(ten_mang , con_tro den cac ptu cua mang / size of 1 ptu);
//    return v;
//}
//int main(){
//    use_array();
//    return 0;
//}

//==============================================//

//================== EX2 ========================//

//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> use_vector() {
//    //----WRITE YOUR CODE BELOW THIS LINE----
//    
//    vector<int> vec {10, 20, 30, 40, 50};
//    for(auto x:vec){
//        cout << x <<" ";
//    }
//    
//    vec.at(0) = 100;
//    vec.at(4) = 1000;
//    cout << endl;
//    for(auto x:vec){
//        cout << x <<" ";
//    }
//    
//    //----WRITE YOUR CODE ABOVE THIS LINE----
//    //----NO NOT MODIFY THE CODE BELOW THIS LINE----
//    return vec;
//}
//int main(){
//    use_vector();
//    return 0;
//}

//===============================================//

//================== EX3 ========================//

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int count_divisible() {
//    
//    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
//    //---- WRITE YOUR CODE BELOW THIS LINE----
//    int count = 0;
//    int n = vec.size();
//    for(int i=0 ; i < n ; i++) {
//        if((vec.at(i) % 3 == 0) || (vec.at(i) % 5 == 0)) {
//            cout << vec.at(i) <<" ";
//            count++;
//        }
//    }
//    
//    //---- WRITE YOUR CODE ABOVE THIS LINE----
//    //---- DO NOT CHANGE THE CODE BELOW THIS LINE----
//    return count;
//}
//int main() {
//    int cnt = count_divisible();
//    cout << endl <<"Tong so phan tu: " << cnt;
//    return 0;
//}

//===============================================//

//================== EX4 ========================//

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//int a;
//    cout << "So luong ptu: ";
//    cin >> a;
//    if (a > 1)
//    {
//        vector<int> vec(a,0);
//        int n = vec.size();
//        for (int i = 0; i < n; i++) {
//            cout << "vec[" << i+1 <<"] = ";
//            cin >> vec[i];
//        }   
//        int tich(0);
//        int kq(0);
//        for (int i = 0; i < n - 1; i++) {
//            for (int j = i + 1; j < n; ++j) {
//            tich = vec[i]*vec[j];
//            kq += tich;
//            }
//        }
//        cout << "KQ: "<< kq << endl;
//        }
//    else if(a<=1)
//    {
//        return 0;
//    }
//}

//===============================================//

//================== EX5 ========================//

//#include <iostream>
//#include <string>
//using namespace std;
//
//void cpp_strings() {
//    
//    string unformatted_full_name {"StephenHawking"};
//    
//    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//    //----WRITE YOUR CODE BELOW THIS LINE----
//    
//    string first_name {unformatted_full_name, 0, 7};
//    string last_name {unformatted_full_name, 7, 7};
//    string formatted_full_name = first_name + " " + last_name;
//    
//    //----WRITE YOUR CODE ABOVE THIS LINE----
//    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
//    
//    cout << formatted_full_name;
//}
//int main(){
//    cpp_strings();
//    return 0;
//}

//===============================================//

//================== EX6 ========================//

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void cpp_strings() {
//    
//    string journal_entry_1 {"Isaac Newton"};
//    string journal_entry_2 {"Leibniz"};
//    
//    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//    //----WRITE YOUR CODE BELOW THIS LINE----
//    int cnt = 0, tmp = 0;
//    for(char i : journal_entry_1){
//        if(i == 32){
//            cnt++;
//        }
//    }
//    if(cnt > 0){
//        for(char i : journal_entry_1){
//            tmp++;
//            if(i == 32){
//                cnt--;
//            }
//            if (cnt == 0) break;
//        }
//        journal_entry_1.erase(0, tmp);
//    }
////---------  ------- ----------- -------//
//    int cnt2 = 0, tmp2 = 0;
//    for(char i : journal_entry_2){
//        if(i == 32){
//            cnt2++;
//        }
//    }
//    
//    if(cnt2 > 0){
//        for(char i : journal_entry_2){
//            tmp2++;
//            if(i == 32){
//                cnt2--;
//            }
//            if (cnt2 == 0) break;
//        }
//        journal_entry_2.erase(0, tmp2);
//    }
//    
//    // ---- ------------ --- //
//    if (journal_entry_1.compare(journal_entry_2) > 0) {
//        swap(journal_entry_1, journal_entry_2);
//    }
//    // ---- ---------- --- //
//
//    //----WRITE YOUR CODE ABOVE THIS LINE----
//    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
//    
//    cout << journal_entry_1 << endl << journal_entry_2;
//}
//
//int main(){
//    cpp_strings();
//    return 0;
//}

//===============================================//

//================== EX7 ========================//

//#include <iostream>
//
//using namespace std;
//
////----DO NOT MODIFY THE CODE ABOVE THIS LINE----
////----WRITE YOUR FUNCTION PROTOTYPE BELOW THIS LINE----
//
//void print_grocery_list(int apples = 3, int oranges = 7, int mangos = 13);
//
////----WRITE YOUR FUNCTION PROTOTYPE ABOVE THIS LINE----
////----DO NOT MODIFY THE CODE BELOW THIS LINE----
//
//void modify_grocery_list() {
//    
//    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
//    
//    print_grocery_list();
//    cout <<"============" << endl;
//    print_grocery_list(5);
//    cout <<"============" << endl;
//    print_grocery_list(7,11);
//    
//    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
//    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
//}
//
//void print_grocery_list(int apples, int oranges, int mangos) { //----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
//
//    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
//    cout << apples << " apples" << "\n" << oranges << " oranges" << "\n" << mangos << " mangos" << "\n";
//}
//
//int main(){
//    modify_grocery_list();
//    return 0;
//}

//===============================================//

//================== EX8 ========================//

//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
////----DO NOT MODIFY THE CODE ABOVE THIS LINE----
////----WRITE YOUR FUNCTION PROTOTYPES BELOW THIS LINE----
//
//int find_area (int a){
//    int v = a*a;
//    return v;
//}
//
//double find_area (double a, double b){
//    double hcn = a*b;
//    return hcn;
//}
//
////----WRITE YOUR FUNCTION PROTOTYPES ABOVE THIS LINE----
////----DO NOT MODIFY THE CODE BELOW THIS LINE----
//
//void area_calc() {
//    
//    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
//    
//    int square_area = find_area(2);
//    double rectangle_area = find_area(4.5 , 2.3);
//    
//    
//    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
//    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
//    
//    cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
//}
//
////----DO NOT MODIFY THE CODE ABOVE THIS LINE----
////----WRITE YOUR FUNCTION DEFINITIONS BELOW THIS LINE----
//
//int main(){
//    area_calc();
//    return 0;
//}

//===============================================//

//================== EX9 ========================//

//#include <iostream>
//#include <string>
//#include <typeinfo>
//
//using namespace std;
//
////----DO NOT MODIFY THE CODE ABOVE THIS LINE----
////----WRITE THE FUNCTION PROTOTYPES BELOW THIS LINE----
//
//string print_guest_list(const string& guest_1, const string& guest_2, const string& guest_3);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
//void clear_guest_list(string& guest_1, string& guest_2, string& guest_3);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
//
////----WRITE THE FUNCTION PROTOTYPES ABOVE THIS LINE----
////----DO NOT MODIFY THE CODE BELOW THIS LINE----
//
//void event_guest_list() {
//
//    string guest_1 {"Larry"};
//    string guest_2 {"Moe"};
//    string guest_3 {"Curly"};
//
//    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//    //----WRITE THE FUNCTION CALLS BELOW THIS LINE----
//
//    print_guest_list(guest_1, guest_2, guest_3);
//    clear_guest_list(guest_1, guest_2, guest_3);
//    print_guest_list(guest_1, guest_2, guest_3);
//
//    //----WRITE THE FUNCTION CALLS ABOVE THIS LINE----
//    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
//}
//
////----DO NOT MODIFY THE CODE ABOVE THIS LINE----
////----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----
//
//string print_guest_list(const string& guest_1, const string& guest_2, const string& guest_3) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
//
//    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
//    cout << guest_1 << endl << guest_2 << endl << guest_3 << endl;
//    
//    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
//    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
//    string test_1 = typeid(guest_1).name(), test_2 = typeid(guest_2).name(), test_3 = typeid(guest_3).name();
//    return test_1 + test_2 + test_3;
//}
//
////----DO NOT MODIFY THE CODE ABOVE THIS LINE----
////----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----
//
//void clear_guest_list(string& guest_1, string& guest_2, string& guest_3) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
//    
//    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
//    
//    guest_1 = "...";
//    guest_2 = "...";
//    guest_3 = "...";
//        
//    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
//    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
//}
//
//int main(){
//    event_guest_list();
//    return 0;
//}

//===============================================//

//================== EX10 ========================//

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int sum_of_digits(int n) {
//    // Write your code below this line
//    
//    int sum = 0;
//    if( n < 10) {
//        return n;
//    }
//    else {
//        sum = (n % 10) + sum_of_digits(n / 10);
//    }
//    
//    return sum;
//    // Write your code above this line
//}
//
//int main(){
//    cout <<"Test Case: "; 
//    int x; cin >> x;
//    while (x--){
//        cout <<"Value n = "; 
//        int n; cin >> n;
//        int kq = sum_of_digits(n);
//        cout << "KQ = " << kq << endl;
//    }
//    return 0;
//}

//===============================================//

//================== EX11 ========================//

//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//double a_penny_doubled_everyday (int day, double penny) {
//    if(day == 1) {
//        return penny;
//    }
//    else {
//        return a_penny_doubled_everyday(day - 1, penny) * 2;
//    }
//}
//
//int main(){
//    double total, p;
//    int d;
//    cout << "Day: ";
//    cin >> d;
//    cout << "Penny: ";
//    cin >> p;
//    
//    total = a_penny_doubled_everyday(d, p);
//    cout <<"Total: "<< fixed << setprecision(2) << total;
//    
//    return 0;
//}

//===============================================//

//================== EX12 =========================//

//#include <iostream>
//
//using namespace std;
//
//void swapPointers(int* ptr1, int* ptr2) {
//    //-- Write your code below this line
//    
//    int tmp;
//    tmp = *ptr1;
//    *ptr1 = *ptr2;
//    *ptr2 = tmp;
//    
//    //-- Write your code above this line
//}
//
//int main(){
//    int a,b; cin >> a >> b;
//    int* ptrA = &a;
//    int* ptrB = &b;
//    
//    swapPointers(ptrA,ptrB);
//    cout << a <<" " << b;
//    return 0;
//}

//===============================================//

//================== EX13 =========================//

//#include <iostream>
//
//using namespace std;
//
//void multiply_with_pointer(int* ptr, int multiplier) {
//    *ptr *= multiplier;
//    cout << "KQ: "<< *ptr;
//}
//
//int main(){
//    int a,n;
//    cout <<"Nhap a = "; cin >> a;
//    cout <<"He so n = "; cin >> n;
//    int* ptr = &a;
//    multiply_with_pointer(ptr, n);
//    return 0;
//}

//=================================================//

//================== EX14 =========================//

//#include <iostream>
//
//using namespace std;
//
//int find_max_element(int* arr, int size) {
//    //-- Write your code below this line 
//    int max = *arr;
//    for(int i=0 ; i<size ; i++) {
//        if(max < *(arr+i)) {
//            max = *(arr+i);
//        }
//    }
//    //-- Write your code below this line
//    return max;
//}
//
//int main(){
//    int a[] = {12, 45, 67, 23, 9};
//    int n = sizeof(a) / sizeof(a[0]);
//    int kq = find_max_element(a, n);
//    cout << kq << endl;
//    return 0;
//}

//=================================================//

//================== EX15 =========================//

//#include <iostream>
//
//using namespace std;
//
//void reverse_array(int* arr, int size) {
//    //-- Write your code below this line 
//    int tmp = 0;
//    int n = size / 2;
//    for(int i=0 ; i<n ; i++) {
//        tmp = *(arr + i);
//        *(arr + i) = *(arr + size - i - 1);
//        *(arr + size - i - 1) = tmp;
//    }
//    for (int i=0 ; i<size ; i++) {
//        cout << *(arr + i) << " ";
//    }
//    //-- Write your code above this line
//}
//
//int main(){
//    int a[] = {1, 2, 3, 4, 5, 6};
//    int n = sizeof(a) / sizeof(a[0]);
//    for (auto x : a) {
//        cout << x << " ";
//    }
//    cout << endl;
//    reverse_array(a, n);
//    return 0;
//}

//=================================================//

//================== EX16 =========================//

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string reverse_string(const string &str) {
//    string reversed;
//    // Write your code below this line 
//    int n = str.size();
//    for(const char* ptr = &str[n] ; ptr >= &str[0] ; ptr-- ){
//        reversed += *ptr;
//    };
//    // Write your code abocve this line
//    return reversed;
//}
//
//int main(){
//    
//    string s; getline(cin, s);
//    string reverse = reverse_string(s);
//    cout << reverse;
//    
//    return 0;
//}

//=================== END =========================//



